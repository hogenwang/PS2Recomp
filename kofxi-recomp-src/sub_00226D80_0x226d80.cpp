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

// Function: sub_00226D80
// Address: 0x226d80 - 0x2276d0
void sub_00226D80_0x226d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D80_0x226d80");
#endif

    switch (ctx->pc) {
        case 0x226dbcu: goto label_226dbc;
        case 0x226de4u: goto label_226de4;
        case 0x226df0u: goto label_226df0;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e60u: goto label_226e60;
        case 0x226e78u: goto label_226e78;
        case 0x226e80u: goto label_226e80;
        case 0x226ebcu: goto label_226ebc;
        case 0x226ed8u: goto label_226ed8;
        case 0x226ef8u: goto label_226ef8;
        case 0x226f00u: goto label_226f00;
        case 0x226f34u: goto label_226f34;
        case 0x226f48u: goto label_226f48;
        case 0x226f84u: goto label_226f84;
        case 0x226fa0u: goto label_226fa0;
        case 0x226fdcu: goto label_226fdc;
        case 0x226fecu: goto label_226fec;
        case 0x22701cu: goto label_22701c;
        case 0x227030u: goto label_227030;
        case 0x227048u: goto label_227048;
        case 0x227088u: goto label_227088;
        case 0x2270d4u: goto label_2270d4;
        case 0x2270e4u: goto label_2270e4;
        case 0x227120u: goto label_227120;
        case 0x22713cu: goto label_22713c;
        case 0x227174u: goto label_227174;
        case 0x227184u: goto label_227184;
        case 0x2271b4u: goto label_2271b4;
        case 0x2271d8u: goto label_2271d8;
        case 0x2271f0u: goto label_2271f0;
        case 0x227220u: goto label_227220;
        case 0x227244u: goto label_227244;
        case 0x22725cu: goto label_22725c;
        case 0x22728cu: goto label_22728c;
        case 0x2272a8u: goto label_2272a8;
        case 0x2272e0u: goto label_2272e0;
        case 0x2272f4u: goto label_2272f4;
        case 0x227324u: goto label_227324;
        case 0x227340u: goto label_227340;
        case 0x227378u: goto label_227378;
        case 0x22738cu: goto label_22738c;
        case 0x2273bcu: goto label_2273bc;
        case 0x2273d8u: goto label_2273d8;
        case 0x227410u: goto label_227410;
        case 0x227424u: goto label_227424;
        case 0x227454u: goto label_227454;
        case 0x227470u: goto label_227470;
        case 0x2274a8u: goto label_2274a8;
        case 0x2274b8u: goto label_2274b8;
        case 0x2274c8u: goto label_2274c8;
        case 0x2274d4u: goto label_2274d4;
        case 0x2274e0u: goto label_2274e0;
        case 0x227510u: goto label_227510;
        case 0x227540u: goto label_227540;
        case 0x227548u: goto label_227548;
        case 0x227558u: goto label_227558;
        case 0x227574u: goto label_227574;
        case 0x2275a4u: goto label_2275a4;
        case 0x2275b4u: goto label_2275b4;
        case 0x2275e0u: goto label_2275e0;
        case 0x227600u: goto label_227600;
        case 0x227610u: goto label_227610;
        case 0x227644u: goto label_227644;
        case 0x227664u: goto label_227664;
        case 0x22766cu: goto label_22766c;
        case 0x22769cu: goto label_22769c;
        case 0x2276c4u: goto label_2276c4;
        default: break;
    }

    ctx->pc = 0x226d80u;

    // 0x226d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x226d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x226d84: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x226d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x226d88: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x226d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x226d8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x226d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x226d90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d94: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x226d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x226d98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x226d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226d9c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x226d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x226da0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x226da0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226da4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x226da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x226da8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x226da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x226dac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x226dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x226db0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x226db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x226db4: 0xc089a6e  jal         func_2269B8
    ctx->pc = 0x226DB4u;
    SET_GPR_U32(ctx, 31, 0x226DBCu);
    ctx->pc = 0x226DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DB4u;
    // 0x226db8: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269B8u, 0x226DB4u, 0x226DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DBCu;
label_226dbc:
    // 0x226dbc: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x226DBCu;
    {
        const bool branch_taken_0x226dbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x226DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DBCu;
        // 0x226dc0: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226dbc) {
            ctx->pc = 0x226E18u;
            goto label_226e18;
        }
    }
    ctx->pc = 0x226DC4u;
    // 0x226dc4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x226dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x226dc8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226dcc: 0x25f13c98  addiu       $s1, $t7, 0x3C98
    ctx->pc = 0x226dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15512));
    // 0x226dd0: 0x24e73ca8  addiu       $a3, $a3, 0x3CA8
    ctx->pc = 0x226dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15528));
    // 0x226dd4: 0x240501b3  addiu       $a1, $zero, 0x1B3
    ctx->pc = 0x226dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x226dd8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x226dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226ddc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226DDCu;
    SET_GPR_U32(ctx, 31, 0x226DE4u);
    ctx->pc = 0x226DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DDCu;
    // 0x226de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226DDCu, 0x226DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DE4u;
label_226de4:
    // 0x226de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226de8: 0xc0bd358  jal         func_2F4D60
    ctx->pc = 0x226DE8u;
    SET_GPR_U32(ctx, 31, 0x226DF0u);
    ctx->pc = 0x226DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DE8u;
    // 0x226dec: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D60u, 0x226DE8u, 0x226DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DF0u;
label_226df0:
    // 0x226df0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226df0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226df4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x226DF4u;
    {
        const bool branch_taken_0x226df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0xade2f1e8  sw          $v0, -0xE18($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226df4) {
            ctx->pc = 0x226E48u;
            goto label_226e48;
        }
    }
    ctx->pc = 0x226DFCu;
    // 0x226dfc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e04: 0x240501b6  addiu       $a1, $zero, 0x1B6
    ctx->pc = 0x226e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    // 0x226e08: 0x24e73cc0  addiu       $a3, $a3, 0x3CC0
    ctx->pc = 0x226e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15552));
label_226e0c:
    // 0x226e0c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226E0Cu;
    SET_GPR_U32(ctx, 31, 0x226E14u);
    ctx->pc = 0x226E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E0Cu;
    // 0x226e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226E0Cu, 0x226E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E14u;
label_226e14:
    // 0x226e14: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x226e14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226e18:
    // 0x226e18: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x226e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226e1c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x226e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e20: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x226e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226e24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x226e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226e28: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x226e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226e2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x226e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226e30: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x226e30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x226e34: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x226e34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226e38: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x226e38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x226e3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x226e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x226e40: 0x3e00008  jr          $ra
    ctx->pc = 0x226E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E40u;
        // 0x226e44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226E48u;
label_226e48:
    // 0x226e48: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226e48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e50: 0x240501b9  addiu       $a1, $zero, 0x1B9
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
    // 0x226e54: 0x24e73ce0  addiu       $a3, $a3, 0x3CE0
    ctx->pc = 0x226e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15584));
    // 0x226e58: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226E58u;
    SET_GPR_U32(ctx, 31, 0x226E60u);
    ctx->pc = 0x226E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E58u;
    // 0x226e5c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226E58u, 0x226E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E60u;
label_226e60:
    // 0x226e60: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e68: 0x240501bc  addiu       $a1, $zero, 0x1BC
    ctx->pc = 0x226e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x226e6c: 0x24e73d00  addiu       $a3, $a3, 0x3D00
    ctx->pc = 0x226e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15616));
    // 0x226e70: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226E70u;
    SET_GPR_U32(ctx, 31, 0x226E78u);
    ctx->pc = 0x226E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226E70u;
    // 0x226e74: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226E70u, 0x226E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E78u;
label_226e78:
    // 0x226e78: 0xc0bc7d6  jal         func_2F1F58
    ctx->pc = 0x226E78u;
    SET_GPR_U32(ctx, 31, 0x226E80u);
    ctx->pc = 0x2F1F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F58u, 0x226E78u, 0x226E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226E80u;
label_226e80:
    // 0x226e80: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226e80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x226e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226E88u;
    {
        const bool branch_taken_0x226e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E88u;
        // 0x226e8c: 0xade2f1e0  sw          $v0, -0xE20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e88) {
            ctx->pc = 0x226EA4u;
            goto label_226ea4;
        }
    }
    ctx->pc = 0x226E90u;
    // 0x226e90: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e98: 0x240501be  addiu       $a1, $zero, 0x1BE
    ctx->pc = 0x226e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 446));
    // 0x226e9c: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x226E9Cu;
    {
        const bool branch_taken_0x226e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E9Cu;
        // 0x226ea0: 0x24e73d18  addiu       $a3, $a3, 0x3D18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226e9c) {
            ctx->pc = 0x226E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e0c;
        }
    }
    ctx->pc = 0x226EA4u;
label_226ea4:
    // 0x226ea4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eac: 0x240501c1  addiu       $a1, $zero, 0x1C1
    ctx->pc = 0x226eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 449));
    // 0x226eb0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x226eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226eb4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226EB4u;
    SET_GPR_U32(ctx, 31, 0x226EBCu);
    ctx->pc = 0x226EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EB4u;
    // 0x226eb8: 0x24e73d30  addiu       $a3, $a3, 0x3D30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226EB4u, 0x226EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EBCu;
label_226ebc:
    // 0x226ebc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x226ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x226ec0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x226ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x226ec4: 0x25f03d48  addiu       $s0, $t7, 0x3D48
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15688));
    // 0x226ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ecc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x226eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x226ed0: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x226ED0u;
    SET_GPR_U32(ctx, 31, 0x226ED8u);
    ctx->pc = 0x226ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226ED0u;
    // 0x226ed4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x226ED0u, 0x226ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ED8u;
label_226ed8:
    // 0x226ed8: 0x443000b  bgezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226ED8u;
    {
        const bool branch_taken_0x226ed8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x226ed8) {
            ctx->pc = 0x226EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226ED8u;
            // 0x226edc: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F08u;
            goto label_226f08;
        }
    }
    ctx->pc = 0x226EE0u;
    // 0x226ee0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226ee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ee8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226ee8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eec: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x226eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x226ef0: 0x240501ca  addiu       $a1, $zero, 0x1CA
    ctx->pc = 0x226ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
    // 0x226ef4: 0x0  nop
    ctx->pc = 0x226ef4u;
    // NOP
label_226ef8:
    // 0x226ef8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226EF8u;
    SET_GPR_U32(ctx, 31, 0x226F00u);
    ctx->pc = 0x226EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226EF8u;
    // 0x226efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226EF8u, 0x226F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F00u;
label_226f00:
    // 0x226f00: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x226F00u;
    {
        const bool branch_taken_0x226f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F00u;
        // 0x226f04: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f00) {
            ctx->pc = 0x226E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e18;
        }
    }
    ctx->pc = 0x226F08u;
label_226f08:
    // 0x226f08: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226f0c: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x226F0Cu;
    {
        const bool branch_taken_0x226f0c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F0Cu;
        // 0x226f10: 0x25e93d60  addiu       $t1, $t7, 0x3D60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 15712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f0c) {
            ctx->pc = 0x226F18u;
            goto label_226f18;
        }
    }
    ctx->pc = 0x226F14u;
    // 0x226f14: 0x8dc9000c  lw          $t1, 0xC($t6)
    ctx->pc = 0x226f14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
label_226f18:
    // 0x226f18: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226f18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f20: 0x240501cf  addiu       $a1, $zero, 0x1CF
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
    // 0x226f24: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226f28: 0x24e73d88  addiu       $a3, $a3, 0x3D88
    ctx->pc = 0x226f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15752));
    // 0x226f2c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226F2Cu;
    SET_GPR_U32(ctx, 31, 0x226F34u);
    ctx->pc = 0x226F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F2Cu;
    // 0x226f30: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226F2Cu, 0x226F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F34u;
label_226f34:
    // 0x226f34: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226f34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f3c: 0x8de6f1e8  lw          $a2, -0xE18($t7)
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963688)));
    // 0x226f40: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x226F40u;
    SET_GPR_U32(ctx, 31, 0x226F48u);
    ctx->pc = 0x226F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F40u;
    // 0x226f44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x226F40u, 0x226F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F48u;
label_226f48:
    // 0x226f48: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226F48u;
    {
        const bool branch_taken_0x226f48 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x226f48) {
            ctx->pc = 0x226F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226F48u;
            // 0x226f4c: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226F68u;
            goto label_226f68;
        }
    }
    ctx->pc = 0x226F50u;
    // 0x226f50: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f58: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f5c: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x226f60: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x226F60u;
    {
        const bool branch_taken_0x226f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226F60u;
        // 0x226f64: 0x240501d2  addiu       $a1, $zero, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226f60) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x226F68u;
label_226f68:
    // 0x226f68: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226f68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f6c: 0x25f73db0  addiu       $s7, $t7, 0x3DB0
    ctx->pc = 0x226f6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), 15792));
    // 0x226f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f74: 0x240501d6  addiu       $a1, $zero, 0x1D6
    ctx->pc = 0x226f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    // 0x226f78: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x226f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226f7c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226F7Cu;
    SET_GPR_U32(ctx, 31, 0x226F84u);
    ctx->pc = 0x226F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F7Cu;
    // 0x226f80: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226F7Cu, 0x226F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226F84u;
label_226f84:
    // 0x226f84: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x226f84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x226f88: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x226f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x226f8c: 0x25f03df0  addiu       $s0, $t7, 0x3DF0
    ctx->pc = 0x226f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15856));
    // 0x226f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226f94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226f98: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x226F98u;
    SET_GPR_U32(ctx, 31, 0x226FA0u);
    ctx->pc = 0x226F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226F98u;
    // 0x226f9c: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x226F98u, 0x226FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FA0u;
label_226fa0:
    // 0x226fa0: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x226FA0u;
    {
        const bool branch_taken_0x226fa0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x226fa0) {
            ctx->pc = 0x226FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226FA0u;
            // 0x226fa4: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226FC0u;
            goto label_226fc0;
        }
    }
    ctx->pc = 0x226FA8u;
    // 0x226fa8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fb4: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x226fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x226fb8: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x226FB8u;
    {
        const bool branch_taken_0x226fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FB8u;
        // 0x226fbc: 0x240501e1  addiu       $a1, $zero, 0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fb8) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x226FC0u;
label_226fc0:
    // 0x226fc0: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x226fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x226fc4: 0x240501e6  addiu       $a1, $zero, 0x1E6
    ctx->pc = 0x226fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 486));
    // 0x226fc8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x226fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x226fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fd0: 0x24e73e00  addiu       $a3, $a3, 0x3E00
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15872));
    // 0x226fd4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226FD4u;
    SET_GPR_U32(ctx, 31, 0x226FDCu);
    ctx->pc = 0x226FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FD4u;
    // 0x226fd8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226FD4u, 0x226FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FDCu;
label_226fdc:
    // 0x226fdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226fe0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x226fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226fe4: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x226FE4u;
    SET_GPR_U32(ctx, 31, 0x226FECu);
    ctx->pc = 0x226FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226FE4u;
    // 0x226fe8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x226FE4u, 0x226FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226FECu;
label_226fec:
    // 0x226fec: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226FECu;
    {
        const bool branch_taken_0x226fec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226FECu;
        // 0x226ff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226fec) {
            ctx->pc = 0x227008u;
            goto label_227008;
        }
    }
    ctx->pc = 0x226FF4u;
    // 0x226ff4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226ff8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x226ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ffc: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x226ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227000: 0x1000ffbd  b           . + 4 + (-0x43 << 2)
    ctx->pc = 0x227000u;
    {
        const bool branch_taken_0x227000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227000u;
        // 0x227004: 0x240501e9  addiu       $a1, $zero, 0x1E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227000) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227008u;
label_227008:
    // 0x227008: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x227008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22700c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22700cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227010: 0x240501ed  addiu       $a1, $zero, 0x1ED
    ctx->pc = 0x227010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 493));
    // 0x227014: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227014u;
    SET_GPR_U32(ctx, 31, 0x22701Cu);
    ctx->pc = 0x227018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227014u;
    // 0x227018: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227014u, 0x22701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22701Cu;
label_22701c:
    // 0x22701c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x22701cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227020: 0x166f0013  bne         $s3, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x227020u;
    {
        const bool branch_taken_0x227020 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x227024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227020u;
        // 0x227024: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227020) {
            ctx->pc = 0x227070u;
            goto label_227070;
        }
    }
    ctx->pc = 0x227028u;
    // 0x227028: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x227028u;
    SET_GPR_U32(ctx, 31, 0x227030u);
    ctx->pc = 0x22702Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227028u;
    // 0x22702c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x227028u, 0x227030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227030u;
label_227030:
    // 0x227030: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x227030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227038: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x227038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22703c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x22703cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x227040: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x227040u;
    SET_GPR_U32(ctx, 31, 0x227048u);
    ctx->pc = 0x227044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227040u;
    // 0x227044: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x227040u, 0x227048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227048u;
label_227048:
    // 0x227048: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227048u;
    {
        const bool branch_taken_0x227048 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x227048) {
            ctx->pc = 0x22704Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227048u;
            // 0x22704c: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227070u;
            goto label_227070;
        }
    }
    ctx->pc = 0x227050u;
    // 0x227050: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x227054: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22705c: 0x25083e48  addiu       $t0, $t0, 0x3E48
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15944));
    // 0x227060: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227064: 0x1000ffa4  b           . + 4 + (-0x5C << 2)
    ctx->pc = 0x227064u;
    {
        const bool branch_taken_0x227064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227064u;
        // 0x227068: 0x240501f8  addiu       $a1, $zero, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227064) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x22706Cu;
    // 0x22706c: 0x0  nop
    ctx->pc = 0x22706cu;
    // NOP
label_227070:
    // 0x227070: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x227070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x227074: 0x25f03e28  addiu       $s0, $t7, 0x3E28
    ctx->pc = 0x227074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15912));
    // 0x227078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22707c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x22707cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x227080: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x227080u;
    SET_GPR_U32(ctx, 31, 0x227088u);
    ctx->pc = 0x227084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227080u;
    // 0x227084: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x227080u, 0x227088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227088u;
label_227088:
    // 0x227088: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x227088u;
    {
        const bool branch_taken_0x227088 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x227088) {
            ctx->pc = 0x22708Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227088u;
            // 0x22708c: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2270ACu;
            goto label_2270ac;
        }
    }
    ctx->pc = 0x227090u;
    // 0x227090: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227094: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227098: 0x24843c98  addiu       $a0, $a0, 0x3C98
    ctx->pc = 0x227098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15512));
    // 0x22709c: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x22709cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x2270a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2270a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270a4: 0x1000ff94  b           . + 4 + (-0x6C << 2)
    ctx->pc = 0x2270A4u;
    {
        const bool branch_taken_0x2270a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2270A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270A4u;
        // 0x2270a8: 0x24050204  addiu       $a1, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270a4) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x2270ACu;
label_2270ac:
    // 0x2270ac: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x2270acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2270b0: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x2270b0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x2270b4: 0x25f13c98  addiu       $s1, $t7, 0x3C98
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15512));
    // 0x2270b8: 0x25d33e00  addiu       $s3, $t6, 0x3E00
    ctx->pc = 0x2270b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 15872));
    // 0x2270bc: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x2270bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2270c0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2270c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2270c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2270c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270cc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2270CCu;
    SET_GPR_U32(ctx, 31, 0x2270D4u);
    ctx->pc = 0x2270D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270CCu;
    // 0x2270d0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2270CCu, 0x2270D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270D4u;
label_2270d4:
    // 0x2270d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2270d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270d8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2270dc: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x2270DCu;
    SET_GPR_U32(ctx, 31, 0x2270E4u);
    ctx->pc = 0x2270E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270DCu;
    // 0x2270e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x2270DCu, 0x2270E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270E4u;
label_2270e4:
    // 0x2270e4: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2270E4u;
    {
        const bool branch_taken_0x2270e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2270e4) {
            ctx->pc = 0x2270E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2270E4u;
            // 0x2270e8: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227104u;
            goto label_227104;
        }
    }
    ctx->pc = 0x2270ECu;
    // 0x2270ec: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2270ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2270f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2270f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2270f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f8: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x2270f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x2270fc: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x2270FCu;
    {
        const bool branch_taken_0x2270fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270FCu;
        // 0x227100: 0x2405020c  addiu       $a1, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270fc) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227104u;
label_227104:
    // 0x227104: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227108: 0x25f43db0  addiu       $s4, $t7, 0x3DB0
    ctx->pc = 0x227108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), 15792));
    // 0x22710c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227110: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x227110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x227114: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227118: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227118u;
    SET_GPR_U32(ctx, 31, 0x227120u);
    ctx->pc = 0x22711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227118u;
    // 0x22711c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227118u, 0x227120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227120u;
label_227120:
    // 0x227120: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227120u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227124: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x227124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x227128: 0x25f03e60  addiu       $s0, $t7, 0x3E60
    ctx->pc = 0x227128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15968));
    // 0x22712c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227130: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x227130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227134: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x227134u;
    SET_GPR_U32(ctx, 31, 0x22713Cu);
    ctx->pc = 0x227138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227134u;
    // 0x227138: 0x27a6000c  addiu       $a2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x227134u, 0x22713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22713Cu;
label_22713c:
    // 0x22713c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22713Cu;
    {
        const bool branch_taken_0x22713c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22713Cu;
        // 0x227140: 0x8fa9000c  lw          $t1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22713c) {
            ctx->pc = 0x22715Cu;
            goto label_22715c;
        }
    }
    ctx->pc = 0x227144u;
    // 0x227144: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22714c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22714cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227150: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x227154: 0x1000ff68  b           . + 4 + (-0x98 << 2)
    ctx->pc = 0x227154u;
    {
        const bool branch_taken_0x227154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227154u;
        // 0x227158: 0x2405021b  addiu       $a1, $zero, 0x21B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227154) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x22715Cu;
label_22715c:
    // 0x22715c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x22715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x227160: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227168: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22716c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22716Cu;
    SET_GPR_U32(ctx, 31, 0x227174u);
    ctx->pc = 0x227170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22716Cu;
    // 0x227170: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22716Cu, 0x227174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227174u;
label_227174:
    // 0x227174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227178: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x227178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22717c: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x22717Cu;
    SET_GPR_U32(ctx, 31, 0x227184u);
    ctx->pc = 0x227180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22717Cu;
    // 0x227180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x22717Cu, 0x227184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227184u;
label_227184:
    // 0x227184: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227184u;
    {
        const bool branch_taken_0x227184 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227184u;
        // 0x227188: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227184) {
            ctx->pc = 0x2271A0u;
            goto label_2271a0;
        }
    }
    ctx->pc = 0x22718Cu;
    // 0x22718c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227194: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227198: 0x1000ff57  b           . + 4 + (-0xA9 << 2)
    ctx->pc = 0x227198u;
    {
        const bool branch_taken_0x227198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227198u;
        // 0x22719c: 0x24050223  addiu       $a1, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227198) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x2271A0u;
label_2271a0:
    // 0x2271a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2271a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271a4: 0x24050227  addiu       $a1, $zero, 0x227
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 551));
    // 0x2271a8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2271a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2271ac: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2271ACu;
    SET_GPR_U32(ctx, 31, 0x2271B4u);
    ctx->pc = 0x2271B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271ACu;
    // 0x2271b0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2271ACu, 0x2271B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271B4u;
label_2271b4:
    // 0x2271b4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2271b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2271b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2271b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271bc: 0x25f03e78  addiu       $s0, $t7, 0x3E78
    ctx->pc = 0x2271bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15992));
    // 0x2271c0: 0x24050231  addiu       $a1, $zero, 0x231
    ctx->pc = 0x2271c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    // 0x2271c4: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2271c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2271c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2271ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271d0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2271D0u;
    SET_GPR_U32(ctx, 31, 0x2271D8u);
    ctx->pc = 0x2271D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271D0u;
    // 0x2271d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2271D0u, 0x2271D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271D8u;
label_2271d8:
    // 0x2271d8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x2271d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x2271dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2271dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271e0: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2271e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2271e4: 0x24c66390  addiu       $a2, $a2, 0x6390
    ctx->pc = 0x2271e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25488));
    // 0x2271e8: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x2271E8u;
    SET_GPR_U32(ctx, 31, 0x2271F0u);
    ctx->pc = 0x2271ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2271E8u;
    // 0x2271ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x2271E8u, 0x2271F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271F0u;
label_2271f0:
    // 0x2271f0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2271F0u;
    {
        const bool branch_taken_0x2271f0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2271F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2271F0u;
        // 0x2271f4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2271f0) {
            ctx->pc = 0x22720Cu;
            goto label_22720c;
        }
    }
    ctx->pc = 0x2271F8u;
    // 0x2271f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2271f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2271fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2271fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227200: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227204: 0x1000ff3c  b           . + 4 + (-0xC4 << 2)
    ctx->pc = 0x227204u;
    {
        const bool branch_taken_0x227204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227204u;
        // 0x227208: 0x24050234  addiu       $a1, $zero, 0x234 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227204) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x22720Cu;
label_22720c:
    // 0x22720c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227210: 0x24050238  addiu       $a1, $zero, 0x238
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x227214: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227218: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227218u;
    SET_GPR_U32(ctx, 31, 0x227220u);
    ctx->pc = 0x22721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227218u;
    // 0x22721c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227218u, 0x227220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227220u;
label_227220:
    // 0x227220: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227220u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227228: 0x25f03e90  addiu       $s0, $t7, 0x3E90
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16016));
    // 0x22722c: 0x24050242  addiu       $a1, $zero, 0x242
    ctx->pc = 0x22722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x227230: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227234: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227238: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22723c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22723Cu;
    SET_GPR_U32(ctx, 31, 0x227244u);
    ctx->pc = 0x227240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22723Cu;
    // 0x227240: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22723Cu, 0x227244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227244u;
label_227244:
    // 0x227244: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x227244u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x227248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22724c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x22724cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227250: 0x24c66418  addiu       $a2, $a2, 0x6418
    ctx->pc = 0x227250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25624));
    // 0x227254: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x227254u;
    SET_GPR_U32(ctx, 31, 0x22725Cu);
    ctx->pc = 0x227258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227254u;
    // 0x227258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x227254u, 0x22725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22725Cu;
label_22725c:
    // 0x22725c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22725Cu;
    {
        const bool branch_taken_0x22725c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22725Cu;
        // 0x227260: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22725c) {
            ctx->pc = 0x227278u;
            goto label_227278;
        }
    }
    ctx->pc = 0x227264u;
    // 0x227264: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22726c: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227270: 0x1000ff21  b           . + 4 + (-0xDF << 2)
    ctx->pc = 0x227270u;
    {
        const bool branch_taken_0x227270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227270u;
        // 0x227274: 0x24050245  addiu       $a1, $zero, 0x245 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227270) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227278u;
label_227278:
    // 0x227278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22727c: 0x24050249  addiu       $a1, $zero, 0x249
    ctx->pc = 0x22727cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x227280: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227284: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227284u;
    SET_GPR_U32(ctx, 31, 0x22728Cu);
    ctx->pc = 0x227288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227284u;
    // 0x227288: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227284u, 0x22728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22728Cu;
label_22728c:
    // 0x22728c: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x22728cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227290: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x227290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x227294: 0x25f03eb0  addiu       $s0, $t7, 0x3EB0
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16048));
    // 0x227298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22729c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x22729cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2272a0: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x2272A0u;
    SET_GPR_U32(ctx, 31, 0x2272A8u);
    ctx->pc = 0x2272A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272A0u;
    // 0x2272a4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x2272A0u, 0x2272A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272A8u;
label_2272a8:
    // 0x2272a8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2272A8u;
    {
        const bool branch_taken_0x2272a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2272ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272A8u;
        // 0x2272ac: 0x8fa90010  lw          $t1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272a8) {
            ctx->pc = 0x2272C8u;
            goto label_2272c8;
        }
    }
    ctx->pc = 0x2272B0u;
    // 0x2272b0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2272b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2272b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2272b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2272b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272bc: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x2272c0: 0x1000ff0d  b           . + 4 + (-0xF3 << 2)
    ctx->pc = 0x2272C0u;
    {
        const bool branch_taken_0x2272c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2272C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272C0u;
        // 0x2272c4: 0x24050254  addiu       $a1, $zero, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272c0) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x2272C8u;
label_2272c8:
    // 0x2272c8: 0x24050259  addiu       $a1, $zero, 0x259
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
    // 0x2272cc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2272d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2272d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2272d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272d8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2272D8u;
    SET_GPR_U32(ctx, 31, 0x2272E0u);
    ctx->pc = 0x2272DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272D8u;
    // 0x2272dc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2272D8u, 0x2272E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272E0u;
label_2272e0:
    // 0x2272e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2272e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2272e4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2272e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2272e8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2272e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2272ec: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x2272ECu;
    SET_GPR_U32(ctx, 31, 0x2272F4u);
    ctx->pc = 0x2272F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2272ECu;
    // 0x2272f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x2272ECu, 0x2272F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2272F4u;
label_2272f4:
    // 0x2272f4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2272F4u;
    {
        const bool branch_taken_0x2272f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2272F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2272F4u;
        // 0x2272f8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2272f4) {
            ctx->pc = 0x227310u;
            goto label_227310;
        }
    }
    ctx->pc = 0x2272FCu;
    // 0x2272fc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2272fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227304: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227308: 0x1000fefb  b           . + 4 + (-0x105 << 2)
    ctx->pc = 0x227308u;
    {
        const bool branch_taken_0x227308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227308u;
        // 0x22730c: 0x2405025c  addiu       $a1, $zero, 0x25C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227308) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227310u;
label_227310:
    // 0x227310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227314: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x227314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x227318: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22731c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22731Cu;
    SET_GPR_U32(ctx, 31, 0x227324u);
    ctx->pc = 0x227320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22731Cu;
    // 0x227320: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22731Cu, 0x227324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227324u;
label_227324:
    // 0x227324: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227324u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227328: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x227328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x22732c: 0x25f03ec8  addiu       $s0, $t7, 0x3EC8
    ctx->pc = 0x22732cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16072));
    // 0x227330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227334: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x227334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227338: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x227338u;
    SET_GPR_U32(ctx, 31, 0x227340u);
    ctx->pc = 0x22733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227338u;
    // 0x22733c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x227338u, 0x227340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227340u;
label_227340:
    // 0x227340: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227340u;
    {
        const bool branch_taken_0x227340 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227340u;
        // 0x227344: 0x8fa90014  lw          $t1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227340) {
            ctx->pc = 0x227360u;
            goto label_227360;
        }
    }
    ctx->pc = 0x227348u;
    // 0x227348: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22734c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22734cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227350: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227354: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x227354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x227358: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x227358u;
    {
        const bool branch_taken_0x227358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227358u;
        // 0x22735c: 0x2405026b  addiu       $a1, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227358) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227360u;
label_227360:
    // 0x227360: 0x24050270  addiu       $a1, $zero, 0x270
    ctx->pc = 0x227360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    // 0x227364: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227368: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22736c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227370: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227370u;
    SET_GPR_U32(ctx, 31, 0x227378u);
    ctx->pc = 0x227374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227370u;
    // 0x227374: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227370u, 0x227378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227378u;
label_227378:
    // 0x227378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22737c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22737cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x227380: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x227380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x227384: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x227384u;
    SET_GPR_U32(ctx, 31, 0x22738Cu);
    ctx->pc = 0x227388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227384u;
    // 0x227388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x227384u, 0x22738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22738Cu;
label_22738c:
    // 0x22738c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22738Cu;
    {
        const bool branch_taken_0x22738c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22738Cu;
        // 0x227390: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22738c) {
            ctx->pc = 0x2273A8u;
            goto label_2273a8;
        }
    }
    ctx->pc = 0x227394u;
    // 0x227394: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22739c: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x22739cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x2273a0: 0x1000fed5  b           . + 4 + (-0x12B << 2)
    ctx->pc = 0x2273A0u;
    {
        const bool branch_taken_0x2273a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273A0u;
        // 0x2273a4: 0x24050273  addiu       $a1, $zero, 0x273 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 627));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273a0) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x2273A8u;
label_2273a8:
    // 0x2273a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2273a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273ac: 0x24050277  addiu       $a1, $zero, 0x277
    ctx->pc = 0x2273acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
    // 0x2273b0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2273b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2273b4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2273B4u;
    SET_GPR_U32(ctx, 31, 0x2273BCu);
    ctx->pc = 0x2273B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273B4u;
    // 0x2273b8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2273B4u, 0x2273BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273BCu;
label_2273bc:
    // 0x2273bc: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2273bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2273c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2273c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2273c4: 0x25f03ee8  addiu       $s0, $t7, 0x3EE8
    ctx->pc = 0x2273c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16104));
    // 0x2273c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2273c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273cc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2273ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2273d0: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x2273D0u;
    SET_GPR_U32(ctx, 31, 0x2273D8u);
    ctx->pc = 0x2273D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2273D0u;
    // 0x2273d4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x2273D0u, 0x2273D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2273D8u;
label_2273d8:
    // 0x2273d8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2273D8u;
    {
        const bool branch_taken_0x2273d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2273DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273D8u;
        // 0x2273dc: 0x8fa90018  lw          $t1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273d8) {
            ctx->pc = 0x2273F8u;
            goto label_2273f8;
        }
    }
    ctx->pc = 0x2273E0u;
    // 0x2273e0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2273e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2273e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2273e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2273e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2273ec: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x2273ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x2273f0: 0x1000fec1  b           . + 4 + (-0x13F << 2)
    ctx->pc = 0x2273F0u;
    {
        const bool branch_taken_0x2273f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2273F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2273F0u;
        // 0x2273f4: 0x24050282  addiu       $a1, $zero, 0x282 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 642));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2273f0) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x2273F8u;
label_2273f8:
    // 0x2273f8: 0x24050287  addiu       $a1, $zero, 0x287
    ctx->pc = 0x2273f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
    // 0x2273fc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x2273fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227400: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x227400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227408: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227408u;
    SET_GPR_U32(ctx, 31, 0x227410u);
    ctx->pc = 0x22740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227408u;
    // 0x22740c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227408u, 0x227410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227410u;
label_227410:
    // 0x227410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227414: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x227414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x227418: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x227418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x22741c: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x22741Cu;
    SET_GPR_U32(ctx, 31, 0x227424u);
    ctx->pc = 0x227420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22741Cu;
    // 0x227420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x22741Cu, 0x227424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227424u;
label_227424:
    // 0x227424: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227424u;
    {
        const bool branch_taken_0x227424 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227424u;
        // 0x227428: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227424) {
            ctx->pc = 0x227440u;
            goto label_227440;
        }
    }
    ctx->pc = 0x22742Cu;
    // 0x22742c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22742cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227434: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227438: 0x1000feaf  b           . + 4 + (-0x151 << 2)
    ctx->pc = 0x227438u;
    {
        const bool branch_taken_0x227438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227438u;
        // 0x22743c: 0x2405028a  addiu       $a1, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227438) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227440u;
label_227440:
    // 0x227440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227444: 0x2405028e  addiu       $a1, $zero, 0x28E
    ctx->pc = 0x227444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
    // 0x227448: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22744c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22744Cu;
    SET_GPR_U32(ctx, 31, 0x227454u);
    ctx->pc = 0x227450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22744Cu;
    // 0x227450: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22744Cu, 0x227454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227454u;
label_227454:
    // 0x227454: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227454u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227458: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x227458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x22745c: 0x25f03f08  addiu       $s0, $t7, 0x3F08
    ctx->pc = 0x22745cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 16136));
    // 0x227460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227464: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x227464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x227468: 0xc0bd862  jal         func_2F6188
    ctx->pc = 0x227468u;
    SET_GPR_U32(ctx, 31, 0x227470u);
    ctx->pc = 0x22746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227468u;
    // 0x22746c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6188u, 0x227468u, 0x227470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227470u;
label_227470:
    // 0x227470: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227470u;
    {
        const bool branch_taken_0x227470 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x227474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227470u;
        // 0x227474: 0x8fa9001c  lw          $t1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227470) {
            ctx->pc = 0x227490u;
            goto label_227490;
        }
    }
    ctx->pc = 0x227478u;
    // 0x227478: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227478u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22747c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227480: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227484: 0x24e73d68  addiu       $a3, $a3, 0x3D68
    ctx->pc = 0x227484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15720));
    // 0x227488: 0x1000fe9b  b           . + 4 + (-0x165 << 2)
    ctx->pc = 0x227488u;
    {
        const bool branch_taken_0x227488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227488u;
        // 0x22748c: 0x2405029b  addiu       $a1, $zero, 0x29B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 667));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227488) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x227490u;
label_227490:
    // 0x227490: 0x240502a0  addiu       $a1, $zero, 0x2A0
    ctx->pc = 0x227490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x227494: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22749c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22749cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274a0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2274A0u;
    SET_GPR_U32(ctx, 31, 0x2274A8u);
    ctx->pc = 0x2274A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274A0u;
    // 0x2274a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2274A0u, 0x2274A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274A8u;
label_2274a8:
    // 0x2274a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2274a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2274acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2274b0: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x2274B0u;
    SET_GPR_U32(ctx, 31, 0x2274B8u);
    ctx->pc = 0x2274B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274B0u;
    // 0x2274b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x2274B0u, 0x2274B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274B8u;
label_2274b8:
    // 0x2274b8: 0x443001c  bgezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2274B8u;
    {
        const bool branch_taken_0x2274b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2274b8) {
            ctx->pc = 0x2274BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2274B8u;
            // 0x2274bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22752Cu;
            goto label_22752c;
        }
    }
    ctx->pc = 0x2274C0u;
    // 0x2274c0: 0xc0bd2ee  jal         func_2F4BB8
    ctx->pc = 0x2274C0u;
    SET_GPR_U32(ctx, 31, 0x2274C8u);
    ctx->pc = 0x2274C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274C0u;
    // 0x2274c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB8u, 0x2274C0u, 0x2274C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274C8u;
label_2274c8:
    // 0x2274c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2274c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274cc: 0xc0beab6  jal         func_2FAAD8
    ctx->pc = 0x2274CCu;
    SET_GPR_U32(ctx, 31, 0x2274D4u);
    ctx->pc = 0x2274D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274CCu;
    // 0x2274d0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAAD8u, 0x2274CCu, 0x2274D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274D4u;
label_2274d4:
    // 0x2274d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2274d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274d8: 0xc0bd2ee  jal         func_2F4BB8
    ctx->pc = 0x2274D8u;
    SET_GPR_U32(ctx, 31, 0x2274E0u);
    ctx->pc = 0x2274DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2274D8u;
    // 0x2274dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB8u, 0x2274D8u, 0x2274E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2274E0u;
label_2274e0:
    // 0x2274e0: 0x240ffc0f  addiu       $t7, $zero, -0x3F1
    ctx->pc = 0x2274e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x2274e4: 0x144f000c  bne         $v0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x2274E4u;
    {
        const bool branch_taken_0x2274e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2274E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274E4u;
        // 0x2274e8: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2274e4) {
            ctx->pc = 0x227518u;
            goto label_227518;
        }
    }
    ctx->pc = 0x2274ECu;
    // 0x2274ec: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2274ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2274f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2274f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274f4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2274f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2274f8: 0x24e73f20  addiu       $a3, $a3, 0x3F20
    ctx->pc = 0x2274f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16160));
    // 0x2274fc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x2274fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227500: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x227500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227504: 0x240502a7  addiu       $a1, $zero, 0x2A7
    ctx->pc = 0x227504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x227508: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227508u;
    SET_GPR_U32(ctx, 31, 0x227510u);
    ctx->pc = 0x22750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227508u;
    // 0x22750c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227508u, 0x227510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227510u;
label_227510:
    // 0x227510: 0x1000fe41  b           . + 4 + (-0x1BF << 2)
    ctx->pc = 0x227510u;
    {
        const bool branch_taken_0x227510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227510u;
        // 0x227514: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227510) {
            ctx->pc = 0x226E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e18;
        }
    }
    ctx->pc = 0x227518u;
label_227518:
    // 0x227518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22751c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x22751cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227520: 0x24e73dd0  addiu       $a3, $a3, 0x3DD0
    ctx->pc = 0x227520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15824));
    // 0x227524: 0x1000fe74  b           . + 4 + (-0x18C << 2)
    ctx->pc = 0x227524u;
    {
        const bool branch_taken_0x227524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227524u;
        // 0x227528: 0x240502aa  addiu       $a1, $zero, 0x2AA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 682));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227524) {
            ctx->pc = 0x226EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226ef8;
        }
    }
    ctx->pc = 0x22752Cu;
label_22752c:
    // 0x22752c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x22752cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227530: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x227530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227534: 0x240502af  addiu       $a1, $zero, 0x2AF
    ctx->pc = 0x227534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 687));
    // 0x227538: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227538u;
    SET_GPR_U32(ctx, 31, 0x227540u);
    ctx->pc = 0x22753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227538u;
    // 0x22753c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227538u, 0x227540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227540u;
label_227540:
    // 0x227540: 0xc0bc82e  jal         func_2F20B8
    ctx->pc = 0x227540u;
    SET_GPR_U32(ctx, 31, 0x227548u);
    ctx->pc = 0x227544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227540u;
    // 0x227544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F20B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F20B8u, 0x227540u, 0x227548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227548u;
label_227548:
    // 0x227548: 0x4410059  bgez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x227548u;
    {
        const bool branch_taken_0x227548 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227548u;
        // 0x22754c: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227548) {
            ctx->pc = 0x2276B0u;
            goto label_2276b0;
        }
    }
    ctx->pc = 0x227550u;
    // 0x227550: 0xc0bd2ee  jal         func_2F4BB8
    ctx->pc = 0x227550u;
    SET_GPR_U32(ctx, 31, 0x227558u);
    ctx->pc = 0x227554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227550u;
    // 0x227554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB8u, 0x227550u, 0x227558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227558u;
label_227558:
    // 0x227558: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227558u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22755c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22755cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227564: 0x24e73f78  addiu       $a3, $a3, 0x3F78
    ctx->pc = 0x227564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16248));
    // 0x227568: 0x240502b9  addiu       $a1, $zero, 0x2B9
    ctx->pc = 0x227568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 697));
    // 0x22756c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22756Cu;
    SET_GPR_U32(ctx, 31, 0x227574u);
    ctx->pc = 0x227570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22756Cu;
    // 0x227570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22756Cu, 0x227574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227574u;
label_227574:
    // 0x227574: 0x12c00033  beqz        $s6, . + 4 + (0x33 << 2)
    ctx->pc = 0x227574u;
    {
        const bool branch_taken_0x227574 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x227578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227574u;
        // 0x227578: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227574) {
            ctx->pc = 0x227644u;
            goto label_227644;
        }
    }
    ctx->pc = 0x22757Cu;
    // 0x22757c: 0x3c0e003f  lui         $t6, 0x3F
    ctx->pc = 0x22757cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)63 << 16));
    // 0x227580: 0x25f33fa8  addiu       $s3, $t7, 0x3FA8
    ctx->pc = 0x227580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 15), 16296));
    // 0x227584: 0x25d13c98  addiu       $s1, $t6, 0x3C98
    ctx->pc = 0x227584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), 15512));
    // 0x227588: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227588u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22758c: 0x240502c6  addiu       $a1, $zero, 0x2C6
    ctx->pc = 0x22758cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 710));
    // 0x227590: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x227590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x227594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227598: 0x24e73fc0  addiu       $a3, $a3, 0x3FC0
    ctx->pc = 0x227598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16320));
    // 0x22759c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22759Cu;
    SET_GPR_U32(ctx, 31, 0x2275A4u);
    ctx->pc = 0x2275A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22759Cu;
    // 0x2275a0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22759Cu, 0x2275A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275A4u;
label_2275a4:
    // 0x2275a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2275a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2275a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275ac: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x2275ACu;
    SET_GPR_U32(ctx, 31, 0x2275B4u);
    ctx->pc = 0x2275B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275ACu;
    // 0x2275b0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x2275ACu, 0x2275B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275B4u;
label_2275b4:
    // 0x2275b4: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2275B4u;
    {
        const bool branch_taken_0x2275b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2275b4) {
            ctx->pc = 0x2275B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2275B4u;
            // 0x2275b8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2275D0u;
            goto label_2275d0;
        }
    }
    ctx->pc = 0x2275BCu;
    // 0x2275bc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2275bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2275c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2275c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275c4: 0x240502ca  addiu       $a1, $zero, 0x2CA
    ctx->pc = 0x2275c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 714));
    // 0x2275c8: 0x1000fe10  b           . + 4 + (-0x1F0 << 2)
    ctx->pc = 0x2275C8u;
    {
        const bool branch_taken_0x2275c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2275C8u;
        // 0x2275cc: 0x24e73ff0  addiu       $a3, $a3, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2275c8) {
            ctx->pc = 0x226E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e0c;
        }
    }
    ctx->pc = 0x2275D0u;
label_2275d0:
    // 0x2275d0: 0x26c60080  addiu       $a2, $s6, 0x80
    ctx->pc = 0x2275d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x2275d4: 0x24a53fe8  addiu       $a1, $a1, 0x3FE8
    ctx->pc = 0x2275d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16360));
    // 0x2275d8: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2275D8u;
    SET_GPR_U32(ctx, 31, 0x2275E0u);
    ctx->pc = 0x2275DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275D8u;
    // 0x2275dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5570u, 0x2275D8u, 0x2275E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2275E0u;
label_2275e0:
    // 0x2275e0: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2275e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2275e4: 0xae02f1ec  sw          $v0, -0xE14($s0)
    ctx->pc = 0x2275e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963692), GPR_U32(ctx, 2));
    // 0x2275e8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2275e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2275ec: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2275ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2275f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2275f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2275f4: 0x24a54020  addiu       $a1, $a1, 0x4020
    ctx->pc = 0x2275f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16416));
    // 0x2275f8: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2275F8u;
    SET_GPR_U32(ctx, 31, 0x227600u);
    ctx->pc = 0x2275FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2275F8u;
    // 0x2275fc: 0x24c64030  addiu       $a2, $a2, 0x4030 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5570u, 0x2275F8u, 0x227600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227600u;
label_227600:
    // 0x227600: 0x8e06f1ec  lw          $a2, -0xE14($s0)
    ctx->pc = 0x227600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963692)));
    // 0x227604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x227604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227608: 0xc0bd73a  jal         func_2F5CE8
    ctx->pc = 0x227608u;
    SET_GPR_U32(ctx, 31, 0x227610u);
    ctx->pc = 0x22760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227608u;
    // 0x22760c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5CE8u, 0x227608u, 0x227610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227610u;
label_227610:
    // 0x227610: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227610u;
    {
        const bool branch_taken_0x227610 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x227610) {
            ctx->pc = 0x227614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227610u;
            // 0x227614: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22762Cu;
            goto label_22762c;
        }
    }
    ctx->pc = 0x227618u;
    // 0x227618: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22761c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227620: 0x240502d5  addiu       $a1, $zero, 0x2D5
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 725));
    // 0x227624: 0x1000fdf9  b           . + 4 + (-0x207 << 2)
    ctx->pc = 0x227624u;
    {
        const bool branch_taken_0x227624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227624u;
        // 0x227628: 0x24e74058  addiu       $a3, $a3, 0x4058 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227624) {
            ctx->pc = 0x226E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e0c;
        }
    }
    ctx->pc = 0x22762Cu;
label_22762c:
    // 0x22762c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22762cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227630: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x227630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227634: 0x24e73db0  addiu       $a3, $a3, 0x3DB0
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15792));
    // 0x227638: 0x240502e2  addiu       $a1, $zero, 0x2E2
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 738));
    // 0x22763c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22763Cu;
    SET_GPR_U32(ctx, 31, 0x227644u);
    ctx->pc = 0x227640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22763Cu;
    // 0x227640: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22763Cu, 0x227644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227644u;
label_227644:
    // 0x227644: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227648: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x22764c: 0x25f03c98  addiu       $s0, $t7, 0x3C98
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 15512));
    // 0x227650: 0x24e74090  addiu       $a3, $a3, 0x4090
    ctx->pc = 0x227650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16528));
    // 0x227654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227658: 0x240502e6  addiu       $a1, $zero, 0x2E6
    ctx->pc = 0x227658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 742));
    // 0x22765c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22765Cu;
    SET_GPR_U32(ctx, 31, 0x227664u);
    ctx->pc = 0x227660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22765Cu;
    // 0x227660: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22765Cu, 0x227664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227664u;
label_227664:
    // 0x227664: 0xc0bdcb8  jal         func_2F72E0
    ctx->pc = 0x227664u;
    SET_GPR_U32(ctx, 31, 0x22766Cu);
    ctx->pc = 0x227668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227664u;
    // 0x227668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F72E0u, 0x227664u, 0x22766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22766Cu;
label_22766c:
    // 0x22766c: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22766Cu;
    {
        const bool branch_taken_0x22766c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x22766c) {
            ctx->pc = 0x227670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22766Cu;
            // 0x227670: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227688u;
            goto label_227688;
        }
    }
    ctx->pc = 0x227674u;
    // 0x227674: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x227674u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x227678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22767c: 0x240502e8  addiu       $a1, $zero, 0x2E8
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 744));
    // 0x227680: 0x1000fde2  b           . + 4 + (-0x21E << 2)
    ctx->pc = 0x227680u;
    {
        const bool branch_taken_0x227680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227680u;
        // 0x227684: 0x24e740c0  addiu       $a3, $a3, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227680) {
            ctx->pc = 0x226E0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e0c;
        }
    }
    ctx->pc = 0x227688u;
label_227688:
    // 0x227688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22768c: 0x240502eb  addiu       $a1, $zero, 0x2EB
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 747));
    // 0x227690: 0x24e740a8  addiu       $a3, $a3, 0x40A8
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16552));
    // 0x227694: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227694u;
    SET_GPR_U32(ctx, 31, 0x22769Cu);
    ctx->pc = 0x227698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227694u;
    // 0x227698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227694u, 0x22769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22769Cu;
label_22769c:
    // 0x22769c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2276a0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2276a4: 0xadeef1c8  sw          $t6, -0xE38($t7)
    ctx->pc = 0x2276a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963656), GPR_U32(ctx, 14));
    // 0x2276a8: 0x1000fddb  b           . + 4 + (-0x225 << 2)
    ctx->pc = 0x2276A8u;
    {
        const bool branch_taken_0x2276a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2276A8u;
        // 0x2276ac: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2276a8) {
            ctx->pc = 0x226E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226e18;
        }
    }
    ctx->pc = 0x2276B0u;
label_2276b0:
    // 0x2276b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2276b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2276b4: 0x240502bc  addiu       $a1, $zero, 0x2BC
    ctx->pc = 0x2276b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    // 0x2276b8: 0x24e73f50  addiu       $a3, $a3, 0x3F50
    ctx->pc = 0x2276b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16208));
    // 0x2276bc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2276BCu;
    SET_GPR_U32(ctx, 31, 0x2276C4u);
    ctx->pc = 0x2276C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276BCu;
    // 0x2276c0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2276BCu, 0x2276C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276C4u;
label_2276c4:
    // 0x2276c4: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x2276C4u;
    {
        const bool branch_taken_0x2276c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2276c4) {
            ctx->pc = 0x227574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227574;
        }
    }
    ctx->pc = 0x2276CCu;
    // 0x2276cc: 0x0  nop
    ctx->pc = 0x2276ccu;
    // NOP
    if (ctx->pc == 0x2276ccu) { ctx->pc = 0x2276d0u; }
}
