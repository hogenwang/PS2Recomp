#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B388
// Address: 0x29b388 - 0x29b638
void sub_0029B388_0x29b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B388_0x29b388");
#endif

    switch (ctx->pc) {
        case 0x29b3dcu: goto label_29b3dc;
        case 0x29b3fcu: goto label_29b3fc;
        case 0x29b428u: goto label_29b428;
        case 0x29b4b0u: goto label_29b4b0;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b568u: goto label_29b568;
        case 0x29b58cu: goto label_29b58c;
        case 0x29b594u: goto label_29b594;
        case 0x29b5a8u: goto label_29b5a8;
        case 0x29b5e8u: goto label_29b5e8;
        case 0x29b60cu: goto label_29b60c;
        case 0x29b620u: goto label_29b620;
        default: break;
    }

    ctx->pc = 0x29b388u;

    // 0x29b388: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29b38c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x29b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x29b390: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x29b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29b394: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29b394u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b398: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29b39c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29b39cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29b3a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29b3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29b3ac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29b3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29b3b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29b3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29b3b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29b3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29b3bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x29b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x29b3c0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29b3c4: 0x8e710028  lw          $s1, 0x28($s3)
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x29b3c8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B3C8u;
    {
        const bool branch_taken_0x29b3c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3C8u;
            // 0x29b3cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3c8) {
            ctx->pc = 0x29B3E4u;
            goto label_29b3e4;
        }
    }
    ctx->pc = 0x29B3D0u;
    // 0x29b3d0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x29b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b3d4: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29B3D4u;
    SET_GPR_U32(ctx, 31, 0x29B3DCu);
    ctx->pc = 0x29B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3D4u;
            // 0x29b3d8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3DCu; }
        if (ctx->pc != 0x29B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3DCu; }
        if (ctx->pc != 0x29B3DCu) { return; }
    }
    ctx->pc = 0x29B3DCu;
label_29b3dc:
    // 0x29b3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B3DCu;
    {
        const bool branch_taken_0x29b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3DCu;
            // 0x29b3e0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b3dc) {
            ctx->pc = 0x29B3ECu;
            goto label_29b3ec;
        }
    }
    ctx->pc = 0x29B3E4u;
label_29b3e4:
    // 0x29b3e4: 0x8e750040  lw          $s5, 0x40($s3)
    ctx->pc = 0x29b3e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x29b3e8: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x29b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
label_29b3ec:
    // 0x29b3ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x29b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b3f4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29B3F4u;
    SET_GPR_U32(ctx, 31, 0x29B3FCu);
    ctx->pc = 0x29B3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B3F4u;
            // 0x29b3f8: 0x113080  sll         $a2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3FCu; }
        if (ctx->pc != 0x29B3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B3FCu; }
        if (ctx->pc != 0x29B3FCu) { return; }
    }
    ctx->pc = 0x29B3FCu;
label_29b3fc:
    // 0x29b3fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b400: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29b404: 0xae6300d0  sw          $v1, 0xD0($s3)
    ctx->pc = 0x29b404u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 3));
    // 0x29b408: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29b408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b40c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b410: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x29b410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x29b414: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x29b414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x29b418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b41c: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x29b41cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b420: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x29B420u;
    {
        const bool branch_taken_0x29b420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B420u;
            // 0x29b424: 0xae720018  sw          $s2, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b420) {
            ctx->pc = 0x29B554u;
            goto label_29b554;
        }
    }
    ctx->pc = 0x29B428u;
label_29b428:
    // 0x29b428: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b42c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x29b430: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b434: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B434u;
    {
        const bool branch_taken_0x29b434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B434u;
            // 0x29b438: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b434) {
            ctx->pc = 0x29B47Cu;
            goto label_29b47c;
        }
    }
    ctx->pc = 0x29B43Cu;
    // 0x29b43c: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x29b43cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x29b440: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B440u;
    {
        const bool branch_taken_0x29b440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B440u;
            // 0x29b444: 0x2c620014  sltiu       $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b440) {
            ctx->pc = 0x29B45Cu;
            goto label_29b45c;
        }
    }
    ctx->pc = 0x29B448u;
    // 0x29b448: 0x24020092  addiu       $v0, $zero, 0x92
    ctx->pc = 0x29b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x29b44c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B44Cu;
    {
        const bool branch_taken_0x29b44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b44c) {
            ctx->pc = 0x29B450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B44Cu;
            // 0x29b450: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B454u;
    // 0x29b454: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x29B454u;
    {
        const bool branch_taken_0x29b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b454) {
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B45Cu;
label_29b45c:
    // 0x29b45c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29B45Cu;
    {
        const bool branch_taken_0x29b45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B45Cu;
            // 0x29b460: 0x2c620010  sltiu       $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b45c) {
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B464u;
    // 0x29b464: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B464u;
    {
        const bool branch_taken_0x29b464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B464u;
            // 0x29b468: 0x4143a  dsrl        $v0, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b464) {
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B46Cu;
    // 0x29b46c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29b46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29b470: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x29b470u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b474: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29B474u;
    {
        const bool branch_taken_0x29b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B474u;
            // 0x29b478: 0x16b03f  dsra32      $s6, $s6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b474) {
            ctx->pc = 0x29B48Cu;
            goto label_29b48c;
        }
    }
    ctx->pc = 0x29B47Cu;
label_29b47c:
    // 0x29b47c: 0x4143a  dsrl        $v0, $a0, 16
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 16);
    // 0x29b480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29b484: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x29b484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b488: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29b488u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_29b48c:
    // 0x29b48c: 0x6000025  bltz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x29B48Cu;
    {
        const bool branch_taken_0x29b48c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x29B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B48Cu;
            // 0x29b490: 0x26140001  addiu       $s4, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b48c) {
            ctx->pc = 0x29B524u;
            goto label_29b524;
        }
    }
    ctx->pc = 0x29B494u;
    // 0x29b494: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x29b494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29b498: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B498u;
            // 0x29b49c: 0x26050005  addiu       $a1, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B500u;
            goto label_29b500;
        }
    }
    ctx->pc = 0x29B4A0u;
    // 0x29b4a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4a4: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x29b4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x29b4a8: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x29B4A8u;
    SET_GPR_U32(ctx, 31, 0x29B4B0u);
    ctx->pc = 0x29B4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4A8u;
            // 0x29b4ac: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B4B0u; }
        if (ctx->pc != 0x29B4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B4B0u; }
        if (ctx->pc != 0x29B4B0u) { return; }
    }
    ctx->pc = 0x29B4B0u;
label_29b4b0:
    // 0x29b4b0: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x29b4b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x29b4b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29b4b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4b8: 0xae710028  sw          $s1, 0x28($s3)
    ctx->pc = 0x29b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 17));
    // 0x29b4bc: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x29b4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29b4c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29B4C0u;
    {
        const bool branch_taken_0x29b4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4C0u;
            // 0x29b4c4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4c0) {
            ctx->pc = 0x29B500u;
            goto label_29b500;
        }
    }
    ctx->pc = 0x29B4C8u;
    // 0x29b4c8: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x29b4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29b4cc: 0x1240c0  sll         $t0, $s2, 3
    ctx->pc = 0x29b4ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29b4d0: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b4d4: 0x2f6382a  slt         $a3, $s7, $s6
    ctx->pc = 0x29b4d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_29b4d8:
    // 0x29b4d8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x29b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29b4dc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x29b4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b4e0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x29b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29b4e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29b4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29b4e8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x29b4ec: 0xd1182a  slt         $v1, $a2, $s1
    ctx->pc = 0x29b4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x29b4f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29B4F0u;
    {
        const bool branch_taken_0x29b4f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b4f0) {
            ctx->pc = 0x29B4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b4d8;
        }
    }
    ctx->pc = 0x29B4F8u;
    // 0x29b4f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29B4F8u;
    {
        const bool branch_taken_0x29b4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B4F8u;
            // 0x29b4fc: 0xb51021  addu        $v0, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b4f8) {
            ctx->pc = 0x29B514u;
            goto label_29b514;
        }
    }
    ctx->pc = 0x29B500u;
label_29b500:
    // 0x29b500: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x29b500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x29b504: 0x1240c0  sll         $t0, $s2, 3
    ctx->pc = 0x29b504u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29b508: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x29b508u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b50c: 0x2f6382a  slt         $a3, $s7, $s6
    ctx->pc = 0x29b50cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x29b510: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x29b510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
label_29b514:
    // 0x29b514: 0x3d4182a  slt         $v1, $fp, $s4
    ctx->pc = 0x29b514u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x29b518: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x29b518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x29b51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29B51Cu;
    {
        const bool branch_taken_0x29b51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B51Cu;
            // 0x29b520: 0x283f00b  movn        $fp, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b51c) {
            ctx->pc = 0x29B530u;
            goto label_29b530;
        }
    }
    ctx->pc = 0x29B524u;
label_29b524:
    // 0x29b524: 0x26490001  addiu       $t1, $s2, 0x1
    ctx->pc = 0x29b524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b528: 0x1240c0  sll         $t0, $s2, 3
    ctx->pc = 0x29b528u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x29b52c: 0x2f6382a  slt         $a3, $s7, $s6
    ctx->pc = 0x29b52cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_29b530:
    // 0x29b530: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b534: 0x2c7b80b  movn        $s7, $s6, $a3
    ctx->pc = 0x29b534u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 22));
    // 0x29b538: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x29b538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x29b53c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b540: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x29b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x29b544: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x29b544u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29b54c: 0x1480ffb6  bnez        $a0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x29B54Cu;
    {
        const bool branch_taken_0x29b54c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B54Cu;
            // 0x29b550: 0xae630018  sw          $v1, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b54c) {
            ctx->pc = 0x29B428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b428;
        }
    }
    ctx->pc = 0x29B554u;
label_29b554:
    // 0x29b554: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x29b558: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B558u;
    {
        const bool branch_taken_0x29b558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B558u;
            // 0x29b55c: 0xae7e0028  sw          $fp, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b558) {
            ctx->pc = 0x29B568u;
            goto label_29b568;
        }
    }
    ctx->pc = 0x29B560u;
    // 0x29b560: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B560u;
    SET_GPR_U32(ctx, 31, 0x29B568u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B568u; }
        if (ctx->pc != 0x29B568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B568u; }
        if (ctx->pc != 0x29B568u) { return; }
    }
    ctx->pc = 0x29B568u;
label_29b568:
    // 0x29b568: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x29b568u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x29b56c: 0xae750040  sw          $s5, 0x40($s3)
    ctx->pc = 0x29b56cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 21));
    // 0x29b570: 0x1ae0000f  blez        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x29B570u;
    {
        const bool branch_taken_0x29b570 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x29B574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B570u;
            // 0x29b574: 0xae770024  sw          $s7, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b570) {
            ctx->pc = 0x29B5B0u;
            goto label_29b5b0;
        }
    }
    ctx->pc = 0x29B578u;
    // 0x29b578: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x29b57c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B57Cu;
    {
        const bool branch_taken_0x29b57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B57Cu;
            // 0x29b580: 0x178080  sll         $s0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b57c) {
            ctx->pc = 0x29B58Cu;
            goto label_29b58c;
        }
    }
    ctx->pc = 0x29B584u;
    // 0x29b584: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29B584u;
    SET_GPR_U32(ctx, 31, 0x29B58Cu);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B58Cu; }
        if (ctx->pc != 0x29B58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B58Cu; }
        if (ctx->pc != 0x29B58Cu) { return; }
    }
    ctx->pc = 0x29B58Cu;
label_29b58c:
    // 0x29b58c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29B58Cu;
    SET_GPR_U32(ctx, 31, 0x29B594u);
    ctx->pc = 0x29B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B58Cu;
            // 0x29b590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B594u; }
        if (ctx->pc != 0x29B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B594u; }
        if (ctx->pc != 0x29B594u) { return; }
    }
    ctx->pc = 0x29B594u;
label_29b594:
    // 0x29b594: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29b594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b598: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x29b598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x29b59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29b59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5a0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29B5A0u;
    SET_GPR_U32(ctx, 31, 0x29B5A8u);
    ctx->pc = 0x29B5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5A0u;
            // 0x29b5a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B5A8u; }
        if (ctx->pc != 0x29B5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B5A8u; }
        if (ctx->pc != 0x29B5A8u) { return; }
    }
    ctx->pc = 0x29B5A8u;
label_29b5a8:
    // 0x29b5a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29B5A8u;
    {
        const bool branch_taken_0x29b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5A8u;
            // 0x29b5ac: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5a8) {
            ctx->pc = 0x29B5B8u;
            goto label_29b5b8;
        }
    }
    ctx->pc = 0x29B5B0u;
label_29b5b0:
    // 0x29b5b0: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x29b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
    // 0x29b5b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29b5b8:
    // 0x29b5b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29b5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5bc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29b5bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29b5c0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29b5c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29b5c4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29b5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29b5c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29b5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b5cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29b5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b5d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29b5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b5d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29b5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b5d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29b5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b5dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29b5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B5E0u;
            // 0x29b5e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B5E8u;
label_29b5e8:
    // 0x29b5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b5ec: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x29b5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x29b5f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b5f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b5f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29b5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b604: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29B604u;
    SET_GPR_U32(ctx, 31, 0x29B60Cu);
    ctx->pc = 0x29B608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B604u;
            // 0x29b608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B60Cu; }
        if (ctx->pc != 0x29B60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B60Cu; }
        if (ctx->pc != 0x29B60Cu) { return; }
    }
    ctx->pc = 0x29B60Cu;
label_29b60c:
    // 0x29b60c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29b610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b618: 0xc0a0dce  jal         func_283738
    ctx->pc = 0x29B618u;
    SET_GPR_U32(ctx, 31, 0x29B620u);
    ctx->pc = 0x29B61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B618u;
            // 0x29b61c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283738u;
    if (runtime->hasFunction(0x283738u)) {
        auto targetFn = runtime->lookupFunction(0x283738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B620u; }
        if (ctx->pc != 0x29B620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283738_0x283738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B620u; }
        if (ctx->pc != 0x29B620u) { return; }
    }
    ctx->pc = 0x29B620u;
label_29b620:
    // 0x29b620: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x29b620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x29b624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b628: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b630: 0x3e00008  jr          $ra
    ctx->pc = 0x29B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B630u;
            // 0x29b634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B638u;
    ctx->pc = 0x29b638u;
}
