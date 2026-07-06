#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C11F0
// Address: 0x1c11f0 - 0x1c1330
void sub_001C11F0_0x1c11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C11F0_0x1c11f0");
#endif

    switch (ctx->pc) {
        case 0x1c1210u: goto label_1c1210;
        case 0x1c1230u: goto label_1c1230;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1258u: goto label_1c1258;
        case 0x1c126cu: goto label_1c126c;
        case 0x1c1284u: goto label_1c1284;
        case 0x1c129cu: goto label_1c129c;
        case 0x1c12bcu: goto label_1c12bc;
        case 0x1c12e0u: goto label_1c12e0;
        case 0x1c12e8u: goto label_1c12e8;
        case 0x1c12f8u: goto label_1c12f8;
        case 0x1c1310u: goto label_1c1310;
        case 0x1c1320u: goto label_1c1320;
        default: break;
    }

    ctx->pc = 0x1c11f0u;

label_1c11f0:
    // 0x1c11f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c11f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11f8: 0x8044c7d1  lb          $a0, -0x382F($v0)
    ctx->pc = 0x1c11f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294952913)));
    // 0x1c11fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1200: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1200u;
    {
        const bool branch_taken_0x1c1200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1200u;
            // 0x1c1204: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1200) {
            ctx->pc = 0x1C1218u;
            goto label_1c1218;
        }
    }
    ctx->pc = 0x1C1208u;
    // 0x1c1208: 0xc070444  jal         func_1C1110
    ctx->pc = 0x1C1208u;
    SET_GPR_U32(ctx, 31, 0x1C1210u);
    ctx->pc = 0x1C1110u;
    if (runtime->hasFunction(0x1C1110u)) {
        auto targetFn = runtime->lookupFunction(0x1C1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1210u; }
        if (ctx->pc != 0x1C1210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1110_0x1c1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1210u; }
        if (ctx->pc != 0x1C1210u) { return; }
    }
    ctx->pc = 0x1C1210u;
label_1c1210:
    // 0x1c1210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1210u;
    {
        const bool branch_taken_0x1c1210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1210u;
            // 0x1c1214: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1210) {
            ctx->pc = 0x1C1230u;
            goto label_1c1230;
        }
    }
    ctx->pc = 0x1C1218u;
label_1c1218:
    // 0x1c1218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c121c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C121Cu;
    {
        const bool branch_taken_0x1c121c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C121Cu;
            // 0x1c1220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c121c) {
            ctx->pc = 0x1C1230u;
            goto label_1c1230;
        }
    }
    ctx->pc = 0x1C1224u;
    // 0x1c1224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1228: 0x8070454  j           func_1C1150
    ctx->pc = 0x1C1228u;
    ctx->pc = 0x1C122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1228u;
            // 0x1c122c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1150u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C1230u;
label_1c1230:
    // 0x1c1230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1234: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1234u;
            // 0x1c1238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C123Cu;
    // 0x1c123c: 0x0  nop
    ctx->pc = 0x1c123cu;
    // NOP
label_1c1240:
    // 0x1c1240: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1244: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c124c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1250: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1250u;
    SET_GPR_U32(ctx, 31, 0x1C1258u);
    ctx->pc = 0x1C1254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1250u;
            // 0x1c1254: 0x248498a8  addiu       $a0, $a0, -0x6758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1258u; }
        if (ctx->pc != 0x1C1258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1258u; }
        if (ctx->pc != 0x1C1258u) { return; }
    }
    ctx->pc = 0x1C1258u;
label_1c1258:
    // 0x1c1258: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c125c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1260: 0x8c45c80c  lw          $a1, -0x37F4($v0)
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952972)));
    // 0x1c1264: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1264u;
    SET_GPR_U32(ctx, 31, 0x1C126Cu);
    ctx->pc = 0x1C1268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1264u;
            // 0x1c1268: 0x248498b8  addiu       $a0, $a0, -0x6748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C126Cu; }
        if (ctx->pc != 0x1C126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C126Cu; }
        if (ctx->pc != 0x1C126Cu) { return; }
    }
    ctx->pc = 0x1C126Cu;
label_1c126c:
    // 0x1c126c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c126cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1270: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c1274: 0x248498d8  addiu       $a0, $a0, -0x6728
    ctx->pc = 0x1c1274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940888));
    // 0x1c1278: 0x2442c824  addiu       $v0, $v0, -0x37DC
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952996));
    // 0x1c127c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C127Cu;
    SET_GPR_U32(ctx, 31, 0x1C1284u);
    ctx->pc = 0x1C1280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C127Cu;
            // 0x1c1280: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1284u; }
        if (ctx->pc != 0x1C1284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1284u; }
        if (ctx->pc != 0x1C1284u) { return; }
    }
    ctx->pc = 0x1C1284u;
label_1c1284:
    // 0x1c1284: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c1284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c1288: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c1288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c128c: 0x248498f8  addiu       $a0, $a0, -0x6708
    ctx->pc = 0x1c128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940920));
    // 0x1c1290: 0x2450c7d0  addiu       $s0, $v0, -0x3830
    ctx->pc = 0x1c1290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x1c1294: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C1294u;
    SET_GPR_U32(ctx, 31, 0x1C129Cu);
    ctx->pc = 0x1C1298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1294u;
            // 0x1c1298: 0x82050002  lb          $a1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C129Cu; }
        if (ctx->pc != 0x1C129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C129Cu; }
        if (ctx->pc != 0x1C129Cu) { return; }
    }
    ctx->pc = 0x1C129Cu;
label_1c129c:
    // 0x1c129c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c12a0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1c12a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c12a8: 0x24849918  addiu       $a0, $a0, -0x66E8
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940952));
    // 0x1c12ac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C12ACu;
    {
        const bool branch_taken_0x1c12ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C12B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12ACu;
            // 0x1c12b0: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12ac) {
            ctx->pc = 0x1C12C0u;
            goto label_1c12c0;
        }
    }
    ctx->pc = 0x1C12B4u;
    // 0x1c12b4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C12B4u;
    SET_GPR_U32(ctx, 31, 0x1C12BCu);
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12BCu; }
        if (ctx->pc != 0x1C12BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12BCu; }
        if (ctx->pc != 0x1C12BCu) { return; }
    }
    ctx->pc = 0x1C12BCu;
label_1c12bc:
    // 0x1c12bc: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x1c12bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1c12c0:
    // 0x1c12c0: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1c12c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c12c8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c12cc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C12CCu;
    {
        const bool branch_taken_0x1c12cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c12cc) {
            ctx->pc = 0x1C12E0u;
            goto label_1c12e0;
        }
    }
    ctx->pc = 0x1C12D4u;
    // 0x1c12d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c12d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c12d8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C12D8u;
    SET_GPR_U32(ctx, 31, 0x1C12E0u);
    ctx->pc = 0x1C12DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12D8u;
            // 0x1c12dc: 0x24849938  addiu       $a0, $a0, -0x66C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12E0u; }
        if (ctx->pc != 0x1C12E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12E0u; }
        if (ctx->pc != 0x1C12E0u) { return; }
    }
    ctx->pc = 0x1C12E0u;
label_1c12e0:
    // 0x1c12e0: 0xc07047c  jal         func_1C11F0
    ctx->pc = 0x1C12E0u;
    SET_GPR_U32(ctx, 31, 0x1C12E8u);
    ctx->pc = 0x1C11F0u;
    goto label_1c11f0;
    ctx->pc = 0x1C12E8u;
label_1c12e8:
    // 0x1c12e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c12ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c12ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1C12F0u;
    SET_GPR_U32(ctx, 31, 0x1C12F8u);
    ctx->pc = 0x1C12F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12F0u;
            // 0x1c12f4: 0x24849958  addiu       $a0, $a0, -0x66A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12F8u; }
        if (ctx->pc != 0x1C12F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C12F8u; }
        if (ctx->pc != 0x1C12F8u) { return; }
    }
    ctx->pc = 0x1C12F8u;
label_1c12f8:
    // 0x1c12f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c12f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c12fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1304: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1304u;
            // 0x1c1308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C130Cu;
    // 0x1c130c: 0x0  nop
    ctx->pc = 0x1c130cu;
    // NOP
label_1c1310:
    // 0x1c1310: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1314: 0x2463c82c  addiu       $v1, $v1, -0x37D4
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953004));
    // 0x1c1318: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1318u;
            // 0x1c131c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1320u;
label_1c1320:
    // 0x1c1320: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c1320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c1324: 0x2463c828  addiu       $v1, $v1, -0x37D8
    ctx->pc = 0x1c1324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953000));
    // 0x1c1328: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1328u;
            // 0x1c132c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1330u;
    ctx->pc = 0x1c1330u;
}
