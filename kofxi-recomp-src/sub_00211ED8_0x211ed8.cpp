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

// Function: sub_00211ED8
// Address: 0x211ed8 - 0x212080
void sub_00211ED8_0x211ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211ED8_0x211ed8");
#endif

    switch (ctx->pc) {
        case 0x211f10u: goto label_211f10;
        case 0x211f48u: goto label_211f48;
        case 0x211facu: goto label_211fac;
        case 0x211fc0u: goto label_211fc0;
        case 0x211fd0u: goto label_211fd0;
        case 0x21203cu: goto label_21203c;
        case 0x212050u: goto label_212050;
        case 0x212058u: goto label_212058;
        default: break;
    }

    ctx->pc = 0x211ed8u;

label_211ed8:
    // 0x211ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211edc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x211edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x211ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211ee4: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x211ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    // 0x211ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211eec: 0x8043e52  j           func_10F948
    ctx->pc = 0x211EECu;
    ctx->pc = 0x211EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211EECu;
    // 0x211ef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x211EF4u;
    // 0x211ef4: 0x0  nop
    ctx->pc = 0x211ef4u;
    // NOP
    // 0x211ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211efc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x211efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211f00: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211f00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211f08: 0xc0847b6  jal         func_211ED8
    ctx->pc = 0x211F08u;
    SET_GPR_U32(ctx, 31, 0x211F10u);
    ctx->pc = 0x211F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F08u;
    // 0x211f0c: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211ED8u;
    goto label_211ed8;
    ctx->pc = 0x211F10u;
label_211f10:
    // 0x211f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211f14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x211f14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f18: 0x3e00008  jr          $ra
    ctx->pc = 0x211F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F18u;
        // 0x211f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211F20u;
    // 0x211f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211f24: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211f24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211f30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211f34: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x211f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211f38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x211f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211f40: 0xc0847b6  jal         func_211ED8
    ctx->pc = 0x211F40u;
    SET_GPR_U32(ctx, 31, 0x211F48u);
    ctx->pc = 0x211F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211F40u;
    // 0x211f44: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211ED8u;
    goto label_211ed8;
    ctx->pc = 0x211F48u;
label_211f48:
    // 0x211f48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x211f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211f50: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x211f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x211f54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x211F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211F5Cu;
        // 0x211f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211F64u;
    // 0x211f64: 0x0  nop
    ctx->pc = 0x211f64u;
    // NOP
    // 0x211f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211f6c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x211f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211f74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x211f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x211f78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211f7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x211f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x211f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x211f84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x211f84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x211f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x211f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x211f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x211f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x211f94: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x211f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211f98: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x211f98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x211f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x211f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211fa0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x211fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x211fa4: 0xc0844dc  jal         func_211370
    ctx->pc = 0x211FA4u;
    SET_GPR_U32(ctx, 31, 0x211FACu);
    ctx->pc = 0x211FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FA4u;
    // 0x211fa8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x211FA4u, 0x211FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FACu;
label_211fac:
    // 0x211fac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x211facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fb0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x211fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fb8: 0xc0844dc  jal         func_211370
    ctx->pc = 0x211FB8u;
    SET_GPR_U32(ctx, 31, 0x211FC0u);
    ctx->pc = 0x211FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FB8u;
    // 0x211fbc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x211FB8u, 0x211FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FC0u;
label_211fc0:
    // 0x211fc0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x211fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x211fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x211fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fc8: 0xc084820  jal         func_212080
    ctx->pc = 0x211FC8u;
    SET_GPR_U32(ctx, 31, 0x211FD0u);
    ctx->pc = 0x211FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211FC8u;
    // 0x211fcc: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212080u, 0x211FC8u, 0x211FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211FD0u;
label_211fd0:
    // 0x211fd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x211fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x211fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211fe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x211fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211fe4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x211fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211fe8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x211fec: 0x3e00008  jr          $ra
    ctx->pc = 0x211FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211FECu;
        // 0x211ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211FF4u;
    // 0x211ff4: 0x0  nop
    ctx->pc = 0x211ff4u;
    // NOP
    // 0x211ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x211ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x211ffc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x211ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x212000: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x212000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x212004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x212004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x212008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21200c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x212010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x212010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212014: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x212014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x212018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x212018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21201c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x212020: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x212020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212024: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x212024u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x212028: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21202c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21202cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212030: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x212030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x212034: 0xc084612  jal         func_211848
    ctx->pc = 0x212034u;
    SET_GPR_U32(ctx, 31, 0x21203Cu);
    ctx->pc = 0x212038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212034u;
    // 0x212038: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x212034u, 0x21203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21203Cu;
label_21203c:
    // 0x21203c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212040: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x212040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x212044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212048: 0xc084612  jal         func_211848
    ctx->pc = 0x212048u;
    SET_GPR_U32(ctx, 31, 0x212050u);
    ctx->pc = 0x21204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212048u;
    // 0x21204c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x212048u, 0x212050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212050u;
label_212050:
    // 0x212050: 0xc084820  jal         func_212080
    ctx->pc = 0x212050u;
    SET_GPR_U32(ctx, 31, 0x212058u);
    ctx->pc = 0x212054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x212050u;
    // 0x212054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212080u, 0x212050u, 0x212058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212058u;
label_212058:
    // 0x212058: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x212058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21205c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21205cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x212060: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x212060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x212064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x212064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x212068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21206c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21206cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x212070: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x212070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212074: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x212074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x212078: 0x3e00008  jr          $ra
    ctx->pc = 0x212078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212078u;
        // 0x21207c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212080u;
}
