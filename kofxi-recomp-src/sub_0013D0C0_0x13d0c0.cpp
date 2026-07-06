#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D0C0
// Address: 0x13d0c0 - 0x13d150
void sub_0013D0C0_0x13d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D0C0_0x13d0c0");
#endif

    switch (ctx->pc) {
        case 0x13d0d8u: goto label_13d0d8;
        case 0x13d0fcu: goto label_13d0fc;
        case 0x13d11cu: goto label_13d11c;
        case 0x13d12cu: goto label_13d12c;
        default: break;
    }

    ctx->pc = 0x13d0c0u;

    // 0x13d0c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d0c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d0c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d0cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d0d0: 0xc062804  jal         func_18A010
    ctx->pc = 0x13D0D0u;
    SET_GPR_U32(ctx, 31, 0x13D0D8u);
    ctx->pc = 0x13D0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0D0u;
    // 0x13d0d4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13D0D0u, 0x13D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0D8u;
label_13d0d8:
    // 0x13d0d8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13D0D8u;
    {
        const bool branch_taken_0x13d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0d8) {
            ctx->pc = 0x13D0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D0D8u;
            // 0x13d0dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D140u;
            goto label_13d140;
        }
    }
    ctx->pc = 0x13D0E0u;
    // 0x13d0e0: 0x8e02023c  lw          $v0, 0x23C($s0)
    ctx->pc = 0x13d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x13d0e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x13d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x13d0e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D0E8u;
    {
        const bool branch_taken_0x13d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d0e8) {
            ctx->pc = 0x13D0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D0E8u;
            // 0x13d0ec: 0x9203021c  lbu         $v1, 0x21C($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D104u;
            goto label_13d104;
        }
    }
    ctx->pc = 0x13D0F0u;
    // 0x13d0f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13d0f4: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13D0F4u;
    SET_GPR_U32(ctx, 31, 0x13D0FCu);
    ctx->pc = 0x13D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0F4u;
    // 0x13d0f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13D0F4u, 0x13D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0FCu;
label_13d0fc:
    // 0x13d0fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13D0FCu;
    {
        const bool branch_taken_0x13d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0FCu;
        // 0x13d100: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d0fc) {
            ctx->pc = 0x13D130u;
            goto label_13d130;
        }
    }
    ctx->pc = 0x13D104u;
label_13d104:
    // 0x13d104: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13d108: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D108u;
    {
        const bool branch_taken_0x13d108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13d108) {
            ctx->pc = 0x13D10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D108u;
            // 0x13d10c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D124u;
            goto label_13d124;
        }
    }
    ctx->pc = 0x13D110u;
    // 0x13d110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d114: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13D114u;
    SET_GPR_U32(ctx, 31, 0x13D11Cu);
    ctx->pc = 0x13D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D114u;
    // 0x13d118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13D114u, 0x13D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D11Cu;
label_13d11c:
    // 0x13d11c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D11Cu;
    {
        const bool branch_taken_0x13d11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d11c) {
            ctx->pc = 0x13D12Cu;
            goto label_13d12c;
        }
    }
    ctx->pc = 0x13D124u;
label_13d124:
    // 0x13d124: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x13D124u;
    SET_GPR_U32(ctx, 31, 0x13D12Cu);
    ctx->pc = 0x13D128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D124u;
    // 0x13d128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x13D124u, 0x13D12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D12Cu;
label_13d12c:
    // 0x13d12c: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x13d12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_13d130:
    // 0x13d130: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x13d130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x13d134: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13d138: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x13d138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
    // 0x13d13c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13d140:
    // 0x13d140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d144: 0x3e00008  jr          $ra
    ctx->pc = 0x13D144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D144u;
        // 0x13d148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D14Cu;
    // 0x13d14c: 0x0  nop
    ctx->pc = 0x13d14cu;
    // NOP
    if (ctx->pc == 0x13d14cu) { ctx->pc = 0x13d150u; }
}
