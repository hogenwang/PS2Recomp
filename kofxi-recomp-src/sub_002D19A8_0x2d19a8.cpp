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

// Function: sub_002D19A8
// Address: 0x2d19a8 - 0x2d1ec8
void sub_002D19A8_0x2d19a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D19A8_0x2d19a8");
#endif

    switch (ctx->pc) {
        case 0x2d19ecu: goto label_2d19ec;
        case 0x2d1a10u: goto label_2d1a10;
        case 0x2d1a2cu: goto label_2d1a2c;
        case 0x2d1a34u: goto label_2d1a34;
        case 0x2d1a58u: goto label_2d1a58;
        case 0x2d1a60u: goto label_2d1a60;
        case 0x2d1ab4u: goto label_2d1ab4;
        case 0x2d1abcu: goto label_2d1abc;
        case 0x2d1ac4u: goto label_2d1ac4;
        case 0x2d1b08u: goto label_2d1b08;
        case 0x2d1b10u: goto label_2d1b10;
        case 0x2d1b18u: goto label_2d1b18;
        case 0x2d1b2cu: goto label_2d1b2c;
        case 0x2d1b44u: goto label_2d1b44;
        case 0x2d1b58u: goto label_2d1b58;
        case 0x2d1b70u: goto label_2d1b70;
        case 0x2d1b88u: goto label_2d1b88;
        case 0x2d1ba0u: goto label_2d1ba0;
        case 0x2d1bf0u: goto label_2d1bf0;
        case 0x2d1bf8u: goto label_2d1bf8;
        case 0x2d1c08u: goto label_2d1c08;
        case 0x2d1c20u: goto label_2d1c20;
        case 0x2d1c38u: goto label_2d1c38;
        case 0x2d1c48u: goto label_2d1c48;
        case 0x2d1c60u: goto label_2d1c60;
        case 0x2d1ca4u: goto label_2d1ca4;
        case 0x2d1cb8u: goto label_2d1cb8;
        case 0x2d1cccu: goto label_2d1ccc;
        case 0x2d1ce4u: goto label_2d1ce4;
        case 0x2d1cf8u: goto label_2d1cf8;
        case 0x2d1d0cu: goto label_2d1d0c;
        case 0x2d1d18u: goto label_2d1d18;
        case 0x2d1d38u: goto label_2d1d38;
        case 0x2d1d68u: goto label_2d1d68;
        case 0x2d1d78u: goto label_2d1d78;
        case 0x2d1d94u: goto label_2d1d94;
        case 0x2d1da0u: goto label_2d1da0;
        case 0x2d1e04u: goto label_2d1e04;
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e18u: goto label_2d1e18;
        case 0x2d1e40u: goto label_2d1e40;
        case 0x2d1e7cu: goto label_2d1e7c;
        case 0x2d1e90u: goto label_2d1e90;
        case 0x2d1e98u: goto label_2d1e98;
        default: break;
    }

    ctx->pc = 0x2d19a8u;

    // 0x2d19a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d19a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d19ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d19acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d19b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d19b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d19bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d19bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d19c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d19c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d19c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d19cc: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x2d19ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d19d0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D19D0u;
    {
        const bool branch_taken_0x2d19d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D19D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19D0u;
        // 0x2d19d4: 0x1120c0  sll         $a0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19d0) {
            ctx->pc = 0x2D1A70u;
            goto label_2d1a70;
        }
    }
    ctx->pc = 0x2D19D8u;
    // 0x2d19d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d19dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D19DCu;
    {
        const bool branch_taken_0x2d19dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d19dc) {
            ctx->pc = 0x2D1A08u;
            goto label_2d1a08;
        }
    }
    ctx->pc = 0x2D19E4u;
    // 0x2d19e4: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D19E4u;
    SET_GPR_U32(ctx, 31, 0x2D19ECu);
    ctx->pc = 0x2D19E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D19E4u;
    // 0x2d19e8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D19E4u, 0x2D19ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19ECu;
label_2d19ec:
    // 0x2d19ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d19ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d19f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19f4: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D19F4u;
    {
        const bool branch_taken_0x2d19f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D19F4u;
        // 0x2d19f8: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d19f4) {
            ctx->pc = 0x2D1A70u;
            goto label_2d1a70;
        }
    }
    ctx->pc = 0x2D19FCu;
    // 0x2d19fc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d1a00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1A00u;
    {
        const bool branch_taken_0x2d1a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A00u;
        // 0x2d1a04: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a00) {
            ctx->pc = 0x2D1A70u;
            goto label_2d1a70;
        }
    }
    ctx->pc = 0x2D1A08u;
label_2d1a08:
    // 0x2d1a08: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D1A08u;
    SET_GPR_U32(ctx, 31, 0x2D1A10u);
    ctx->pc = 0x2D82E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82E0u, 0x2D1A08u, 0x2D1A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A10u;
label_2d1a10:
    // 0x2d1a10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d1a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a14: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2D1A14u;
    {
        const bool branch_taken_0x2d1a14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A14u;
        // 0x2d1a18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a14) {
            ctx->pc = 0x2D1A48u;
            goto label_2d1a48;
        }
    }
    ctx->pc = 0x2D1A1Cu;
    // 0x2d1a1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d1a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1a20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d1a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1a24: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1A24u;
    SET_GPR_U32(ctx, 31, 0x2D1A2Cu);
    ctx->pc = 0x2D1A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A24u;
    // 0x2d1a28: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D1A24u, 0x2D1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A2Cu;
label_2d1a2c:
    // 0x2d1a2c: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D1A34u);
    ctx->pc = 0x2D1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A2Cu;
    // 0x2d1a30: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D1A2Cu, 0x2D1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A34u;
label_2d1a34:
    // 0x2d1a34: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2d1a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2d1a38: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x2d1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x2d1a3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D1A3Cu;
    {
        const bool branch_taken_0x2d1a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A3Cu;
        // 0x2d1a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a3c) {
            ctx->pc = 0x2D1A6Cu;
            goto label_2d1a6c;
        }
    }
    ctx->pc = 0x2D1A44u;
    // 0x2d1a44: 0x0  nop
    ctx->pc = 0x2d1a44u;
    // NOP
label_2d1a48:
    // 0x2d1a48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d1a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1a4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2d1a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1a50: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1A50u;
    SET_GPR_U32(ctx, 31, 0x2D1A58u);
    ctx->pc = 0x2D1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A50u;
    // 0x2d1a54: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D1A50u, 0x2D1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A58u;
label_2d1a58:
    // 0x2d1a58: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1A58u;
    SET_GPR_U32(ctx, 31, 0x2D1A60u);
    ctx->pc = 0x2D1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1A58u;
    // 0x2d1a5c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D1A58u, 0x2D1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A60u;
label_2d1a60:
    // 0x2d1a60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d1a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d1a64: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d1a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d1a68: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2d1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2d1a6c:
    // 0x2d1a6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d1a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d1a70:
    // 0x2d1a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d1a74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1a78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d1a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d1a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1a80: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A80u;
        // 0x2d1a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1A88u;
    // 0x2d1a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d1a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d1a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d1a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d1a98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2d1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1a9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1A9Cu;
    {
        const bool branch_taken_0x2d1a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1A9Cu;
        // 0x2d1aa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1a9c) {
            ctx->pc = 0x2D1AC0u;
            goto label_2d1ac0;
        }
    }
    ctx->pc = 0x2D1AA4u;
    // 0x2d1aa4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d1aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d1aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d1aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1aac: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D1AACu;
    SET_GPR_U32(ctx, 31, 0x2D1AB4u);
    ctx->pc = 0x2D1AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AACu;
    // 0x2d1ab0: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8238u, 0x2D1AACu, 0x2D1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1AB4u;
label_2d1ab4:
    // 0x2d1ab4: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2D1AB4u;
    SET_GPR_U32(ctx, 31, 0x2D1ABCu);
    ctx->pc = 0x2D1AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1AB4u;
    // 0x2d1ab8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8370u, 0x2D1AB4u, 0x2D1ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1ABCu;
label_2d1abc:
    // 0x2d1abc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d1abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d1ac0:
    // 0x2d1ac0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d1ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2d1ac4:
    // 0x2d1ac4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d1ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d1ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d1ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d1accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1AD0u;
        // 0x2d1ad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1AD8u;
    // 0x2d1ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1adc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d1adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d1ae0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d1ae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ae8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d1ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d1aec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d1aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d1af0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d1af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1af4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1af8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1afc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1b00: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1B00u;
    SET_GPR_U32(ctx, 31, 0x2D1B08u);
    ctx->pc = 0x2D1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B00u;
    // 0x2d1b04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1B00u, 0x2D1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B08u;
label_2d1b08:
    // 0x2d1b08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1B08u;
    {
        const bool branch_taken_0x2d1b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B08u;
        // 0x2d1b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b08) {
            ctx->pc = 0x2D1B20u;
            goto label_2d1b20;
        }
    }
    ctx->pc = 0x2D1B10u;
label_2d1b10:
    // 0x2d1b10: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D1B10u;
    SET_GPR_U32(ctx, 31, 0x2D1B18u);
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D1B10u, 0x2D1B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B18u;
label_2d1b18:
    // 0x2d1b18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D1B18u;
    {
        const bool branch_taken_0x2d1b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B18u;
        // 0x2d1b1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b18) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B20u;
label_2d1b20:
    // 0x2d1b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b24: 0xc0b3f3e  jal         func_2CFCF8
    ctx->pc = 0x2D1B24u;
    SET_GPR_U32(ctx, 31, 0x2D1B2Cu);
    ctx->pc = 0x2D1B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B24u;
    // 0x2d1b28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCF8u, 0x2D1B24u, 0x2D1B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B2Cu;
label_2d1b2c:
    // 0x2d1b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b34: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1B34u;
    {
        const bool branch_taken_0x2d1b34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B34u;
        // 0x2d1b38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b34) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B3Cu;
    // 0x2d1b3c: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1B44u);
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1B3Cu, 0x2D1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B44u;
label_2d1b44:
    // 0x2d1b44: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1B44u;
    {
        const bool branch_taken_0x2d1b44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d1b44) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B4Cu;
    // 0x2d1b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b50: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D1B50u;
    SET_GPR_U32(ctx, 31, 0x2D1B58u);
    ctx->pc = 0x2D1B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B50u;
    // 0x2d1b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4058u, 0x2D1B50u, 0x2D1B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B58u;
label_2d1b58:
    // 0x2d1b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b60: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D1B60u;
    {
        const bool branch_taken_0x2d1b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B60u;
        // 0x2d1b64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b60) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B68u;
    // 0x2d1b68: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1B68u;
    SET_GPR_U32(ctx, 31, 0x2D1B70u);
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1B68u, 0x2D1B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B70u;
label_2d1b70:
    // 0x2d1b70: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1B70u;
    {
        const bool branch_taken_0x2d1b70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d1b70) {
            ctx->pc = 0x2D1B98u;
            goto label_2d1b98;
        }
    }
    ctx->pc = 0x2D1B78u;
    // 0x2d1b78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b80: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1B80u;
    SET_GPR_U32(ctx, 31, 0x2D1B88u);
    ctx->pc = 0x2D1B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B80u;
    // 0x2d1b84: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1B80u, 0x2D1B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1B88u;
label_2d1b88:
    // 0x2d1b88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1b90: 0x1200ffdf  beqz        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2D1B90u;
    {
        const bool branch_taken_0x2d1b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1B90u;
        // 0x2d1b94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1b90) {
            ctx->pc = 0x2D1B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1b10;
        }
    }
    ctx->pc = 0x2D1B98u;
label_2d1b98:
    // 0x2d1b98: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1B98u;
    SET_GPR_U32(ctx, 31, 0x2D1BA0u);
    ctx->pc = 0x2D1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1B98u;
    // 0x2d1b9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1B98u, 0x2D1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BA0u;
label_2d1ba0:
    // 0x2d1ba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d1ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ba4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d1ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1ba8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d1ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1bac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d1bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1bb0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d1bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BB8u;
        // 0x2d1bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1BC0u;
    // 0x2d1bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1bc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d1bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d1bd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d1bd8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d1bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bdc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d1bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d1be0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d1be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1be4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1be8: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1BE8u;
    SET_GPR_U32(ctx, 31, 0x2D1BF0u);
    ctx->pc = 0x2D1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1BE8u;
    // 0x2d1bec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1BE8u, 0x2D1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1BF0u;
label_2d1bf0:
    // 0x2d1bf0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2D1BF0u;
    {
        const bool branch_taken_0x2d1bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1BF0u;
        // 0x2d1bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1bf0) {
            ctx->pc = 0x2D1CB0u;
            goto label_2d1cb0;
        }
    }
    ctx->pc = 0x2D1BF8u;
label_2d1bf8:
    // 0x2d1bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1bfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c00: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D1C00u;
    SET_GPR_U32(ctx, 31, 0x2D1C08u);
    ctx->pc = 0x2D1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C00u;
    // 0x2d1c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D1C00u, 0x2D1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C08u;
label_2d1c08:
    // 0x2d1c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c0c: 0x16000040  bnez        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D1C0Cu;
    {
        const bool branch_taken_0x2d1c0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c0c) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1C14u;
    // 0x2d1c14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c18: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1C18u;
    SET_GPR_U32(ctx, 31, 0x2D1C20u);
    ctx->pc = 0x2D1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C18u;
    // 0x2d1c1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1C18u, 0x2D1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C20u;
label_2d1c20:
    // 0x2d1c20: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1C20u;
    {
        const bool branch_taken_0x2d1c20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C20u;
        // 0x2d1c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c20) {
            ctx->pc = 0x2D1C40u;
            goto label_2d1c40;
        }
    }
    ctx->pc = 0x2D1C28u;
    // 0x2d1c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d1c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d1c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c30: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D1C30u;
    SET_GPR_U32(ctx, 31, 0x2D1C38u);
    ctx->pc = 0x2D1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C30u;
    // 0x2d1c34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D1C30u, 0x2D1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C38u;
label_2d1c38:
    // 0x2d1c38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D1C38u;
    {
        const bool branch_taken_0x2d1c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C38u;
        // 0x2d1c3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c38) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1C40u;
label_2d1c40:
    // 0x2d1c40: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D1C40u;
    SET_GPR_U32(ctx, 31, 0x2D1C48u);
    ctx->pc = 0x2D1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C40u;
    // 0x2d1c44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D1C40u, 0x2D1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C48u;
label_2d1c48:
    // 0x2d1c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c4c: 0x16000030  bnez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D1C4Cu;
    {
        const bool branch_taken_0x2d1c4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C4Cu;
        // 0x2d1c50: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c4c) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1C54u;
    // 0x2d1c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c58: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1C58u;
    SET_GPR_U32(ctx, 31, 0x2D1C60u);
    ctx->pc = 0x2D1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C58u;
    // 0x2d1c5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1C58u, 0x2D1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C60u;
label_2d1c60:
    // 0x2d1c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c64: 0x1600002a  bnez        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1C64u;
    {
        const bool branch_taken_0x2d1c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C64u;
        // 0x2d1c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c64) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1C6Cu;
    // 0x2d1c6c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d1c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d1c70: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1C70u;
    {
        const bool branch_taken_0x2d1c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d1c70) {
            ctx->pc = 0x2D1C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C70u;
            // 0x2d1c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C98u;
            goto label_2d1c98;
        }
    }
    ctx->pc = 0x2D1C78u;
    // 0x2d1c78: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d1c7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d1c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1c80: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1C80u;
    {
        const bool branch_taken_0x2d1c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c80) {
            ctx->pc = 0x2D1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1C80u;
            // 0x2d1c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1C98u;
            goto label_2d1c98;
        }
    }
    ctx->pc = 0x2D1C88u;
    // 0x2d1c88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2d1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d1c8c: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x2d1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x2d1c90: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2D1C90u;
    {
        const bool branch_taken_0x2d1c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1C90u;
        // 0x2d1c94: 0xfc400000  sd          $zero, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1c90) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1C98u;
label_2d1c98:
    // 0x2d1c98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d1c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1c9c: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D1C9Cu;
    SET_GPR_U32(ctx, 31, 0x2D1CA4u);
    ctx->pc = 0x2D1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1C9Cu;
    // 0x2d1ca0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D1C9Cu, 0x2D1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CA4u;
label_2d1ca4:
    // 0x2d1ca4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D1CA4u;
    {
        const bool branch_taken_0x2d1ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CA4u;
        // 0x2d1ca8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ca4) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1CACu;
    // 0x2d1cac: 0x0  nop
    ctx->pc = 0x2d1cacu;
    // NOP
label_2d1cb0:
    // 0x2d1cb0: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1CB0u;
    SET_GPR_U32(ctx, 31, 0x2D1CB8u);
    ctx->pc = 0x2D1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CB0u;
    // 0x2d1cb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1CB0u, 0x2D1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CB8u;
label_2d1cb8:
    // 0x2d1cb8: 0x440ffcf  bltz        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2D1CB8u;
    {
        const bool branch_taken_0x2d1cb8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CB8u;
        // 0x2d1cbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cb8) {
            ctx->pc = 0x2D1BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1bf8;
        }
    }
    ctx->pc = 0x2D1CC0u;
    // 0x2d1cc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cc4: 0xc0b3fdc  jal         func_2CFF70
    ctx->pc = 0x2D1CC4u;
    SET_GPR_U32(ctx, 31, 0x2D1CCCu);
    ctx->pc = 0x2D1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CC4u;
    // 0x2d1cc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF70u, 0x2D1CC4u, 0x2D1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CCCu;
label_2d1ccc:
    // 0x2d1ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cd0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1CD0u;
    {
        const bool branch_taken_0x2d1cd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cd0) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1CD8u;
    // 0x2d1cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cdc: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1CDCu;
    SET_GPR_U32(ctx, 31, 0x2D1CE4u);
    ctx->pc = 0x2D1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CDCu;
    // 0x2d1ce0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1CDCu, 0x2D1CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CE4u;
label_2d1ce4:
    // 0x2d1ce4: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1CE4u;
    {
        const bool branch_taken_0x2d1ce4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CE4u;
        // 0x2d1ce8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1ce4) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1CECu;
    // 0x2d1cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cf0: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1CF0u;
    SET_GPR_U32(ctx, 31, 0x2D1CF8u);
    ctx->pc = 0x2D1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1CF0u;
    // 0x2d1cf4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1CF0u, 0x2D1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CF8u;
label_2d1cf8:
    // 0x2d1cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1cfc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1CFCu;
    {
        const bool branch_taken_0x2d1cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1CFCu;
        // 0x2d1d00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1cfc) {
            ctx->pc = 0x2D1D10u;
            goto label_2d1d10;
        }
    }
    ctx->pc = 0x2D1D04u;
    // 0x2d1d04: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D1D04u;
    SET_GPR_U32(ctx, 31, 0x2D1D0Cu);
    ctx->pc = 0x2D1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D04u;
    // 0x2d1d08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFBF8u, 0x2D1D04u, 0x2D1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D0Cu;
label_2d1d0c:
    // 0x2d1d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d10:
    // 0x2d1d10: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1D10u;
    SET_GPR_U32(ctx, 31, 0x2D1D18u);
    ctx->pc = 0x2D1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D10u;
    // 0x2d1d14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1D10u, 0x2D1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D18u;
label_2d1d18:
    // 0x2d1d18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d1d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d1d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1d20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d1d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1d24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d1d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1d28: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d1d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D30u;
        // 0x2d1d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1D38u;
label_2d1d38:
    // 0x2d1d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d1d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d1d3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d1d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d1d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d1d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d1d4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d1d50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1d50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d54: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d1d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d1d58: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d1d58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d1d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d1d60: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1D60u;
    SET_GPR_U32(ctx, 31, 0x2D1D68u);
    ctx->pc = 0x2D1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D60u;
    // 0x2d1d64: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1D60u, 0x2D1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D68u;
label_2d1d68:
    // 0x2d1d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d70: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D1D70u;
    SET_GPR_U32(ctx, 31, 0x2D1D78u);
    ctx->pc = 0x2D1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D70u;
    // 0x2d1d74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2568u, 0x2D1D70u, 0x2D1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D78u;
label_2d1d78:
    // 0x2d1d78: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d1d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d1d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d84: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1D84u;
    {
        const bool branch_taken_0x2d1d84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D84u;
        // 0x2d1d88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d84) {
            ctx->pc = 0x2D1D98u;
            goto label_2d1d98;
        }
    }
    ctx->pc = 0x2D1D8Cu;
    // 0x2d1d8c: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D1D94u);
    ctx->pc = 0x2D2A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2A20u, 0x2D1D8Cu, 0x2D1D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D94u;
label_2d1d94:
    // 0x2d1d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d1d98:
    // 0x2d1d98: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1D98u;
    SET_GPR_U32(ctx, 31, 0x2D1DA0u);
    ctx->pc = 0x2D1D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D98u;
    // 0x2d1d9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1D98u, 0x2D1DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DA0u;
label_2d1da0:
    // 0x2d1da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d1da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1da4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d1da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1da8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d1da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1dac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d1dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1db0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d1db0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d1db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DB8u;
        // 0x2d1dbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1DC0u;
    // 0x2d1dc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1dc4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d1dc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d1dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1dd0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d1dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d1dd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d1dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d1dd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d1dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1ddc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d1ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d1de0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d1de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1de4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d1de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d1de8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d1de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1dec: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d1df0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d1df0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1df4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2d1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2d1df8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d1dfc: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1DFCu;
    SET_GPR_U32(ctx, 31, 0x2D1E04u);
    ctx->pc = 0x2D1E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1DFCu;
    // 0x2d1e00: 0x24160108  addiu       $s6, $zero, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1DFCu, 0x2D1E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E04u;
label_2d1e04:
    // 0x2d1e04: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2d1e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1e08: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D1E08u;
    SET_GPR_U32(ctx, 31, 0x2D1E10u);
    ctx->pc = 0x2D1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E08u;
    // 0x2d1e0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1850u, 0x2D1E08u, 0x2D1E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E10u;
label_2d1e10:
    // 0x2d1e10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1E10u;
    {
        const bool branch_taken_0x2d1e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E10u;
        // 0x2d1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e10) {
            ctx->pc = 0x2D1E38u;
            goto label_2d1e38;
        }
    }
    ctx->pc = 0x2D1E18u;
label_2d1e18:
    // 0x2d1e18: 0x5454001b  bnel        $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D1E18u;
    {
        const bool branch_taken_0x2d1e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2d1e18) {
            ctx->pc = 0x2D1E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E18u;
            // 0x2d1e1c: 0x2411010b  addiu       $s1, $zero, 0x10B (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E88u;
            goto label_2d1e88;
        }
    }
    ctx->pc = 0x2D1E20u;
    // 0x2d1e20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d1e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d1e24: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d1e24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1e28: 0x10750017  beq         $v1, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D1E28u;
    {
        const bool branch_taken_0x2d1e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d1e28) {
            ctx->pc = 0x2D1E88u;
            goto label_2d1e88;
        }
    }
    ctx->pc = 0x2D1E30u;
    // 0x2d1e30: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1E30u;
    {
        const bool branch_taken_0x2d1e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E30u;
        // 0x2d1e34: 0x2411010b  addiu       $s1, $zero, 0x10B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e30) {
            ctx->pc = 0x2D1E88u;
            goto label_2d1e88;
        }
    }
    ctx->pc = 0x2D1E38u;
label_2d1e38:
    // 0x2d1e38: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D1E38u;
    SET_GPR_U32(ctx, 31, 0x2D1E40u);
    ctx->pc = 0x2D1E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E38u;
    // 0x2d1e3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2D1E38u, 0x2D1E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E40u;
label_2d1e40:
    // 0x2d1e40: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1E40u;
    {
        const bool branch_taken_0x2d1e40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d1e40) {
            ctx->pc = 0x2D1E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E40u;
            // 0x2d1e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1E68u;
            goto label_2d1e68;
        }
    }
    ctx->pc = 0x2D1E48u;
    // 0x2d1e48: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d1e4c: 0x24110107  addiu       $s1, $zero, 0x107
    ctx->pc = 0x2d1e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x2d1e50: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d1e54: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d1e58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d1e5c: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d1e5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d1e60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1E60u;
    {
        const bool branch_taken_0x2d1e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E60u;
        // 0x2d1e64: 0x2c4880b  movn        $s1, $s6, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e60) {
            ctx->pc = 0x2D1E88u;
            goto label_2d1e88;
        }
    }
    ctx->pc = 0x2D1E68u;
label_2d1e68:
    // 0x2d1e68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d1e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d1e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e70: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d1e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e74: 0xc0b4dda  jal         func_2D3768
    ctx->pc = 0x2D1E74u;
    SET_GPR_U32(ctx, 31, 0x2D1E7Cu);
    ctx->pc = 0x2D1E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E74u;
    // 0x2d1e78: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3768u, 0x2D1E74u, 0x2D1E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E7Cu;
label_2d1e7c:
    // 0x2d1e7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d1e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e80: 0x1220ffe5  beqz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2D1E80u;
    {
        const bool branch_taken_0x2d1e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E80u;
        // 0x2d1e84: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e80) {
            ctx->pc = 0x2D1E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1e18;
        }
    }
    ctx->pc = 0x2D1E88u;
label_2d1e88:
    // 0x2d1e88: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1E88u;
    SET_GPR_U32(ctx, 31, 0x2D1E90u);
    ctx->pc = 0x2D1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E88u;
    // 0x2d1e8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1E88u, 0x2D1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E90u;
label_2d1e90:
    // 0x2d1e90: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D1E90u;
    SET_GPR_U32(ctx, 31, 0x2D1E98u);
    ctx->pc = 0x2D1E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1E90u;
    // 0x2d1e94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1860u, 0x2D1E90u, 0x2D1E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1E98u;
label_2d1e98:
    // 0x2d1e98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d1e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e9c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d1e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1ea0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d1ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ea4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d1ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1ea8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d1ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1eac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d1eacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1eb0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d1eb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d1eb4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2d1eb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1eb8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d1eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d1ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EBCu;
        // 0x2d1ec0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1EC4u;
    // 0x2d1ec4: 0x0  nop
    ctx->pc = 0x2d1ec4u;
    // NOP
}
