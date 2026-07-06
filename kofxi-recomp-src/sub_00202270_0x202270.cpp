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

// Function: sub_00202270
// Address: 0x202270 - 0x202418
void sub_00202270_0x202270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202270_0x202270");
#endif

    switch (ctx->pc) {
        case 0x2022b0u: goto label_2022b0;
        case 0x2022d8u: goto label_2022d8;
        case 0x202300u: goto label_202300;
        case 0x202338u: goto label_202338;
        case 0x202370u: goto label_202370;
        case 0x2023a0u: goto label_2023a0;
        case 0x2023c8u: goto label_2023c8;
        case 0x2023ecu: goto label_2023ec;
        case 0x202400u: goto label_202400;
        default: break;
    }

    ctx->pc = 0x202270u;

    // 0x202270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20227c: 0x80808a2  j           func_202288
    ctx->pc = 0x20227Cu;
    ctx->pc = 0x202280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20227Cu;
    // 0x202280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202288u;
    goto label_202288;
    ctx->pc = 0x202284u;
    // 0x202284: 0x0  nop
    ctx->pc = 0x202284u;
    // NOP
label_202288:
    // 0x202288: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x202288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x20228c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x20228cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x202290: 0xa22026  xor         $a0, $a1, $v0
    ctx->pc = 0x202290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x202294: 0xc21026  xor         $v0, $a2, $v0
    ctx->pc = 0x202294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x202298: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x202298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x20229c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x20229cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2022a0: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2022a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2022a4: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x2022a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2022a8: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x2022a8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2022ac: 0x0  nop
    ctx->pc = 0x2022acu;
    // NOP
label_2022b0:
    // 0x2022b0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2022b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2022b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2022b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2022b8: 0x0  nop
    ctx->pc = 0x2022b8u;
    // NOP
    // 0x2022bc: 0x0  nop
    ctx->pc = 0x2022bcu;
    // NOP
    // 0x2022c0: 0x0  nop
    ctx->pc = 0x2022c0u;
    // NOP
    // 0x2022c4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2022C4u;
    {
        const bool branch_taken_0x2022c4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022C4u;
        // 0x2022c8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022c4) {
            ctx->pc = 0x2022B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2022b0;
        }
    }
    ctx->pc = 0x2022CCu;
    // 0x2022cc: 0x24e20024  addiu       $v0, $a3, 0x24
    ctx->pc = 0x2022ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
    // 0x2022d0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2022d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2022d4: 0x0  nop
    ctx->pc = 0x2022d4u;
    // NOP
label_2022d8:
    // 0x2022d8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2022d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2022dc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2022dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2022e0: 0x0  nop
    ctx->pc = 0x2022e0u;
    // NOP
    // 0x2022e4: 0x0  nop
    ctx->pc = 0x2022e4u;
    // NOP
    // 0x2022e8: 0x0  nop
    ctx->pc = 0x2022e8u;
    // NOP
    // 0x2022ec: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2022ECu;
    {
        const bool branch_taken_0x2022ec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2022F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022ECu;
        // 0x2022f0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022ec) {
            ctx->pc = 0x2022D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2022d8;
        }
    }
    ctx->pc = 0x2022F4u;
    // 0x2022f4: 0x14a6000c  bne         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x2022F4u;
    {
        const bool branch_taken_0x2022f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022F4u;
        // 0x2022f8: 0x24080011  addiu       $t0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022f4) {
            ctx->pc = 0x202328u;
            goto label_202328;
        }
    }
    ctx->pc = 0x2022FCu;
    // 0x2022fc: 0x24e30044  addiu       $v1, $a3, 0x44
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_202300:
    // 0x202300: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x202304: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x202304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x202308: 0x290200e0  slti        $v0, $t0, 0xE0
    ctx->pc = 0x202308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x20230c: 0x0  nop
    ctx->pc = 0x20230cu;
    // NOP
    // 0x202310: 0x0  nop
    ctx->pc = 0x202310u;
    // NOP
    // 0x202314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x202314u;
    {
        const bool branch_taken_0x202314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202314u;
        // 0x202318: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202314) {
            ctx->pc = 0x202300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202300;
        }
    }
    ctx->pc = 0x20231Cu;
    // 0x20231c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20231Cu;
    {
        const bool branch_taken_0x20231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20231Cu;
        // 0x202320: 0x24e20380  addiu       $v0, $a3, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20231c) {
            ctx->pc = 0x20236Cu;
            goto label_20236c;
        }
    }
    ctx->pc = 0x202324u;
    // 0x202324: 0x0  nop
    ctx->pc = 0x202324u;
    // NOP
label_202328:
    // 0x202328: 0xc55023  subu        $t2, $a2, $a1
    ctx->pc = 0x202328u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x20232c: 0x240b00cf  addiu       $t3, $zero, 0xCF
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    // 0x202330: 0x24e90044  addiu       $t1, $a3, 0x44
    ctx->pc = 0x202330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
    // 0x202334: 0x0  nop
    ctx->pc = 0x202334u;
    // NOP
label_202338:
    // 0x202338: 0x14b001b  divu        $zero, $t2, $t3
    ctx->pc = 0x202338u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x20233c: 0x2503ffef  addiu       $v1, $t0, -0x11
    ctx->pc = 0x20233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967279));
    // 0x202340: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x202344: 0x51600001  beql        $t3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202344u;
    {
        const bool branch_taken_0x202344 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x202344) {
            ctx->pc = 0x202348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202344u;
            // 0x202348: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20234Cu;
            goto label_20234c;
        }
    }
    ctx->pc = 0x20234Cu;
label_20234c:
    // 0x20234c: 0x290400e0  slti        $a0, $t0, 0xE0
    ctx->pc = 0x20234cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x202350: 0x1012  mflo        $v0
    ctx->pc = 0x202350u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x202354: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x202354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x202358: 0x1851021  addu        $v0, $t4, $a1
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x20235c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x20235cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x202360: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202360u;
    {
        const bool branch_taken_0x202360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x202364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202360u;
        // 0x202364: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202360) {
            ctx->pc = 0x202338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202338;
        }
    }
    ctx->pc = 0x202368u;
    // 0x202368: 0x24e20380  addiu       $v0, $a3, 0x380
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 896));
label_20236c:
    // 0x20236c: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x20236cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_202370:
    // 0x202370: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x202370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x202374: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x202374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x202378: 0x0  nop
    ctx->pc = 0x202378u;
    // NOP
    // 0x20237c: 0x0  nop
    ctx->pc = 0x20237cu;
    // NOP
    // 0x202380: 0x0  nop
    ctx->pc = 0x202380u;
    // NOP
    // 0x202384: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x202384u;
    {
        const bool branch_taken_0x202384 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x202388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202384u;
        // 0x202388: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202384) {
            ctx->pc = 0x202370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202370;
        }
    }
    ctx->pc = 0x20238Cu;
    // 0x20238c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x20238cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x202390: 0x24e703c0  addiu       $a3, $a3, 0x3C0
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 960));
    // 0x202394: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202398: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20239c: 0x0  nop
    ctx->pc = 0x20239cu;
    // NOP
label_2023a0:
    // 0x2023a0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x2023a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x2023a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2023a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2023a8: 0x0  nop
    ctx->pc = 0x2023a8u;
    // NOP
    // 0x2023ac: 0x0  nop
    ctx->pc = 0x2023acu;
    // NOP
    // 0x2023b0: 0x0  nop
    ctx->pc = 0x2023b0u;
    // NOP
    // 0x2023b4: 0x501fffa  bgez        $t0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2023B4u;
    {
        const bool branch_taken_0x2023b4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2023B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B4u;
        // 0x2023b8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b4) {
            ctx->pc = 0x2023A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2023a0;
        }
    }
    ctx->pc = 0x2023BCu;
    // 0x2023bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2023BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023C4u;
    // 0x2023c4: 0x0  nop
    ctx->pc = 0x2023c4u;
    // NOP
label_2023c8:
    // 0x2023c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2023c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2023cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2023ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2023d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2023d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d4: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2023d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2023d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2023dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2023e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2023e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2023e4: 0xc080836  jal         func_2020D8
    ctx->pc = 0x2023E4u;
    SET_GPR_U32(ctx, 31, 0x2023ECu);
    ctx->pc = 0x2023E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023E4u;
    // 0x2023e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2020D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2020D8u, 0x2023E4u, 0x2023ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023ECu;
label_2023ec:
    // 0x2023ec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2023ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2023f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023f4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2023f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2023f8: 0xc080906  jal         func_202418
    ctx->pc = 0x2023F8u;
    SET_GPR_U32(ctx, 31, 0x202400u);
    ctx->pc = 0x2023FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023F8u;
    // 0x2023fc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202418u, 0x2023F8u, 0x202400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202400u;
label_202400:
    // 0x202400: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x202400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202404: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x202404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x202408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20240c: 0x3e00008  jr          $ra
    ctx->pc = 0x20240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20240Cu;
        // 0x202410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202414u;
    // 0x202414: 0x0  nop
    ctx->pc = 0x202414u;
    // NOP
    if (ctx->pc == 0x202414u) { ctx->pc = 0x202418u; }
}
