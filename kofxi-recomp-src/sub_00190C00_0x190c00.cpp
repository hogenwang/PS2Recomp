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

// Function: sub_00190C00
// Address: 0x190c00 - 0x190d70
void sub_00190C00_0x190c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190C00_0x190c00");
#endif

    switch (ctx->pc) {
        case 0x190c18u: goto label_190c18;
        case 0x190c24u: goto label_190c24;
        case 0x190c30u: goto label_190c30;
        case 0x190c3cu: goto label_190c3c;
        case 0x190c50u: goto label_190c50;
        case 0x190c5cu: goto label_190c5c;
        case 0x190c68u: goto label_190c68;
        case 0x190c74u: goto label_190c74;
        case 0x190ca8u: goto label_190ca8;
        case 0x190ce4u: goto label_190ce4;
        case 0x190d00u: goto label_190d00;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d40u: goto label_190d40;
        case 0x190d5cu: goto label_190d5c;
        default: break;
    }

    ctx->pc = 0x190c00u;

    // 0x190c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190c04: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x190C04u;
    {
        const bool branch_taken_0x190c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x190C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C04u;
        // 0x190c08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c04) {
            ctx->pc = 0x190C44u;
            goto label_190c44;
        }
    }
    ctx->pc = 0x190C0Cu;
    // 0x190c0c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x190c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x190c10: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C10u;
    SET_GPR_U32(ctx, 31, 0x190C18u);
    ctx->pc = 0x190C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C10u;
    // 0x190c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C10u, 0x190C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C18u;
label_190c18:
    // 0x190c18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x190c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x190c1c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C1Cu;
    SET_GPR_U32(ctx, 31, 0x190C24u);
    ctx->pc = 0x190C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C1Cu;
    // 0x190c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C1Cu, 0x190C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C24u;
label_190c24:
    // 0x190c24: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x190c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x190c28: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C28u;
    SET_GPR_U32(ctx, 31, 0x190C30u);
    ctx->pc = 0x190C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C28u;
    // 0x190c2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C28u, 0x190C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C30u;
label_190c30:
    // 0x190c30: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x190c34: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C34u;
    SET_GPR_U32(ctx, 31, 0x190C3Cu);
    ctx->pc = 0x190C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C34u;
    // 0x190c38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C34u, 0x190C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C3Cu;
label_190c3c:
    // 0x190c3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x190C3Cu;
    {
        const bool branch_taken_0x190c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C3Cu;
        // 0x190c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190c3c) {
            ctx->pc = 0x190C78u;
            goto label_190c78;
        }
    }
    ctx->pc = 0x190C44u;
label_190c44:
    // 0x190c44: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x190c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x190c48: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C48u;
    SET_GPR_U32(ctx, 31, 0x190C50u);
    ctx->pc = 0x190C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C48u;
    // 0x190c4c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C48u, 0x190C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C50u;
label_190c50:
    // 0x190c50: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x190c54: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C54u;
    SET_GPR_U32(ctx, 31, 0x190C5Cu);
    ctx->pc = 0x190C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C54u;
    // 0x190c58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C54u, 0x190C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C5Cu;
label_190c5c:
    // 0x190c5c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x190c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x190c60: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C60u;
    SET_GPR_U32(ctx, 31, 0x190C68u);
    ctx->pc = 0x190C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C60u;
    // 0x190c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C60u, 0x190C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C68u;
label_190c68:
    // 0x190c68: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x190c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x190c6c: 0xc0c8e60  jal         func_323980
    ctx->pc = 0x190C6Cu;
    SET_GPR_U32(ctx, 31, 0x190C74u);
    ctx->pc = 0x190C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190C6Cu;
    // 0x190c70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323980u, 0x190C6Cu, 0x190C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C74u;
label_190c74:
    // 0x190c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190c78:
    // 0x190c78: 0x3e00008  jr          $ra
    ctx->pc = 0x190C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190C78u;
        // 0x190c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C80u;
    // 0x190c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190c88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190c8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190c90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190c94: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x190c98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190c9c: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x190c9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190ca0: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x190CA0u;
    SET_GPR_U32(ctx, 31, 0x190CA8u);
    ctx->pc = 0x190CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CA0u;
    // 0x190ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x190CA0u, 0x190CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CA8u;
label_190ca8:
    // 0x190ca8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x190ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x190cac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x190cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x190cb0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x190cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x190cb4: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x190cb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x190cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190cbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x190cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x190cc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x190cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190cc4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x190cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190cc8: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x190cc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x190ccc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x190cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x190cd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x190CD0u;
    {
        const bool branch_taken_0x190cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190cd0) {
            ctx->pc = 0x190CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190CD0u;
            // 0x190cd4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190CE8u;
            goto label_190ce8;
        }
    }
    ctx->pc = 0x190CD8u;
    // 0x190cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cdc: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x190CDCu;
    SET_GPR_U32(ctx, 31, 0x190CE4u);
    ctx->pc = 0x190CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CDCu;
    // 0x190ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x190CDCu, 0x190CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CE4u;
label_190ce4:
    // 0x190ce4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x190ce4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_190ce8:
    // 0x190ce8: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x190ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x190cec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x190CECu;
    {
        const bool branch_taken_0x190cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190cec) {
            ctx->pc = 0x190CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190CECu;
            // 0x190cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D04u;
            goto label_190d04;
        }
    }
    ctx->pc = 0x190CF4u;
    // 0x190cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cf8: 0xc063e34  jal         func_18F8D0
    ctx->pc = 0x190CF8u;
    SET_GPR_U32(ctx, 31, 0x190D00u);
    ctx->pc = 0x190CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CF8u;
    // 0x190cfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F8D0u, 0x190CF8u, 0x190D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D00u;
label_190d00:
    // 0x190d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190d04:
    // 0x190d04: 0xc064030  jal         func_1900C0
    ctx->pc = 0x190D04u;
    SET_GPR_U32(ctx, 31, 0x190D0Cu);
    ctx->pc = 0x1900C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1900C0u, 0x190D04u, 0x190D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D0Cu;
label_190d0c:
    // 0x190d0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190d10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190d14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190d18: 0x3e00008  jr          $ra
    ctx->pc = 0x190D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D18u;
        // 0x190d1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D20u;
    // 0x190d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190d2c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x190d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x190d30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190d34: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x190d34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x190d38: 0xc063f30  jal         func_18FCC0
    ctx->pc = 0x190D38u;
    SET_GPR_U32(ctx, 31, 0x190D40u);
    ctx->pc = 0x190D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D38u;
    // 0x190d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FCC0u, 0x190D38u, 0x190D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D40u;
label_190d40:
    // 0x190d40: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x190d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x190d44: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x190d48: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x190d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x190d4c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D4Cu;
    {
        const bool branch_taken_0x190d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d4c) {
            ctx->pc = 0x190D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190D4Cu;
            // 0x190d50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190D60u;
            goto label_190d60;
        }
    }
    ctx->pc = 0x190D54u;
    // 0x190d54: 0xc063fac  jal         func_18FEB0
    ctx->pc = 0x190D54u;
    SET_GPR_U32(ctx, 31, 0x190D5Cu);
    ctx->pc = 0x190D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190D54u;
    // 0x190d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FEB0u, 0x190D54u, 0x190D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D5Cu;
label_190d5c:
    // 0x190d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190d60:
    // 0x190d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190d64: 0x3e00008  jr          $ra
    ctx->pc = 0x190D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D6Cu;
    // 0x190d6c: 0x0  nop
    ctx->pc = 0x190d6cu;
    // NOP
}
