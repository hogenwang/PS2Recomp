#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC298
// Address: 0x2bc298 - 0x2bc438
void sub_002BC298_0x2bc298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC298_0x2bc298");
#endif

    switch (ctx->pc) {
        case 0x2bc298u: goto label_2bc298;
        case 0x2bc29cu: goto label_2bc29c;
        case 0x2bc2a0u: goto label_2bc2a0;
        case 0x2bc2a4u: goto label_2bc2a4;
        case 0x2bc2a8u: goto label_2bc2a8;
        case 0x2bc2acu: goto label_2bc2ac;
        case 0x2bc2b0u: goto label_2bc2b0;
        case 0x2bc2b4u: goto label_2bc2b4;
        case 0x2bc2b8u: goto label_2bc2b8;
        case 0x2bc2bcu: goto label_2bc2bc;
        case 0x2bc2c0u: goto label_2bc2c0;
        case 0x2bc2c4u: goto label_2bc2c4;
        case 0x2bc2c8u: goto label_2bc2c8;
        case 0x2bc2ccu: goto label_2bc2cc;
        case 0x2bc2d0u: goto label_2bc2d0;
        case 0x2bc2d4u: goto label_2bc2d4;
        case 0x2bc2d8u: goto label_2bc2d8;
        case 0x2bc2dcu: goto label_2bc2dc;
        case 0x2bc2e0u: goto label_2bc2e0;
        case 0x2bc2e4u: goto label_2bc2e4;
        case 0x2bc2e8u: goto label_2bc2e8;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc2f0u: goto label_2bc2f0;
        case 0x2bc2f4u: goto label_2bc2f4;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc2fcu: goto label_2bc2fc;
        case 0x2bc300u: goto label_2bc300;
        case 0x2bc304u: goto label_2bc304;
        case 0x2bc308u: goto label_2bc308;
        case 0x2bc30cu: goto label_2bc30c;
        case 0x2bc310u: goto label_2bc310;
        case 0x2bc314u: goto label_2bc314;
        case 0x2bc318u: goto label_2bc318;
        case 0x2bc31cu: goto label_2bc31c;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc324u: goto label_2bc324;
        case 0x2bc328u: goto label_2bc328;
        case 0x2bc32cu: goto label_2bc32c;
        case 0x2bc330u: goto label_2bc330;
        case 0x2bc334u: goto label_2bc334;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc33cu: goto label_2bc33c;
        case 0x2bc340u: goto label_2bc340;
        case 0x2bc344u: goto label_2bc344;
        case 0x2bc348u: goto label_2bc348;
        case 0x2bc34cu: goto label_2bc34c;
        case 0x2bc350u: goto label_2bc350;
        case 0x2bc354u: goto label_2bc354;
        case 0x2bc358u: goto label_2bc358;
        case 0x2bc35cu: goto label_2bc35c;
        case 0x2bc360u: goto label_2bc360;
        case 0x2bc364u: goto label_2bc364;
        case 0x2bc368u: goto label_2bc368;
        case 0x2bc36cu: goto label_2bc36c;
        case 0x2bc370u: goto label_2bc370;
        case 0x2bc374u: goto label_2bc374;
        case 0x2bc378u: goto label_2bc378;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc380u: goto label_2bc380;
        case 0x2bc384u: goto label_2bc384;
        case 0x2bc388u: goto label_2bc388;
        case 0x2bc38cu: goto label_2bc38c;
        case 0x2bc390u: goto label_2bc390;
        case 0x2bc394u: goto label_2bc394;
        case 0x2bc398u: goto label_2bc398;
        case 0x2bc39cu: goto label_2bc39c;
        case 0x2bc3a0u: goto label_2bc3a0;
        case 0x2bc3a4u: goto label_2bc3a4;
        case 0x2bc3a8u: goto label_2bc3a8;
        case 0x2bc3acu: goto label_2bc3ac;
        case 0x2bc3b0u: goto label_2bc3b0;
        case 0x2bc3b4u: goto label_2bc3b4;
        case 0x2bc3b8u: goto label_2bc3b8;
        case 0x2bc3bcu: goto label_2bc3bc;
        case 0x2bc3c0u: goto label_2bc3c0;
        case 0x2bc3c4u: goto label_2bc3c4;
        case 0x2bc3c8u: goto label_2bc3c8;
        case 0x2bc3ccu: goto label_2bc3cc;
        case 0x2bc3d0u: goto label_2bc3d0;
        case 0x2bc3d4u: goto label_2bc3d4;
        case 0x2bc3d8u: goto label_2bc3d8;
        case 0x2bc3dcu: goto label_2bc3dc;
        case 0x2bc3e0u: goto label_2bc3e0;
        case 0x2bc3e4u: goto label_2bc3e4;
        case 0x2bc3e8u: goto label_2bc3e8;
        case 0x2bc3ecu: goto label_2bc3ec;
        case 0x2bc3f0u: goto label_2bc3f0;
        case 0x2bc3f4u: goto label_2bc3f4;
        case 0x2bc3f8u: goto label_2bc3f8;
        case 0x2bc3fcu: goto label_2bc3fc;
        case 0x2bc400u: goto label_2bc400;
        case 0x2bc404u: goto label_2bc404;
        case 0x2bc408u: goto label_2bc408;
        case 0x2bc40cu: goto label_2bc40c;
        case 0x2bc410u: goto label_2bc410;
        case 0x2bc414u: goto label_2bc414;
        case 0x2bc418u: goto label_2bc418;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc420u: goto label_2bc420;
        case 0x2bc424u: goto label_2bc424;
        case 0x2bc428u: goto label_2bc428;
        case 0x2bc42cu: goto label_2bc42c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc434u: goto label_2bc434;
        default: break;
    }

    ctx->pc = 0x2bc298u;

label_2bc298:
    // 0x2bc298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bc298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2bc29c:
    // 0x2bc29c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bc29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2bc2a0:
    // 0x2bc2a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2bc2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2bc2a4:
    // 0x2bc2a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bc2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc2a8:
    // 0x2bc2a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bc2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2bc2ac:
    // 0x2bc2ac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2bc2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2bc2b0:
    // 0x2bc2b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bc2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2bc2b4:
    // 0x2bc2b4: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2bc2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bc2b8:
    // 0x2bc2b8: 0x56000011  bnel        $s0, $zero, . + 4 + (0x11 << 2)
label_2bc2bc:
    if (ctx->pc == 0x2BC2BCu) {
        ctx->pc = 0x2BC2BCu;
            // 0x2bc2bc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x2BC2C0u;
        goto label_2bc2c0;
    }
    ctx->pc = 0x2BC2B8u;
    {
        const bool branch_taken_0x2bc2b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc2b8) {
            ctx->pc = 0x2BC2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2B8u;
            // 0x2bc2bc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC300u;
            goto label_2bc300;
        }
    }
    ctx->pc = 0x2BC2C0u;
label_2bc2c0:
    // 0x2bc2c0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2bc2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc2c4:
    // 0x2bc2c4: 0x18c00022  blez        $a2, . + 4 + (0x22 << 2)
label_2bc2c8:
    if (ctx->pc == 0x2BC2C8u) {
        ctx->pc = 0x2BC2C8u;
            // 0x2bc2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2CCu;
        goto label_2bc2cc;
    }
    ctx->pc = 0x2BC2C4u;
    {
        const bool branch_taken_0x2bc2c4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2C4u;
            // 0x2bc2c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2c4) {
            ctx->pc = 0x2BC350u;
            goto label_2bc350;
        }
    }
    ctx->pc = 0x2BC2CCu;
label_2bc2cc:
    // 0x2bc2cc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bc2d0:
    // 0x2bc2d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bc2d4:
    // 0x2bc2d4: 0x0  nop
    ctx->pc = 0x2bc2d4u;
    // NOP
label_2bc2d8:
    // 0x2bc2d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bc2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bc2dc:
    // 0x2bc2dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bc2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2bc2e0:
    // 0x2bc2e0: 0x1065002d  beq         $v1, $a1, . + 4 + (0x2D << 2)
label_2bc2e4:
    if (ctx->pc == 0x2BC2E4u) {
        ctx->pc = 0x2BC2E4u;
            // 0x2bc2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2E8u;
        goto label_2bc2e8;
    }
    ctx->pc = 0x2BC2E0u;
    {
        const bool branch_taken_0x2bc2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2E0u;
            // 0x2bc2e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2e0) {
            ctx->pc = 0x2BC398u;
            goto label_2bc398;
        }
    }
    ctx->pc = 0x2BC2E8u;
label_2bc2e8:
    // 0x2bc2e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bc2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2bc2ec:
    // 0x2bc2ec: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2bc2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2bc2f0:
    // 0x2bc2f0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2bc2f4:
    if (ctx->pc == 0x2BC2F4u) {
        ctx->pc = 0x2BC2F4u;
            // 0x2bc2f4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2BC2F8u;
        goto label_2bc2f8;
    }
    ctx->pc = 0x2BC2F0u;
    {
        const bool branch_taken_0x2bc2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2F0u;
            // 0x2bc2f4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2f0) {
            ctx->pc = 0x2BC2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc2d8;
        }
    }
    ctx->pc = 0x2BC2F8u;
label_2bc2f8:
    // 0x2bc2f8: 0x10000027  b           . + 4 + (0x27 << 2)
label_2bc2fc:
    if (ctx->pc == 0x2BC2FCu) {
        ctx->pc = 0x2BC2FCu;
            // 0x2bc2fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BC300u;
        goto label_2bc300;
    }
    ctx->pc = 0x2BC2F8u;
    {
        const bool branch_taken_0x2bc2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC2F8u;
            // 0x2bc2fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc2f8) {
            ctx->pc = 0x2BC398u;
            goto label_2bc398;
        }
    }
    ctx->pc = 0x2BC300u;
label_2bc300:
    // 0x2bc300: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2bc304:
    if (ctx->pc == 0x2BC304u) {
        ctx->pc = 0x2BC304u;
            // 0x2bc304: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2BC308u;
        goto label_2bc308;
    }
    ctx->pc = 0x2BC300u;
    {
        const bool branch_taken_0x2bc300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC300u;
            // 0x2bc304: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc300) {
            ctx->pc = 0x2BC328u;
            goto label_2bc328;
        }
    }
    ctx->pc = 0x2BC308u;
label_2bc308:
    // 0x2bc308: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bc308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bc30c:
    // 0x2bc30c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2bc30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bc310:
    // 0x2bc310: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2bc310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc314:
    // 0x2bc314: 0xc04a168  jal         func_1285A0
label_2bc318:
    if (ctx->pc == 0x2BC318u) {
        ctx->pc = 0x2BC318u;
            // 0x2bc318: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC31Cu;
        goto label_2bc31c;
    }
    ctx->pc = 0x2BC314u;
    SET_GPR_U32(ctx, 31, 0x2BC31Cu);
    ctx->pc = 0x2BC318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC314u;
            // 0x2bc318: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1285A0u;
    if (runtime->hasFunction(0x1285A0u)) {
        auto targetFn = runtime->lookupFunction(0x1285A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC31Cu; }
        if (ctx->pc != 0x2BC31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001285A0_0x1285a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC31Cu; }
        if (ctx->pc != 0x2BC31Cu) { return; }
    }
    ctx->pc = 0x2BC31Cu;
label_2bc31c:
    // 0x2bc31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bc320:
    // 0x2bc320: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2bc320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2bc324:
    // 0x2bc324: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bc324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc328:
    // 0x2bc328: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2bc32c:
    if (ctx->pc == 0x2BC32Cu) {
        ctx->pc = 0x2BC32Cu;
            // 0x2bc32c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC330u;
        goto label_2bc330;
    }
    ctx->pc = 0x2BC328u;
    {
        const bool branch_taken_0x2bc328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC328u;
            // 0x2bc32c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc328) {
            ctx->pc = 0x2BC350u;
            goto label_2bc350;
        }
    }
    ctx->pc = 0x2BC330u;
label_2bc330:
    // 0x2bc330: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2bc330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bc334:
    // 0x2bc334: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2bc334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bc338:
    // 0x2bc338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bc33c:
    // 0x2bc33c: 0xc048c64  jal         func_123190
label_2bc340:
    if (ctx->pc == 0x2BC340u) {
        ctx->pc = 0x2BC340u;
            // 0x2bc340: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2BC344u;
        goto label_2bc344;
    }
    ctx->pc = 0x2BC33Cu;
    SET_GPR_U32(ctx, 31, 0x2BC344u);
    ctx->pc = 0x2BC340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC33Cu;
            // 0x2bc340: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123190u;
    if (runtime->hasFunction(0x123190u)) {
        auto targetFn = runtime->lookupFunction(0x123190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC344u; }
        if (ctx->pc != 0x2BC344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123190_0x123190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC344u; }
        if (ctx->pc != 0x2BC344u) { return; }
    }
    ctx->pc = 0x2BC344u;
label_2bc344:
    // 0x2bc344: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bc344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc348:
    // 0x2bc348: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_2bc34c:
    if (ctx->pc == 0x2BC34Cu) {
        ctx->pc = 0x2BC34Cu;
            // 0x2bc34c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x2BC350u;
        goto label_2bc350;
    }
    ctx->pc = 0x2BC348u;
    {
        const bool branch_taken_0x2bc348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc348) {
            ctx->pc = 0x2BC34Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC348u;
            // 0x2bc34c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC358u;
            goto label_2bc358;
        }
    }
    ctx->pc = 0x2BC350u;
label_2bc350:
    // 0x2bc350: 0x10000011  b           . + 4 + (0x11 << 2)
label_2bc354:
    if (ctx->pc == 0x2BC354u) {
        ctx->pc = 0x2BC354u;
            // 0x2bc354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BC358u;
        goto label_2bc358;
    }
    ctx->pc = 0x2BC350u;
    {
        const bool branch_taken_0x2bc350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC350u;
            // 0x2bc354: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc350) {
            ctx->pc = 0x2BC398u;
            goto label_2bc398;
        }
    }
    ctx->pc = 0x2BC358u;
label_2bc358:
    // 0x2bc358: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2bc358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bc35c:
    // 0x2bc35c: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x2bc35cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_2bc360:
    // 0x2bc360: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2bc360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bc364:
    // 0x2bc364: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bc368:
    if (ctx->pc == 0x2BC368u) {
        ctx->pc = 0x2BC368u;
            // 0x2bc368: 0x2472fffc  addiu       $s2, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x2BC36Cu;
        goto label_2bc36c;
    }
    ctx->pc = 0x2BC364u;
    {
        const bool branch_taken_0x2bc364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC364u;
            // 0x2bc368: 0x2472fffc  addiu       $s2, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc364) {
            ctx->pc = 0x2BC374u;
            goto label_2bc374;
        }
    }
    ctx->pc = 0x2BC36Cu;
label_2bc36c:
    // 0x2bc36c: 0x0  nop
    ctx->pc = 0x2bc36cu;
    // NOP
label_2bc370:
    // 0x2bc370: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2bc370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2bc374:
    // 0x2bc374: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_2bc378:
    if (ctx->pc == 0x2BC378u) {
        ctx->pc = 0x2BC378u;
            // 0x2bc378: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC37Cu;
        goto label_2bc37c;
    }
    ctx->pc = 0x2BC374u;
    {
        const bool branch_taken_0x2bc374 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2BC378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC374u;
            // 0x2bc378: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc374) {
            ctx->pc = 0x2BC394u;
            goto label_2bc394;
        }
    }
    ctx->pc = 0x2BC37Cu;
label_2bc37c:
    // 0x2bc37c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2bc380:
    // 0x2bc380: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2bc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2bc384:
    // 0x2bc384: 0x40f809  jalr        $v0
label_2bc388:
    if (ctx->pc == 0x2BC388u) {
        ctx->pc = 0x2BC388u;
            // 0x2bc388: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->pc = 0x2BC38Cu;
        goto label_2bc38c;
    }
    ctx->pc = 0x2BC384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2BC38Cu);
        ctx->pc = 0x2BC388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC384u;
            // 0x2bc388: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BC38Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BC38Cu; }
            if (ctx->pc != 0x2BC38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BC38Cu;
label_2bc38c:
    // 0x2bc38c: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
label_2bc390:
    if (ctx->pc == 0x2BC390u) {
        ctx->pc = 0x2BC390u;
            // 0x2bc390: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x2BC394u;
        goto label_2bc394;
    }
    ctx->pc = 0x2BC38Cu;
    {
        const bool branch_taken_0x2bc38c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BC390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC38Cu;
            // 0x2bc390: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc38c) {
            ctx->pc = 0x2BC370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc370;
        }
    }
    ctx->pc = 0x2BC394u;
label_2bc394:
    // 0x2bc394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bc394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc398:
    // 0x2bc398: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bc398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2bc39c:
    // 0x2bc39c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bc39cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc3a0:
    // 0x2bc3a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bc3a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc3a4:
    // 0x2bc3a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bc3a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc3a8:
    // 0x2bc3a8: 0x3e00008  jr          $ra
label_2bc3ac:
    if (ctx->pc == 0x2BC3ACu) {
        ctx->pc = 0x2BC3ACu;
            // 0x2bc3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2BC3B0u;
        goto label_2bc3b0;
    }
    ctx->pc = 0x2BC3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3A8u;
            // 0x2bc3ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC3B0u;
label_2bc3b0:
    // 0x2bc3b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bc3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bc3b4:
    // 0x2bc3b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bc3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2bc3b8:
    // 0x2bc3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2bc3bc:
    // 0x2bc3bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bc3bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3c0:
    // 0x2bc3c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bc3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bc3c4:
    // 0x2bc3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3c8:
    // 0x2bc3c8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_2bc3cc:
    if (ctx->pc == 0x2BC3CCu) {
        ctx->pc = 0x2BC3CCu;
            // 0x2bc3cc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x2BC3D0u;
        goto label_2bc3d0;
    }
    ctx->pc = 0x2BC3C8u;
    {
        const bool branch_taken_0x2bc3c8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2BC3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3C8u;
            // 0x2bc3cc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3c8) {
            ctx->pc = 0x2BC3E0u;
            goto label_2bc3e0;
        }
    }
    ctx->pc = 0x2BC3D0u;
label_2bc3d0:
    // 0x2bc3d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bc3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bc3d4:
    // 0x2bc3d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2bc3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2bc3d8:
    // 0x2bc3d8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2bc3dc:
    if (ctx->pc == 0x2BC3DCu) {
        ctx->pc = 0x2BC3DCu;
            // 0x2bc3dc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2BC3E0u;
        goto label_2bc3e0;
    }
    ctx->pc = 0x2BC3D8u;
    {
        const bool branch_taken_0x2bc3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3d8) {
            ctx->pc = 0x2BC3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3D8u;
            // 0x2bc3dc: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BC3E8u;
            goto label_2bc3e8;
        }
    }
    ctx->pc = 0x2BC3E0u;
label_2bc3e0:
    // 0x2bc3e0: 0x1000000f  b           . + 4 + (0xF << 2)
label_2bc3e4:
    if (ctx->pc == 0x2BC3E4u) {
        ctx->pc = 0x2BC3E4u;
            // 0x2bc3e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BC3E8u;
        goto label_2bc3e8;
    }
    ctx->pc = 0x2BC3E0u;
    {
        const bool branch_taken_0x2bc3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3E0u;
            // 0x2bc3e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3e0) {
            ctx->pc = 0x2BC420u;
            goto label_2bc420;
        }
    }
    ctx->pc = 0x2BC3E8u;
label_2bc3e8:
    // 0x2bc3e8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2bc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2bc3ec:
    // 0x2bc3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bc3f0:
    // 0x2bc3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2bc3f4:
    // 0x2bc3f4: 0xc0af084  jal         func_2BC210
label_2bc3f8:
    if (ctx->pc == 0x2BC3F8u) {
        ctx->pc = 0x2BC3F8u;
            // 0x2bc3f8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2BC3FCu;
        goto label_2bc3fc;
    }
    ctx->pc = 0x2BC3F4u;
    SET_GPR_U32(ctx, 31, 0x2BC3FCu);
    ctx->pc = 0x2BC3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3F4u;
            // 0x2bc3f8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC210u;
    if (runtime->hasFunction(0x2BC210u)) {
        auto targetFn = runtime->lookupFunction(0x2BC210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3FCu; }
        if (ctx->pc != 0x2BC3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC210_0x2bc210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC3FCu; }
        if (ctx->pc != 0x2BC3FCu) { return; }
    }
    ctx->pc = 0x2BC3FCu;
label_2bc3fc:
    // 0x2bc3fc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2bc400:
    if (ctx->pc == 0x2BC400u) {
        ctx->pc = 0x2BC400u;
            // 0x2bc400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC404u;
        goto label_2bc404;
    }
    ctx->pc = 0x2BC3FCu;
    {
        const bool branch_taken_0x2bc3fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC3FCu;
            // 0x2bc400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc3fc) {
            ctx->pc = 0x2BC414u;
            goto label_2bc414;
        }
    }
    ctx->pc = 0x2BC404u;
label_2bc404:
    // 0x2bc404: 0xc0af10e  jal         func_2BC438
label_2bc408:
    if (ctx->pc == 0x2BC408u) {
        ctx->pc = 0x2BC408u;
            // 0x2bc408: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC40Cu;
        goto label_2bc40c;
    }
    ctx->pc = 0x2BC404u;
    SET_GPR_U32(ctx, 31, 0x2BC40Cu);
    ctx->pc = 0x2BC408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC404u;
            // 0x2bc408: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (runtime->hasFunction(0x2BC438u)) {
        auto targetFn = runtime->lookupFunction(0x2BC438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC40Cu; }
        if (ctx->pc != 0x2BC40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC438_0x2bc438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC40Cu; }
        if (ctx->pc != 0x2BC40Cu) { return; }
    }
    ctx->pc = 0x2BC40Cu;
label_2bc40c:
    // 0x2bc40c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bc410:
    if (ctx->pc == 0x2BC410u) {
        ctx->pc = 0x2BC410u;
            // 0x2bc410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2BC414u;
        goto label_2bc414;
    }
    ctx->pc = 0x2BC40Cu;
    {
        const bool branch_taken_0x2bc40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC40Cu;
            // 0x2bc410: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc40c) {
            ctx->pc = 0x2BC424u;
            goto label_2bc424;
        }
    }
    ctx->pc = 0x2BC414u;
label_2bc414:
    // 0x2bc414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bc418:
    // 0x2bc418: 0xc0af02c  jal         func_2BC0B0
label_2bc41c:
    if (ctx->pc == 0x2BC41Cu) {
        ctx->pc = 0x2BC41Cu;
            // 0x2bc41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BC420u;
        goto label_2bc420;
    }
    ctx->pc = 0x2BC418u;
    SET_GPR_U32(ctx, 31, 0x2BC420u);
    ctx->pc = 0x2BC41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC418u;
            // 0x2bc41c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0B0u;
    if (runtime->hasFunction(0x2BC0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BC0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC420u; }
        if (ctx->pc != 0x2BC420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC0B0_0x2bc0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC420u; }
        if (ctx->pc != 0x2BC420u) { return; }
    }
    ctx->pc = 0x2BC420u;
label_2bc420:
    // 0x2bc420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bc420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bc424:
    // 0x2bc424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bc424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bc428:
    // 0x2bc428: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bc428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bc42c:
    // 0x2bc42c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc42cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bc430:
    // 0x2bc430: 0x3e00008  jr          $ra
label_2bc434:
    if (ctx->pc == 0x2BC434u) {
        ctx->pc = 0x2BC434u;
            // 0x2bc434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2BC438u;
        goto label_fallthrough_0x2bc430;
    }
    ctx->pc = 0x2BC430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC430u;
            // 0x2bc434: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bc430:
    ctx->pc = 0x2BC438u;
    ctx->pc = 0x2bc438u;
}
