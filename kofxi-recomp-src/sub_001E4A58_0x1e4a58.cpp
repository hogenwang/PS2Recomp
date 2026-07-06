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

// Function: sub_001E4A58
// Address: 0x1e4a58 - 0x1e4b50
void sub_001E4A58_0x1e4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4A58_0x1e4a58");
#endif

    switch (ctx->pc) {
        case 0x1e4a6cu: goto label_1e4a6c;
        case 0x1e4a9cu: goto label_1e4a9c;
        case 0x1e4b28u: goto label_1e4b28;
        default: break;
    }

    ctx->pc = 0x1e4a58u;

    // 0x1e4a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e4a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4a64: 0xc07917a  jal         func_1E45E8
    ctx->pc = 0x1E4A64u;
    SET_GPR_U32(ctx, 31, 0x1E4A6Cu);
    ctx->pc = 0x1E4A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A64u;
    // 0x1e4a68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E45E8u, 0x1E4A64u, 0x1E4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A6Cu;
label_1e4a6c:
    // 0x1e4a6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4a70: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4A70u;
    {
        const bool branch_taken_0x1e4a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4a70) {
            ctx->pc = 0x1E4A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4A70u;
            // 0x1e4a74: 0x8e030380  lw          $v1, 0x380($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4A80u;
            goto label_1e4a80;
        }
    }
    ctx->pc = 0x1E4A78u;
    // 0x1e4a78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E4A78u;
    {
        const bool branch_taken_0x1e4a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A78u;
        // 0x1e4a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a78) {
            ctx->pc = 0x1E4AA8u;
            goto label_1e4aa8;
        }
    }
    ctx->pc = 0x1E4A80u;
label_1e4a80:
    // 0x1e4a80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4A80u;
    {
        const bool branch_taken_0x1e4a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4A80u;
        // 0x1e4a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4a80) {
            ctx->pc = 0x1E4AA8u;
            goto label_1e4aa8;
        }
    }
    ctx->pc = 0x1E4A88u;
    // 0x1e4a88: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1e4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e4a8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e4a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a94: 0xc07f992  jal         func_1FE648
    ctx->pc = 0x1E4A94u;
    SET_GPR_U32(ctx, 31, 0x1E4A9Cu);
    ctx->pc = 0x1E4A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4A94u;
    // 0x1e4a98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE648u, 0x1E4A94u, 0x1E4A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4A9Cu;
label_1e4a9c:
    // 0x1e4a9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e4a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4aa0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1e4aa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1e4aa4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1e4aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e4aa8:
    // 0x1e4aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4aac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AB0u;
        // 0x1e4ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4AB8u;
    // 0x1e4ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4abc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4ac0: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ac8: 0x80806cc  j           func_201B30
    ctx->pc = 0x1E4AC8u;
    ctx->pc = 0x1E4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AC8u;
    // 0x1e4acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B30u, 0x1E4AC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4AD0u;
    // 0x1e4ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4ad8: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1e4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1e4adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4ae0: 0x80806d2  j           func_201B48
    ctx->pc = 0x1E4AE0u;
    ctx->pc = 0x1E4AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4AE0u;
    // 0x1e4ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B48u, 0x1E4AE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E4AE8u;
    // 0x1e4ae8: 0x24840398  addiu       $a0, $a0, 0x398
    ctx->pc = 0x1e4ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
    // 0x1e4aec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e4af0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e4af4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1e4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1e4af8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4AF8u;
        // 0x1e4afc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4B00u;
    // 0x1e4b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4b04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e4b08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e4b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e4b10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e4b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e4b18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e4b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4b1c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1e4b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1e4b20: 0xc0806b8  jal         func_201AE0
    ctx->pc = 0x1E4B20u;
    SET_GPR_U32(ctx, 31, 0x1E4B28u);
    ctx->pc = 0x1E4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4B20u;
    // 0x1e4b24: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AE0u, 0x1E4B20u, 0x1E4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4B28u;
label_1e4b28:
    // 0x1e4b28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4b2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1e4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1e4b30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e4b34: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1e4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1e4b38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e4b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4b3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e4b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4b40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4B44u;
        // 0x1e4b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4B4Cu;
    // 0x1e4b4c: 0x0  nop
    ctx->pc = 0x1e4b4cu;
    // NOP
}
