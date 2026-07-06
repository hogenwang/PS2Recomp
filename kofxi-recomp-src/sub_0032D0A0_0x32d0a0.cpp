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

// Function: sub_0032D0A0
// Address: 0x32d0a0 - 0x32d170
void sub_0032D0A0_0x32d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D0A0_0x32d0a0");
#endif

    switch (ctx->pc) {
        case 0x32d0d4u: goto label_32d0d4;
        case 0x32d108u: goto label_32d108;
        case 0x32d128u: goto label_32d128;
        case 0x32d14cu: goto label_32d14c;
        default: break;
    }

    ctx->pc = 0x32d0a0u;

    // 0x32d0a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32d0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32d0a4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d0a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d0ac: 0x9443f370  lhu         $v1, -0xC90($v0)
    ctx->pc = 0x32d0acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294964080)));
    // 0x32d0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d0b4: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32D0B4u;
    {
        const bool branch_taken_0x32d0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d0b4) {
            ctx->pc = 0x32D0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D0B4u;
            // 0x32d0b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D120u;
            goto label_32d120;
        }
    }
    ctx->pc = 0x32D0BCu;
    // 0x32d0bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D0BCu;
    {
        const bool branch_taken_0x32d0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d0bc) {
            ctx->pc = 0x32D0CCu;
            goto label_32d0cc;
        }
    }
    ctx->pc = 0x32D0C4u;
    // 0x32d0c4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x32D0C4u;
    {
        const bool branch_taken_0x32d0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D0C4u;
        // 0x32d0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d0c4) {
            ctx->pc = 0x32D158u;
            goto label_32d158;
        }
    }
    ctx->pc = 0x32D0CCu;
label_32d0cc:
    // 0x32d0cc: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x32D0CCu;
    SET_GPR_U32(ctx, 31, 0x32D0D4u);
    ctx->pc = 0x197FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FF0u, 0x32D0CCu, 0x32D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D0D4u;
label_32d0d4:
    // 0x32d0d4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32d0d8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32d0dc: 0x9044f35b  lbu         $a0, -0xCA5($v0)
    ctx->pc = 0x32d0dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x32d0e0: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x32d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x32d0e4: 0x3c0601dd  lui         $a2, 0x1DD
    ctx->pc = 0x32d0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)477 << 16));
    // 0x32d0e8: 0x24631820  addiu       $v1, $v1, 0x1820
    ctx->pc = 0x32d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6176));
    // 0x32d0ec: 0x24a5d430  addiu       $a1, $a1, -0x2BD0
    ctx->pc = 0x32d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956080));
    // 0x32d0f0: 0x24c6f368  addiu       $a2, $a2, -0xC98
    ctx->pc = 0x32d0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964072));
    // 0x32d0f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32d0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32d0f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32d0fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x32d100: 0xc0660b0  jal         func_1982C0
    ctx->pc = 0x32D100u;
    SET_GPR_U32(ctx, 31, 0x32D108u);
    ctx->pc = 0x32D104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D100u;
    // 0x32d104: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1982C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1982C0u, 0x32D100u, 0x32D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D108u;
label_32d108:
    // 0x32d108: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32d108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32d10c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d110: 0x9463f370  lhu         $v1, -0xC90($v1)
    ctx->pc = 0x32d110u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964080)));
    // 0x32d114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32d114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32d118: 0xa443f370  sh          $v1, -0xC90($v0)
    ctx->pc = 0x32d118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964080), (uint16_t)GPR_U32(ctx, 3));
    // 0x32d11c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32d11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d120:
    // 0x32d120: 0xc066020  jal         func_198080
    ctx->pc = 0x32D120u;
    SET_GPR_U32(ctx, 31, 0x32D128u);
    ctx->pc = 0x32D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D120u;
    // 0x32d124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198080u, 0x32D120u, 0x32D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D128u;
label_32d128:
    // 0x32d128: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x32d128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32d12c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32d12cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32d130: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x32d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x32d134: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D134u;
    {
        const bool branch_taken_0x32d134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32d134) {
            ctx->pc = 0x32D154u;
            goto label_32d154;
        }
    }
    ctx->pc = 0x32D13Cu;
    // 0x32d13c: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x32d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x32d140: 0x8c45f368  lw          $a1, -0xC98($v0)
    ctx->pc = 0x32d140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964072)));
    // 0x32d144: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x32D144u;
    SET_GPR_U32(ctx, 31, 0x32D14Cu);
    ctx->pc = 0x32D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D144u;
    // 0x32d148: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x32D144u, 0x32D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D14Cu;
label_32d14c:
    // 0x32d14c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32D14Cu;
    {
        const bool branch_taken_0x32d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D14Cu;
        // 0x32d150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d14c) {
            ctx->pc = 0x32D158u;
            goto label_32d158;
        }
    }
    ctx->pc = 0x32D154u;
label_32d154:
    // 0x32d154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d158:
    // 0x32d158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d15c: 0x3e00008  jr          $ra
    ctx->pc = 0x32D15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D15Cu;
        // 0x32d160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D164u;
    // 0x32d164: 0x0  nop
    ctx->pc = 0x32d164u;
    // NOP
    // 0x32d168: 0x0  nop
    ctx->pc = 0x32d168u;
    // NOP
    // 0x32d16c: 0x0  nop
    ctx->pc = 0x32d16cu;
    // NOP
    if (ctx->pc == 0x32d16cu) { ctx->pc = 0x32d170u; }
}
