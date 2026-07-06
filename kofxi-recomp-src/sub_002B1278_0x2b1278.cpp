#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1278
// Address: 0x2b1278 - 0x2b1410
void sub_002B1278_0x2b1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1278_0x2b1278");
#endif

    switch (ctx->pc) {
        case 0x2b12a8u: goto label_2b12a8;
        case 0x2b12e0u: goto label_2b12e0;
        case 0x2b12f4u: goto label_2b12f4;
        case 0x2b1300u: goto label_2b1300;
        case 0x2b1310u: goto label_2b1310;
        case 0x2b1320u: goto label_2b1320;
        case 0x2b1338u: goto label_2b1338;
        case 0x2b134cu: goto label_2b134c;
        case 0x2b1358u: goto label_2b1358;
        case 0x2b1368u: goto label_2b1368;
        case 0x2b1378u: goto label_2b1378;
        case 0x2b1388u: goto label_2b1388;
        case 0x2b13acu: goto label_2b13ac;
        default: break;
    }

    ctx->pc = 0x2b1278u;

    // 0x2b1278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b127c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1280: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1284: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b1284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1288: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b128c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b128cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1290: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1290u;
    {
        const bool branch_taken_0x2b1290 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B1294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1290u;
            // 0x2b1294: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1290) {
            ctx->pc = 0x2B12A0u;
            goto label_2b12a0;
        }
    }
    ctx->pc = 0x2B1298u;
    // 0x2b1298: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2B1298u;
    {
        const bool branch_taken_0x2b1298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1298u;
            // 0x2b129c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1298) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B12A0u;
label_2b12a0:
    // 0x2b12a0: 0xc0a56cc  jal         func_295B30
    ctx->pc = 0x2B12A0u;
    SET_GPR_U32(ctx, 31, 0x2B12A8u);
    ctx->pc = 0x295B30u;
    if (runtime->hasFunction(0x295B30u)) {
        auto targetFn = runtime->lookupFunction(0x295B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12A8u; }
        if (ctx->pc != 0x2B12A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295B30_0x295b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12A8u; }
        if (ctx->pc != 0x2B12A8u) { return; }
    }
    ctx->pc = 0x2B12A8u;
label_2b12a8:
    // 0x2b12a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B12A8u;
    {
        const bool branch_taken_0x2b12a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12A8u;
            // 0x2b12ac: 0x21e3a  dsrl        $v1, $v0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12a8) {
            ctx->pc = 0x2B12D0u;
            goto label_2b12d0;
        }
    }
    ctx->pc = 0x2B12B0u;
    // 0x2b12b0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b12b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b12b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b12b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b12bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2b12bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b12c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2b12c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2b12c4: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x2b12c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x2b12c8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2B12C8u;
    {
        const bool branch_taken_0x2b12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B12CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12C8u;
            // 0x2b12cc: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12c8) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B12D0u;
label_2b12d0:
    // 0x2b12d0: 0x6410039  bgez        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B12D0u;
    {
        const bool branch_taken_0x2b12d0 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2b12d0) {
            ctx->pc = 0x2B13B8u;
            goto label_2b13b8;
        }
    }
    ctx->pc = 0x2B12D8u;
    // 0x2b12d8: 0xc0ac60c  jal         func_2B1830
    ctx->pc = 0x2B12D8u;
    SET_GPR_U32(ctx, 31, 0x2B12E0u);
    ctx->pc = 0x2B12DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12D8u;
            // 0x2b12dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1830u;
    if (runtime->hasFunction(0x2B1830u)) {
        auto targetFn = runtime->lookupFunction(0x2B1830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12E0u; }
        if (ctx->pc != 0x2B12E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1830_0x2b1830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12E0u; }
        if (ctx->pc != 0x2B12E0u) { return; }
    }
    ctx->pc = 0x2B12E0u;
label_2b12e0:
    // 0x2b12e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b12e4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B12E4u;
    {
        const bool branch_taken_0x2b12e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b12e4) {
            ctx->pc = 0x2B1328u;
            goto label_2b1328;
        }
    }
    ctx->pc = 0x2B12ECu;
    // 0x2b12ec: 0xc0ac054  jal         func_2B0150
    ctx->pc = 0x2B12ECu;
    SET_GPR_U32(ctx, 31, 0x2B12F4u);
    ctx->pc = 0x2B12F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12ECu;
            // 0x2b12f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0150u;
    if (runtime->hasFunction(0x2B0150u)) {
        auto targetFn = runtime->lookupFunction(0x2B0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12F4u; }
        if (ctx->pc != 0x2B12F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0150_0x2b0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B12F4u; }
        if (ctx->pc != 0x2B12F4u) { return; }
    }
    ctx->pc = 0x2B12F4u;
label_2b12f4:
    // 0x2b12f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b12f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b12f8: 0xc0a13b6  jal         func_284ED8
    ctx->pc = 0x2B12F8u;
    SET_GPR_U32(ctx, 31, 0x2B1300u);
    ctx->pc = 0x2B12FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B12F8u;
            // 0x2b12fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284ED8u;
    if (runtime->hasFunction(0x284ED8u)) {
        auto targetFn = runtime->lookupFunction(0x284ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1300u; }
        if (ctx->pc != 0x2B1300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284ED8_0x284ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1300u; }
        if (ctx->pc != 0x2B1300u) { return; }
    }
    ctx->pc = 0x2B1300u;
label_2b1300:
    // 0x2b1300: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B1300u;
    {
        const bool branch_taken_0x2b1300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1300u;
            // 0x2b1304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1300) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B1308u;
    // 0x2b1308: 0xc0a13ba  jal         func_284EE8
    ctx->pc = 0x2B1308u;
    SET_GPR_U32(ctx, 31, 0x2B1310u);
    ctx->pc = 0x2B130Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1308u;
            // 0x2b130c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE8u;
    if (runtime->hasFunction(0x284EE8u)) {
        auto targetFn = runtime->lookupFunction(0x284EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1310u; }
        if (ctx->pc != 0x2B1310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE8_0x284ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1310u; }
        if (ctx->pc != 0x2B1310u) { return; }
    }
    ctx->pc = 0x2B1310u;
label_2b1310:
    // 0x2b1310: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2B1310u;
    {
        const bool branch_taken_0x2b1310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1310u;
            // 0x2b1314: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1310) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B1318u;
    // 0x2b1318: 0xc0a13be  jal         func_284EF8
    ctx->pc = 0x2B1318u;
    SET_GPR_U32(ctx, 31, 0x2B1320u);
    ctx->pc = 0x2B131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1318u;
            // 0x2b131c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EF8u;
    if (runtime->hasFunction(0x284EF8u)) {
        auto targetFn = runtime->lookupFunction(0x284EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1320u; }
        if (ctx->pc != 0x2B1320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EF8_0x284ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1320u; }
        if (ctx->pc != 0x2B1320u) { return; }
    }
    ctx->pc = 0x2B1320u;
label_2b1320:
    // 0x2b1320: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B1320u;
    {
        const bool branch_taken_0x2b1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1320) {
            ctx->pc = 0x2B1380u;
            goto label_2b1380;
        }
    }
    ctx->pc = 0x2B1328u;
label_2b1328:
    // 0x2b1328: 0x6410023  bgez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B1328u;
    {
        const bool branch_taken_0x2b1328 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2b1328) {
            ctx->pc = 0x2B13B8u;
            goto label_2b13b8;
        }
    }
    ctx->pc = 0x2B1330u;
    // 0x2b1330: 0xc0ac60c  jal         func_2B1830
    ctx->pc = 0x2B1330u;
    SET_GPR_U32(ctx, 31, 0x2B1338u);
    ctx->pc = 0x2B1334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1330u;
            // 0x2b1334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1830u;
    if (runtime->hasFunction(0x2B1830u)) {
        auto targetFn = runtime->lookupFunction(0x2B1830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1338u; }
        if (ctx->pc != 0x2B1338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1830_0x2b1830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1338u; }
        if (ctx->pc != 0x2B1338u) { return; }
    }
    ctx->pc = 0x2B1338u;
label_2b1338:
    // 0x2b1338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b133c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B133Cu;
    {
        const bool branch_taken_0x2b133c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b133c) {
            ctx->pc = 0x2B139Cu;
            goto label_2b139c;
        }
    }
    ctx->pc = 0x2B1344u;
    // 0x2b1344: 0xc0ac056  jal         func_2B0158
    ctx->pc = 0x2B1344u;
    SET_GPR_U32(ctx, 31, 0x2B134Cu);
    ctx->pc = 0x2B1348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1344u;
            // 0x2b1348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0158u;
    if (runtime->hasFunction(0x2B0158u)) {
        auto targetFn = runtime->lookupFunction(0x2B0158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B134Cu; }
        if (ctx->pc != 0x2B134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0158_0x2b0158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B134Cu; }
        if (ctx->pc != 0x2B134Cu) { return; }
    }
    ctx->pc = 0x2B134Cu;
label_2b134c:
    // 0x2b134c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b134cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1350: 0xc0a13ba  jal         func_284EE8
    ctx->pc = 0x2B1350u;
    SET_GPR_U32(ctx, 31, 0x2B1358u);
    ctx->pc = 0x2B1354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1350u;
            // 0x2b1354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE8u;
    if (runtime->hasFunction(0x284EE8u)) {
        auto targetFn = runtime->lookupFunction(0x284EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1358u; }
        if (ctx->pc != 0x2B1358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE8_0x284ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1358u; }
        if (ctx->pc != 0x2B1358u) { return; }
    }
    ctx->pc = 0x2B1358u;
label_2b1358:
    // 0x2b1358: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B1358u;
    {
        const bool branch_taken_0x2b1358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1358u;
            // 0x2b135c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1358) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B1360u;
    // 0x2b1360: 0xc0a13b6  jal         func_284ED8
    ctx->pc = 0x2B1360u;
    SET_GPR_U32(ctx, 31, 0x2B1368u);
    ctx->pc = 0x2B1364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1360u;
            // 0x2b1364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284ED8u;
    if (runtime->hasFunction(0x284ED8u)) {
        auto targetFn = runtime->lookupFunction(0x284ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1368u; }
        if (ctx->pc != 0x2B1368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284ED8_0x284ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1368u; }
        if (ctx->pc != 0x2B1368u) { return; }
    }
    ctx->pc = 0x2B1368u;
label_2b1368:
    // 0x2b1368: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B1368u;
    {
        const bool branch_taken_0x2b1368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1368u;
            // 0x2b136c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1368) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B1370u;
    // 0x2b1370: 0xc0a13be  jal         func_284EF8
    ctx->pc = 0x2B1370u;
    SET_GPR_U32(ctx, 31, 0x2B1378u);
    ctx->pc = 0x2B1374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1370u;
            // 0x2b1374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EF8u;
    if (runtime->hasFunction(0x284EF8u)) {
        auto targetFn = runtime->lookupFunction(0x284EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1378u; }
        if (ctx->pc != 0x2B1378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EF8_0x284ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1378u; }
        if (ctx->pc != 0x2B1378u) { return; }
    }
    ctx->pc = 0x2B1378u;
label_2b1378:
    // 0x2b1378: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B1378u;
    {
        const bool branch_taken_0x2b1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1378) {
            ctx->pc = 0x2B139Cu;
            goto label_2b139c;
        }
    }
    ctx->pc = 0x2B1380u;
label_2b1380:
    // 0x2b1380: 0xc0a15d4  jal         func_285750
    ctx->pc = 0x2B1380u;
    SET_GPR_U32(ctx, 31, 0x2B1388u);
    ctx->pc = 0x2B1384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1380u;
            // 0x2b1384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285750u;
    if (runtime->hasFunction(0x285750u)) {
        auto targetFn = runtime->lookupFunction(0x285750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1388u; }
        if (ctx->pc != 0x2B1388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285750_0x285750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1388u; }
        if (ctx->pc != 0x2B1388u) { return; }
    }
    ctx->pc = 0x2B1388u;
label_2b1388:
    // 0x2b1388: 0x38440002  xori        $a0, $v0, 0x2
    ctx->pc = 0x2b1388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2b138c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b138cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b1390: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b1394: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1394u;
    {
        const bool branch_taken_0x2b1394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1394u;
            // 0x2b1398: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1394) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B139Cu;
label_2b139c:
    // 0x2b139c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B139Cu;
    {
        const bool branch_taken_0x2b139c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x2b139c) {
            ctx->pc = 0x2B13B8u;
            goto label_2b13b8;
        }
    }
    ctx->pc = 0x2B13A4u;
    // 0x2b13a4: 0xc0ac60c  jal         func_2B1830
    ctx->pc = 0x2B13A4u;
    SET_GPR_U32(ctx, 31, 0x2B13ACu);
    ctx->pc = 0x2B13A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13A4u;
            // 0x2b13a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1830u;
    if (runtime->hasFunction(0x2B1830u)) {
        auto targetFn = runtime->lookupFunction(0x2B1830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B13ACu; }
        if (ctx->pc != 0x2B13ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1830_0x2b1830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B13ACu; }
        if (ctx->pc != 0x2B13ACu) { return; }
    }
    ctx->pc = 0x2B13ACu;
label_2b13ac:
    // 0x2b13ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b13b0: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B13B0u;
    {
        const bool branch_taken_0x2b13b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B13B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13B0u;
            // 0x2b13b4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13b0) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B13B8u;
label_2b13b8:
    // 0x2b13b8: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2B13B8u;
    {
        const bool branch_taken_0x2b13b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B13BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13B8u;
            // 0x2b13bc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13b8) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B13C0u;
    // 0x2b13c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b13c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b13c8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B13C8u;
    {
        const bool branch_taken_0x2b13c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b13c8) {
            ctx->pc = 0x2B13CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13C8u;
            // 0x2b13cc: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B13D8u;
            goto label_2b13d8;
        }
    }
    ctx->pc = 0x2B13D0u;
    // 0x2b13d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B13D0u;
    {
        const bool branch_taken_0x2b13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13D0u;
            // 0x2b13d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13d0) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B13D8u;
label_2b13d8:
    // 0x2b13d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b13d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b13dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B13DCu;
    {
        const bool branch_taken_0x2b13dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13DCu;
            // 0x2b13e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13dc) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B13E4u;
    // 0x2b13e4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b13e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b13e8: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2b13e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2b13ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B13ECu;
    {
        const bool branch_taken_0x2b13ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B13ECu;
            // 0x2b13f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13ec) {
            ctx->pc = 0x2B13F8u;
            goto label_2b13f8;
        }
    }
    ctx->pc = 0x2B13F4u;
    // 0x2b13f4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b13f8:
    // 0x2b13f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b13f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b13fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b13fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1400: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1408: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B140Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1408u;
            // 0x2b140c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1410u;
    ctx->pc = 0x2b1410u;
}
