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

// Function: sub_0021B2B8
// Address: 0x21b2b8 - 0x21b5e0
void sub_0021B2B8_0x21b2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B2B8_0x21b2b8");
#endif

    switch (ctx->pc) {
        case 0x21b2d4u: goto label_21b2d4;
        case 0x21b2e4u: goto label_21b2e4;
        case 0x21b364u: goto label_21b364;
        case 0x21b37cu: goto label_21b37c;
        case 0x21b3b8u: goto label_21b3b8;
        case 0x21b3c8u: goto label_21b3c8;
        case 0x21b408u: goto label_21b408;
        case 0x21b418u: goto label_21b418;
        case 0x21b464u: goto label_21b464;
        case 0x21b4a0u: goto label_21b4a0;
        case 0x21b534u: goto label_21b534;
        case 0x21b54cu: goto label_21b54c;
        case 0x21b578u: goto label_21b578;
        case 0x21b584u: goto label_21b584;
        case 0x21b5acu: goto label_21b5ac;
        case 0x21b5b4u: goto label_21b5b4;
        default: break;
    }

    ctx->pc = 0x21b2b8u;

label_21b2b8:
    // 0x21b2b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b2c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21b2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21b2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b2c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b2cc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B2CCu;
    SET_GPR_U32(ctx, 31, 0x21B2D4u);
    ctx->pc = 0x21B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2CCu;
    // 0x21b2d0: 0x248415a0  addiu       $a0, $a0, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B2CCu, 0x21B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2D4u;
label_21b2d4:
    // 0x21b2d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b2d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b2dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21B2DCu;
    SET_GPR_U32(ctx, 31, 0x21B2E4u);
    ctx->pc = 0x21B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2DCu;
    // 0x21b2e0: 0x24841120  addiu       $a0, $a0, 0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x21B2DCu, 0x21B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B2E4u;
label_21b2e4:
    // 0x21b2e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21b2e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b2ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21b2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b2f0: 0x248410f0  addiu       $a0, $a0, 0x10F0
    ctx->pc = 0x21b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x21b2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b2f8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21B2F8u;
    ctx->pc = 0x21B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B2F8u;
    // 0x21b2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x21B300u;
    // 0x21b300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21b304: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b308: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21b30c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21b310: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21b310u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21b314: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21b314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21b318: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b31c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21b31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b320: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21b324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b328: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x21b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x21b32c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21b32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b330: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21b334: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b338: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x21b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x21b33c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b33cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b340: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x21b340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x21b344: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21b344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b348: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x21b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x21b34c: 0xae80ab58  sw          $zero, -0x54A8($s4)
    ctx->pc = 0x21b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945624), GPR_U32(ctx, 0));
    // 0x21b350: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x21b350u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b354: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b358: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x21b358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x21b35c: 0xc0844dc  jal         func_211370
    ctx->pc = 0x21B35Cu;
    SET_GPR_U32(ctx, 31, 0x21B364u);
    ctx->pc = 0x21B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B35Cu;
    // 0x21b360: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211370u, 0x21B35Cu, 0x21B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B364u;
label_21b364:
    // 0x21b364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b36c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b370: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x21b370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b374: 0xc084520  jal         func_211480
    ctx->pc = 0x21B374u;
    SET_GPR_U32(ctx, 31, 0x21B37Cu);
    ctx->pc = 0x21B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B374u;
    // 0x21b378: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211480u, 0x21B374u, 0x21B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B37Cu;
label_21b37c:
    // 0x21b37c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21b37cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b380: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21b380u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21b384: 0x11e00047  beqz        $t7, . + 4 + (0x47 << 2)
    ctx->pc = 0x21B384u;
    {
        const bool branch_taken_0x21b384 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B384u;
        // 0x21b388: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b384) {
            ctx->pc = 0x21B4A4u;
            goto label_21b4a4;
        }
    }
    ctx->pc = 0x21B38Cu;
    // 0x21b38c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B38Cu;
    {
        const bool branch_taken_0x21b38c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21b38c) {
            ctx->pc = 0x21B39Cu;
            goto label_21b39c;
        }
    }
    ctx->pc = 0x21B394u;
    // 0x21b394: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21b398: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21b39c:
    // 0x21b39c: 0x19c0002c  blez        $t6, . + 4 + (0x2C << 2)
    ctx->pc = 0x21B39Cu;
    {
        const bool branch_taken_0x21b39c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B39Cu;
        // 0x21b3a0: 0x29cf0032  slti        $t7, $t6, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b39c) {
            ctx->pc = 0x21B450u;
            goto label_21b450;
        }
    }
    ctx->pc = 0x21B3A4u;
    // 0x21b3a4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x21b3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3a8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b3ac: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
    // 0x21b3b0: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x21b3b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3b4: 0xae80ab60  sw          $zero, -0x54A0($s4)
    ctx->pc = 0x21b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
label_21b3b8:
    // 0x21b3b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21b3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21b3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3c0: 0xc084c8a  jal         func_213228
    ctx->pc = 0x21B3C0u;
    SET_GPR_U32(ctx, 31, 0x21B3C8u);
    ctx->pc = 0x21B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3C0u;
    // 0x21b3c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213228u, 0x21B3C0u, 0x21B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B3C8u;
label_21b3c8:
    // 0x21b3c8: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x21B3C8u;
    {
        const bool branch_taken_0x21b3c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3C8u;
        // 0x21b3cc: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3c8) {
            ctx->pc = 0x21B4A4u;
            goto label_21b4a4;
        }
    }
    ctx->pc = 0x21B3D0u;
    // 0x21b3d0: 0x8e8fab60  lw          $t7, -0x54A0($s4)
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945632)));
    // 0x21b3d4: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x21B3D4u;
    {
        const bool branch_taken_0x21b3d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3D4u;
        // 0x21b3d8: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3d4) {
            ctx->pc = 0x21B43Cu;
            goto label_21b43c;
        }
    }
    ctx->pc = 0x21B3DCu;
    // 0x21b3dc: 0x8ecdab58  lw          $t5, -0x54A8($s6)
    ctx->pc = 0x21b3dcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945624)));
    // 0x21b3e0: 0x31af0003  andi        $t7, $t5, 0x3
    ctx->pc = 0x21b3e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
    // 0x21b3e4: 0x11e0003c  beqz        $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21B3E4u;
    {
        const bool branch_taken_0x21b3e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3E4u;
        // 0x21b3e8: 0x25af0003  addiu       $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3e4) {
            ctx->pc = 0x21B4D8u;
            goto label_21b4d8;
        }
    }
    ctx->pc = 0x21B3ECu;
    // 0x21b3ec: 0x29ae0000  slti        $t6, $t5, 0x0
    ctx->pc = 0x21b3ecu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21b3f0: 0x1ae780a  movz        $t7, $t5, $t6
    ctx->pc = 0x21b3f0u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 13));
    // 0x21b3f4: 0xf7883  sra         $t7, $t7, 2
    ctx->pc = 0x21b3f4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 2));
    // 0x21b3f8: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x21b3f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x21b3fc: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x21b3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x21b400: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x21b400u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b404: 0x1af7023  subu        $t6, $t5, $t7
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
label_21b408:
    // 0x21b408: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21b408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21b40c: 0x51de000a  beql        $t6, $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x21B40Cu;
    {
        const bool branch_taken_0x21b40c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 30));
        if (branch_taken_0x21b40c) {
            ctx->pc = 0x21B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B40Cu;
            // 0x21b410: 0xaee0ab58  sw          $zero, -0x54A8($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B438u;
            goto label_21b438;
        }
    }
    ctx->pc = 0x21B414u;
    // 0x21b414: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x21b414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b418:
    // 0x21b418: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x21b418u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b41c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x21b41cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x21b420: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x21b420u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x21b424: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x21b424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x21b428: 0x0  nop
    ctx->pc = 0x21b428u;
    // NOP
    // 0x21b42c: 0x15cdfffa  bne         $t6, $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B42Cu;
    {
        const bool branch_taken_0x21b42c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 13));
        ctx->pc = 0x21B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B42Cu;
        // 0x21b430: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b42c) {
            ctx->pc = 0x21B418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b418;
        }
    }
    ctx->pc = 0x21B434u;
    // 0x21b434: 0xaee0ab58  sw          $zero, -0x54A8($s7)
    ctx->pc = 0x21b434u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294945624), GPR_U32(ctx, 0));
label_21b438:
    // 0x21b438: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21b438u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21b43c:
    // 0x21b43c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b43cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b440: 0x22e782a  slt         $t7, $s1, $t6
    ctx->pc = 0x21b440u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21b444: 0x55e0ffdc  bnel        $t7, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21B444u;
    {
        const bool branch_taken_0x21b444 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b444) {
            ctx->pc = 0x21B448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B444u;
            // 0x21b448: 0xae80ab60  sw          $zero, -0x54A0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4294945632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b3b8;
        }
    }
    ctx->pc = 0x21B44Cu;
    // 0x21b44c: 0x29cf0032  slti        $t7, $t6, 0x32
    ctx->pc = 0x21b44cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)50) ? 1 : 0);
label_21b450:
    // 0x21b450: 0x11e0000d  beqz        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x21B450u;
    {
        const bool branch_taken_0x21b450 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B450u;
        // 0x21b454: 0x1c0882d  daddu       $s1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b450) {
            ctx->pc = 0x21B488u;
            goto label_21b488;
        }
    }
    ctx->pc = 0x21B458u;
    // 0x21b458: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x21b458u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x21b45c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x21b45cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b460: 0x8d8eab58  lw          $t6, -0x54A8($t4)
    ctx->pc = 0x21b460u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945624)));
label_21b464:
    // 0x21b464: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b468: 0x25ad0094  addiu       $t5, $t5, 0x94
    ctx->pc = 0x21b468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 148));
    // 0x21b46c: 0x2a2f0032  slti        $t7, $s1, 0x32
    ctx->pc = 0x21b46cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x21b470: 0x0  nop
    ctx->pc = 0x21b470u;
    // NOP
    // 0x21b474: 0x0  nop
    ctx->pc = 0x21b474u;
    // NOP
    // 0x21b478: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21B478u;
    {
        const bool branch_taken_0x21b478 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B478u;
        // 0x21b47c: 0x25ce0094  addiu       $t6, $t6, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b478) {
            ctx->pc = 0x21B464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b464;
        }
    }
    ctx->pc = 0x21B480u;
    // 0x21b480: 0xad8eab58  sw          $t6, -0x54A8($t4)
    ctx->pc = 0x21b480u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294945624), GPR_U32(ctx, 14));
    // 0x21b484: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x21b484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_21b488:
    // 0x21b488: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x21b488u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21b48c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b48cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b490: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x21b490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b494: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b498: 0xc086cae  jal         func_21B2B8
    ctx->pc = 0x21B498u;
    SET_GPR_U32(ctx, 31, 0x21B4A0u);
    ctx->pc = 0x21B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B498u;
    // 0x21b49c: 0x2afa823  subu        $s5, $s5, $t7 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B2B8u;
    goto label_21b2b8;
    ctx->pc = 0x21B4A0u;
label_21b4a0:
    // 0x21b4a0: 0x2a0682d  daddu       $t5, $s5, $zero
    ctx->pc = 0x21b4a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21b4a4:
    // 0x21b4a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b4a8: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x21b4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21b4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b4b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b4b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21b4b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b4b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21b4b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b4bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21b4bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b4c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x21b4c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b4c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x21b4c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21b4c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x21b4c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b4cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x21b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21b4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D0u;
        // 0x21b4d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B4D8u;
label_21b4d8:
    // 0x21b4d8: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x21B4D8u;
    {
        const bool branch_taken_0x21b4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B4D8u;
        // 0x21b4dc: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b4d8) {
            ctx->pc = 0x21B408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b408;
        }
    }
    ctx->pc = 0x21B4E0u;
    // 0x21b4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21b4e4: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b4e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b4e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21b4ec: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b4f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21b4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21b4f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b4f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21b4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b4fc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21b500: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b504: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21b508: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21b508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b50c: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x21b510: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21b510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b514: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21b518: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21b518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b51c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21b520: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21b520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b524: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21b524u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21b528: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x21b528u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b52c: 0xc084612  jal         func_211848
    ctx->pc = 0x21B52Cu;
    SET_GPR_U32(ctx, 31, 0x21B534u);
    ctx->pc = 0x21B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B52Cu;
    // 0x21b530: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211848u, 0x21B52Cu, 0x21B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B534u;
label_21b534:
    // 0x21b534: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b53c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21b540: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21b540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b544: 0xc084654  jal         func_211950
    ctx->pc = 0x21B544u;
    SET_GPR_U32(ctx, 31, 0x21B54Cu);
    ctx->pc = 0x21B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B544u;
    // 0x21b548: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211950u, 0x21B544u, 0x21B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B54Cu;
label_21b54c:
    // 0x21b54c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x21b54cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b550: 0x29cf0033  slti        $t7, $t6, 0x33
    ctx->pc = 0x21b550u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x21b554: 0x11e00017  beqz        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x21B554u;
    {
        const bool branch_taken_0x21b554 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B554u;
        // 0x21b558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b554) {
            ctx->pc = 0x21B5B4u;
            goto label_21b5b4;
        }
    }
    ctx->pc = 0x21B55Cu;
    // 0x21b55c: 0x5c10003  bgez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B55Cu;
    {
        const bool branch_taken_0x21b55c = (GPR_S32(ctx, 14) >= 0);
        if (branch_taken_0x21b55c) {
            ctx->pc = 0x21B56Cu;
            goto label_21b56c;
        }
    }
    ctx->pc = 0x21B564u;
    // 0x21b564: 0x240e0032  addiu       $t6, $zero, 0x32
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x21b568: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x21b568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
label_21b56c:
    // 0x21b56c: 0x19c0000c  blez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x21B56Cu;
    {
        const bool branch_taken_0x21b56c = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B56Cu;
        // 0x21b570: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b56c) {
            ctx->pc = 0x21B5A0u;
            goto label_21b5a0;
        }
    }
    ctx->pc = 0x21B574u;
    // 0x21b574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21b578:
    // 0x21b578: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21b578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b57c: 0xc084cc0  jal         func_213300
    ctx->pc = 0x21B57Cu;
    SET_GPR_U32(ctx, 31, 0x21B584u);
    ctx->pc = 0x21B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B57Cu;
    // 0x21b580: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213300u, 0x21B57Cu, 0x21B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B584u;
label_21b584:
    // 0x21b584: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21B584u;
    {
        const bool branch_taken_0x21b584 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21B588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B584u;
        // 0x21b588: 0x8faf0000  lw          $t7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b584) {
            ctx->pc = 0x21B5D8u;
            goto label_21b5d8;
        }
    }
    ctx->pc = 0x21B58Cu;
    // 0x21b58c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21b58cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21b590: 0x22f782a  slt         $t7, $s1, $t7
    ctx->pc = 0x21b590u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x21b594: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21B594u;
    {
        const bool branch_taken_0x21b594 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B594u;
        // 0x21b598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b594) {
            ctx->pc = 0x21B578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b578;
        }
    }
    ctx->pc = 0x21B59Cu;
    // 0x21b59c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x21b59cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21b5a0:
    // 0x21b5a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21b5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5a4: 0xc086cae  jal         func_21B2B8
    ctx->pc = 0x21B5A4u;
    SET_GPR_U32(ctx, 31, 0x21B5ACu);
    ctx->pc = 0x21B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B5A4u;
    // 0x21b5a8: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B2B8u;
    goto label_21b2b8;
    ctx->pc = 0x21B5ACu;
label_21b5ac:
    // 0x21b5ac: 0x8e6f0000  lw          $t7, 0x0($s3)
    ctx->pc = 0x21b5acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21b5b0: 0x1f41023  subu        $v0, $t7, $s4
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
label_21b5b4:
    // 0x21b5b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b5b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21b5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b5bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b5c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21b5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b5c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21b5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b5c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21b5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21b5cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21b5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5D0u;
        // 0x21b5d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B5D8u;
label_21b5d8:
    // 0x21b5d8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x21B5D8u;
    {
        const bool branch_taken_0x21b5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5D8u;
        // 0x21b5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5d8) {
            ctx->pc = 0x21B5B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21b5b4;
        }
    }
    ctx->pc = 0x21B5E0u;
}
