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

// Function: sub_0020D030
// Address: 0x20d030 - 0x20d130
void sub_0020D030_0x20d030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D030_0x20d030");
#endif

    switch (ctx->pc) {
        case 0x20d064u: goto label_20d064;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d094u: goto label_20d094;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0acu: goto label_20d0ac;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d100u: goto label_20d100;
        default: break;
    }

    ctx->pc = 0x20d030u;

    // 0x20d030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d034: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x20d034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x20d038: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d03c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x20d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x20d040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d044: 0x34216400  ori         $at, $at, 0x6400
    ctx->pc = 0x20d044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25600);
    // 0x20d048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d050: 0x8c42b7d8  lw          $v0, -0x4828($v0)
    ctx->pc = 0x20d050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x20d054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d05c: 0xc040454  jal         func_101150
    ctx->pc = 0x20D05Cu;
    SET_GPR_U32(ctx, 31, 0x20D064u);
    ctx->pc = 0x20D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D05Cu;
    // 0x20d060: 0x418021  addu        $s0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20D05Cu, 0x20D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D064u;
label_20d064:
    // 0x20d064: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20d064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20d068: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x20d068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20d06c: 0x2484a3f0  addiu       $a0, $a0, -0x5C10
    ctx->pc = 0x20d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    // 0x20d070: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x20d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x20d074: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20d074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d078: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20d078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20d07c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d07cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d080: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d080u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d084: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20D084u;
    SET_GPR_U32(ctx, 31, 0x20D08Cu);
    ctx->pc = 0x20D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D084u;
    // 0x20d088: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x20D084u, 0x20D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D08Cu;
label_20d08c:
    // 0x20d08c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20D08Cu;
    SET_GPR_U32(ctx, 31, 0x20D094u);
    ctx->pc = 0x20D090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D08Cu;
    // 0x20d090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20D08Cu, 0x20D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D094u;
label_20d094:
    // 0x20d094: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20d098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d09c: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20D09Cu;
    SET_GPR_U32(ctx, 31, 0x20D0A4u);
    ctx->pc = 0x20D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D09Cu;
    // 0x20d0a0: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x20D09Cu, 0x20D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0A4u;
label_20d0a4:
    // 0x20d0a4: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20D0A4u;
    SET_GPR_U32(ctx, 31, 0x20D0ACu);
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x20D0A4u, 0x20D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0ACu;
label_20d0ac:
    // 0x20d0ac: 0xc083378  jal         func_20CDE0
    ctx->pc = 0x20D0ACu;
    SET_GPR_U32(ctx, 31, 0x20D0B4u);
    ctx->pc = 0x20D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0ACu;
    // 0x20d0b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CDE0u, 0x20D0ACu, 0x20D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0B4u;
label_20d0b4:
    // 0x20d0b4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d0b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x20d0bc: 0x8c46a490  lw          $a2, -0x5B70($v0)
    ctx->pc = 0x20d0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20d0c0: 0x3465000a  ori         $a1, $v1, 0xA
    ctx->pc = 0x20d0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x20d0c4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20d0c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0cc: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x20d0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20d0d0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d0d4: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x20d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x20d0d8: 0x8c42a490  lw          $v0, -0x5B70($v0)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20d0dc: 0x7c4000b0  sq          $zero, 0xB0($v0)
    ctx->pc = 0x20d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 0));
    // 0x20d0e0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20D0E0u;
    SET_GPR_U32(ctx, 31, 0x20D0E8u);
    ctx->pc = 0x20D0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0E0u;
    // 0x20d0e4: 0xac4300b0  sw          $v1, 0xB0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20D0E0u, 0x20D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0E8u;
label_20d0e8:
    // 0x20d0e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20d0ec: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20d0f0: 0x8c45a490  lw          $a1, -0x5B70($v0)
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943888)));
    // 0x20d0f4: 0xc040a04  jal         func_102810
    ctx->pc = 0x20D0F4u;
    SET_GPR_U32(ctx, 31, 0x20D0FCu);
    ctx->pc = 0x20D0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0F4u;
    // 0x20d0f8: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20D0F4u, 0x20D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0FCu;
label_20d0fc:
    // 0x20d0fc: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x20d0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_20d100:
    // 0x20d100: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x20d100u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x20d104: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x20d104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x20d108: 0x0  nop
    ctx->pc = 0x20d108u;
    // NOP
    // 0x20d10c: 0x0  nop
    ctx->pc = 0x20d10cu;
    // NOP
    // 0x20d110: 0x0  nop
    ctx->pc = 0x20d110u;
    // NOP
    // 0x20d114: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20D114u;
    {
        const bool branch_taken_0x20d114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d114) {
            ctx->pc = 0x20D100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d100;
        }
    }
    ctx->pc = 0x20D11Cu;
    // 0x20d11c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d128: 0x3e00008  jr          $ra
    ctx->pc = 0x20D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D128u;
        // 0x20d12c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D130u;
}
