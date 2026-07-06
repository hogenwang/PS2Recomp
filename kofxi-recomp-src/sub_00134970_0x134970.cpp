#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134970
// Address: 0x134970 - 0x1370b0
void sub_00134970_0x134970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134970_0x134970");
#endif

    switch (ctx->pc) {
        case 0x1349acu: goto label_1349ac;
        case 0x1349e4u: goto label_1349e4;
        case 0x134a0cu: goto label_134a0c;
        case 0x134a48u: goto label_134a48;
        case 0x134a78u: goto label_134a78;
        case 0x134a80u: goto label_134a80;
        case 0x134ae4u: goto label_134ae4;
        case 0x134b44u: goto label_134b44;
        case 0x134bc0u: goto label_134bc0;
        case 0x134c84u: goto label_134c84;
        case 0x134ca4u: goto label_134ca4;
        case 0x134cc4u: goto label_134cc4;
        case 0x134ce4u: goto label_134ce4;
        case 0x134d04u: goto label_134d04;
        case 0x134d24u: goto label_134d24;
        case 0x134d44u: goto label_134d44;
        case 0x134dc8u: goto label_134dc8;
        case 0x134ddcu: goto label_134ddc;
        case 0x134e68u: goto label_134e68;
        case 0x134ea8u: goto label_134ea8;
        case 0x134ec0u: goto label_134ec0;
        case 0x134f18u: goto label_134f18;
        case 0x134fa4u: goto label_134fa4;
        case 0x134fb8u: goto label_134fb8;
        case 0x134ff0u: goto label_134ff0;
        case 0x13500cu: goto label_13500c;
        case 0x135018u: goto label_135018;
        case 0x135054u: goto label_135054;
        case 0x135068u: goto label_135068;
        case 0x135128u: goto label_135128;
        case 0x135160u: goto label_135160;
        case 0x13516cu: goto label_13516c;
        case 0x1351acu: goto label_1351ac;
        case 0x1351e0u: goto label_1351e0;
        case 0x135248u: goto label_135248;
        case 0x1352f8u: goto label_1352f8;
        case 0x135358u: goto label_135358;
        case 0x135404u: goto label_135404;
        case 0x135468u: goto label_135468;
        case 0x1354a0u: goto label_1354a0;
        case 0x135548u: goto label_135548;
        case 0x135570u: goto label_135570;
        case 0x1355b0u: goto label_1355b0;
        case 0x1355e0u: goto label_1355e0;
        case 0x1355e8u: goto label_1355e8;
        case 0x13564cu: goto label_13564c;
        case 0x1356acu: goto label_1356ac;
        case 0x135728u: goto label_135728;
        case 0x1357ecu: goto label_1357ec;
        case 0x13580cu: goto label_13580c;
        case 0x13582cu: goto label_13582c;
        case 0x13584cu: goto label_13584c;
        case 0x13586cu: goto label_13586c;
        case 0x13588cu: goto label_13588c;
        case 0x1358acu: goto label_1358ac;
        case 0x135930u: goto label_135930;
        case 0x135944u: goto label_135944;
        case 0x1359d0u: goto label_1359d0;
        case 0x135a10u: goto label_135a10;
        case 0x135a28u: goto label_135a28;
        case 0x135a80u: goto label_135a80;
        case 0x135b0cu: goto label_135b0c;
        case 0x135b20u: goto label_135b20;
        case 0x135b58u: goto label_135b58;
        case 0x135b74u: goto label_135b74;
        case 0x135b80u: goto label_135b80;
        case 0x135bbcu: goto label_135bbc;
        case 0x135bd0u: goto label_135bd0;
        case 0x135c90u: goto label_135c90;
        case 0x135cc8u: goto label_135cc8;
        case 0x135cd4u: goto label_135cd4;
        case 0x135d14u: goto label_135d14;
        case 0x135d48u: goto label_135d48;
        case 0x135de0u: goto label_135de0;
        case 0x135e10u: goto label_135e10;
        case 0x135e34u: goto label_135e34;
        case 0x135e40u: goto label_135e40;
        case 0x135e50u: goto label_135e50;
        case 0x135e68u: goto label_135e68;
        case 0x135e7cu: goto label_135e7c;
        case 0x135f28u: goto label_135f28;
        case 0x135f40u: goto label_135f40;
        case 0x135f58u: goto label_135f58;
        case 0x135f60u: goto label_135f60;
        case 0x135f70u: goto label_135f70;
        case 0x135f9cu: goto label_135f9c;
        case 0x135fa4u: goto label_135fa4;
        case 0x135fb4u: goto label_135fb4;
        case 0x135fc4u: goto label_135fc4;
        case 0x135ff0u: goto label_135ff0;
        case 0x136008u: goto label_136008;
        case 0x136040u: goto label_136040;
        case 0x136074u: goto label_136074;
        case 0x1360a4u: goto label_1360a4;
        case 0x136164u: goto label_136164;
        case 0x1361ecu: goto label_1361ec;
        case 0x136200u: goto label_136200;
        case 0x136208u: goto label_136208;
        case 0x136218u: goto label_136218;
        case 0x136228u: goto label_136228;
        case 0x136238u: goto label_136238;
        case 0x136258u: goto label_136258;
        case 0x136278u: goto label_136278;
        case 0x1362a8u: goto label_1362a8;
        case 0x1362d8u: goto label_1362d8;
        case 0x136304u: goto label_136304;
        case 0x136328u: goto label_136328;
        case 0x136354u: goto label_136354;
        case 0x136388u: goto label_136388;
        case 0x1363a8u: goto label_1363a8;
        case 0x1363b8u: goto label_1363b8;
        case 0x1363d4u: goto label_1363d4;
        case 0x1363e4u: goto label_1363e4;
        case 0x1363f4u: goto label_1363f4;
        case 0x136410u: goto label_136410;
        case 0x136430u: goto label_136430;
        case 0x136478u: goto label_136478;
        case 0x1364c4u: goto label_1364c4;
        case 0x136510u: goto label_136510;
        case 0x136560u: goto label_136560;
        case 0x1365b8u: goto label_1365b8;
        case 0x136608u: goto label_136608;
        case 0x136618u: goto label_136618;
        case 0x136638u: goto label_136638;
        case 0x136730u: goto label_136730;
        case 0x13678cu: goto label_13678c;
        case 0x1367f0u: goto label_1367f0;
        case 0x13684cu: goto label_13684c;
        case 0x136928u: goto label_136928;
        case 0x1369a0u: goto label_1369a0;
        case 0x1369d4u: goto label_1369d4;
        case 0x136a04u: goto label_136a04;
        case 0x136ac4u: goto label_136ac4;
        case 0x136b34u: goto label_136b34;
        case 0x136b48u: goto label_136b48;
        case 0x136b50u: goto label_136b50;
        case 0x136b60u: goto label_136b60;
        case 0x136b70u: goto label_136b70;
        case 0x136b80u: goto label_136b80;
        case 0x136ba0u: goto label_136ba0;
        case 0x136bc0u: goto label_136bc0;
        case 0x136bf0u: goto label_136bf0;
        case 0x136c20u: goto label_136c20;
        case 0x136c4cu: goto label_136c4c;
        case 0x136c70u: goto label_136c70;
        case 0x136c94u: goto label_136c94;
        case 0x136cd4u: goto label_136cd4;
        case 0x136ce4u: goto label_136ce4;
        case 0x136cf4u: goto label_136cf4;
        case 0x136d04u: goto label_136d04;
        case 0x136d24u: goto label_136d24;
        case 0x136d7cu: goto label_136d7c;
        case 0x136dccu: goto label_136dcc;
        case 0x136de0u: goto label_136de0;
        case 0x136e00u: goto label_136e00;
        case 0x136f00u: goto label_136f00;
        case 0x136f5cu: goto label_136f5c;
        case 0x136fc0u: goto label_136fc0;
        case 0x13701cu: goto label_13701c;
        default: break;
    }

    ctx->pc = 0x134970u;

    // 0x134970: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x134970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x134974: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x134974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x134978: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x134978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13497c: 0x24c6d850  addiu       $a2, $a2, -0x27B0
    ctx->pc = 0x13497cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957136));
    // 0x134980: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x134980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x134984: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x134984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x134988: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x134988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13498c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x13498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134990: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x134990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x134994: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x134994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x134998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13499c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1349a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1349a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1349a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1349a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1349a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1349a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1349ac:
    // 0x1349ac: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x1349acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1349b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1349b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1349b4: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1349b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1349b8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1349b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1349bc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x1349bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1349c0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1349c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1349c4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1349C4u;
    {
        const bool branch_taken_0x1349c4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1349C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349C4u;
            // 0x1349c8: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349c4) {
            ctx->pc = 0x1349ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1349ac;
        }
    }
    ctx->pc = 0x1349CCu;
    // 0x1349cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1349ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1349d0: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x1349d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x1349d4: 0x18600056  blez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1349D4u;
    {
        const bool branch_taken_0x1349d4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1349D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1349D4u;
            // 0x1349d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1349d4) {
            ctx->pc = 0x134B30u;
            goto label_134b30;
        }
    }
    ctx->pc = 0x1349DCu;
    // 0x1349dc: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x1349dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
    // 0x1349e0: 0x26b5db50  addiu       $s5, $s5, -0x24B0
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957904));
label_1349e4:
    // 0x1349e4: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x1349e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x1349e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1349e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1349ec: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1349ECu;
    {
        const bool branch_taken_0x1349ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1349ec) {
            ctx->pc = 0x134B18u;
            goto label_134b18;
        }
    }
    ctx->pc = 0x1349F4u;
    // 0x1349f4: 0x92a20050  lbu         $v0, 0x50($s5)
    ctx->pc = 0x1349f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1349f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1349f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1349fc: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1349FCu;
    {
        const bool branch_taken_0x1349fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1349fc) {
            ctx->pc = 0x134B18u;
            goto label_134b18;
        }
    }
    ctx->pc = 0x134A04u;
    // 0x134a04: 0xc067c48  jal         func_19F120
    ctx->pc = 0x134A04u;
    SET_GPR_U32(ctx, 31, 0x134A0Cu);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A0Cu; }
        if (ctx->pc != 0x134A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A0Cu; }
        if (ctx->pc != 0x134A0Cu) { return; }
    }
    ctx->pc = 0x134A0Cu;
label_134a0c:
    // 0x134a0c: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x134a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x134a10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x134a10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x134a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134a18: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x134a18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x134a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134a20: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x134a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x134a24: 0x2442c4a0  addiu       $v0, $v0, -0x3B60
    ctx->pc = 0x134a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
    // 0x134a28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134a28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134a2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134a30: 0x0  nop
    ctx->pc = 0x134a30u;
    // NOP
    // 0x134a34: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x134a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x134a38: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x134a38u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x134a3c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x134a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x134a40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x134a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x134a44: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_134a48:
    // 0x134a48: 0x92c3014c  lbu         $v1, 0x14C($s6)
    ctx->pc = 0x134a48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 332)));
    // 0x134a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134a50: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x134A50u;
    {
        const bool branch_taken_0x134a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A50u;
            // 0x134a54: 0x26d1014c  addiu       $s1, $s6, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a50) {
            ctx->pc = 0x134AF8u;
            goto label_134af8;
        }
    }
    ctx->pc = 0x134A58u;
    // 0x134a58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134a5c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134A5Cu;
    {
        const bool branch_taken_0x134a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x134a5c) {
            ctx->pc = 0x134A78u;
            goto label_134a78;
        }
    }
    ctx->pc = 0x134A64u;
    // 0x134a64: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x134A64u;
    {
        const bool branch_taken_0x134a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a64) {
            ctx->pc = 0x134B00u;
            goto label_134b00;
        }
    }
    ctx->pc = 0x134A6Cu;
    // 0x134a6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x134A6Cu;
    {
        const bool branch_taken_0x134a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a6c) {
            ctx->pc = 0x134B00u;
            goto label_134b00;
        }
    }
    ctx->pc = 0x134A74u;
    // 0x134a74: 0x0  nop
    ctx->pc = 0x134a74u;
    // NOP
label_134a78:
    // 0x134a78: 0xc067c48  jal         func_19F120
    ctx->pc = 0x134A78u;
    SET_GPR_U32(ctx, 31, 0x134A80u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A80u; }
        if (ctx->pc != 0x134A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134A80u; }
        if (ctx->pc != 0x134A80u) { return; }
    }
    ctx->pc = 0x134A80u;
label_134a80:
    // 0x134a80: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x134a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x134a84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134a88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x134a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134a8c: 0x0  nop
    ctx->pc = 0x134a8cu;
    // NOP
    // 0x134a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x134a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a98: 0x0  nop
    ctx->pc = 0x134a98u;
    // NOP
    // 0x134a9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134aa0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x134AA0u;
    {
        const bool branch_taken_0x134aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134aa0) {
            ctx->pc = 0x134AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134AA0u;
            // 0x134aa4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134AB8u;
            goto label_134ab8;
        }
    }
    ctx->pc = 0x134AA8u;
    // 0x134aa8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134aac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134ab0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134AB0u;
    {
        const bool branch_taken_0x134ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AB0u;
            // 0x134ab4: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ab0) {
            ctx->pc = 0x134AD0u;
            goto label_134ad0;
        }
    }
    ctx->pc = 0x134AB8u;
label_134ab8:
    // 0x134ab8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134abc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134ac0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134ac4: 0x0  nop
    ctx->pc = 0x134ac4u;
    // NOP
    // 0x134ac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134acc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x134accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_134ad0:
    // 0x134ad0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x134ad0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x134ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x134ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134adc: 0xc04c790  jal         func_131E40
    ctx->pc = 0x134ADCu;
    SET_GPR_U32(ctx, 31, 0x134AE4u);
    ctx->pc = 0x134AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134ADCu;
            // 0x134ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (runtime->hasFunction(0x131E40u)) {
        auto targetFn = runtime->lookupFunction(0x131E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AE4u; }
        if (ctx->pc != 0x134AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E40_0x131e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AE4u; }
        if (ctx->pc != 0x134AE4u) { return; }
    }
    ctx->pc = 0x134AE4u;
label_134ae4:
    // 0x134ae4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x134AE4u;
    {
        const bool branch_taken_0x134ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134ae4) {
            ctx->pc = 0x134A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134a78;
        }
    }
    ctx->pc = 0x134AECu;
    // 0x134aec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134AECu;
    {
        const bool branch_taken_0x134aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AECu;
            // 0x134af0: 0xa2300004  sb          $s0, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aec) {
            ctx->pc = 0x134B00u;
            goto label_134b00;
        }
    }
    ctx->pc = 0x134AF4u;
    // 0x134af4: 0x0  nop
    ctx->pc = 0x134af4u;
    // NOP
label_134af8:
    // 0x134af8: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x134af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x134afc: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x134afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_134b00:
    // 0x134b00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x134b04: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x134b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x134b08: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x134b0c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x134B0Cu;
    {
        const bool branch_taken_0x134b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B0Cu;
            // 0x134b10: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b0c) {
            ctx->pc = 0x134A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134a48;
        }
    }
    ctx->pc = 0x134B14u;
    // 0x134b14: 0x0  nop
    ctx->pc = 0x134b14u;
    // NOP
label_134b18:
    // 0x134b18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134b1c: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x134b1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x134b20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x134b20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x134b24: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x134b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x134b28: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x134B28u;
    {
        const bool branch_taken_0x134b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B28u;
            // 0x134b2c: 0x26b50248  addiu       $s5, $s5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b28) {
            ctx->pc = 0x1349E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1349e4;
        }
    }
    ctx->pc = 0x134B30u;
label_134b30:
    // 0x134b30: 0x186001a7  blez        $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x134B30u;
    {
        const bool branch_taken_0x134b30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x134B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B30u;
            // 0x134b34: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b30) {
            ctx->pc = 0x1351D0u;
            goto label_1351d0;
        }
    }
    ctx->pc = 0x134B38u;
    // 0x134b38: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x134b3c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x134b3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b40: 0x2694db50  addiu       $s4, $s4, -0x24B0
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957904));
label_134b44:
    // 0x134b44: 0x9284000a  lbu         $a0, 0xA($s4)
    ctx->pc = 0x134b44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x134b48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134b4c: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x134B4Cu;
    {
        const bool branch_taken_0x134b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134b4c) {
            ctx->pc = 0x134C40u;
            goto label_134c40;
        }
    }
    ctx->pc = 0x134B54u;
    // 0x134b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134b58: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134B58u;
    {
        const bool branch_taken_0x134b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b58) {
            ctx->pc = 0x134B68u;
            goto label_134b68;
        }
    }
    ctx->pc = 0x134B60u;
    // 0x134b60: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x134B60u;
    {
        const bool branch_taken_0x134b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b60) {
            ctx->pc = 0x134C40u;
            goto label_134c40;
        }
    }
    ctx->pc = 0x134B68u;
label_134b68:
    // 0x134b68: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x134b68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x134b6c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134B6Cu;
    {
        const bool branch_taken_0x134b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x134b6c) {
            ctx->pc = 0x134B88u;
            goto label_134b88;
        }
    }
    ctx->pc = 0x134B74u;
    // 0x134b74: 0x92820150  lbu         $v0, 0x150($s4)
    ctx->pc = 0x134b74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x134b78: 0xa2820170  sb          $v0, 0x170($s4)
    ctx->pc = 0x134b78u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x134b7c: 0x92820150  lbu         $v0, 0x150($s4)
    ctx->pc = 0x134b7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x134b80: 0xa2820190  sb          $v0, 0x190($s4)
    ctx->pc = 0x134b80u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 2));
    // 0x134b84: 0x0  nop
    ctx->pc = 0x134b84u;
    // NOP
label_134b88:
    // 0x134b88: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x134b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x134b8c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x134b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x134b90: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x134B90u;
    {
        const bool branch_taken_0x134b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b90) {
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x134B98u;
    // 0x134b98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x134b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134b9c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x134b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x134ba0: 0x14400183  bnez        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x134BA0u;
    {
        const bool branch_taken_0x134ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134ba0) {
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x134BA8u;
    // 0x134ba8: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x134ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x134bac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x134bb0: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x134BB0u;
    {
        const bool branch_taken_0x134bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134bb0) {
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x134BB8u;
    // 0x134bb8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x134BB8u;
    SET_GPR_U32(ctx, 31, 0x134BC0u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BC0u; }
        if (ctx->pc != 0x134BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BC0u; }
        if (ctx->pc != 0x134BC0u) { return; }
    }
    ctx->pc = 0x134BC0u;
label_134bc0:
    // 0x134bc0: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x134bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x134bc4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134BC4u;
    {
        const bool branch_taken_0x134bc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x134bc4) {
            ctx->pc = 0x134BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BC4u;
            // 0x134bc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134BD8u;
            goto label_134bd8;
        }
    }
    ctx->pc = 0x134BCCu;
    // 0x134bcc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x134bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134bd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134BD0u;
    {
        const bool branch_taken_0x134bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BD0u;
            // 0x134bd4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bd0) {
            ctx->pc = 0x134BF0u;
            goto label_134bf0;
        }
    }
    ctx->pc = 0x134BD8u;
label_134bd8:
    // 0x134bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x134bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x134bdc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134be0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x134be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134be4: 0x0  nop
    ctx->pc = 0x134be4u;
    // NOP
    // 0x134be8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x134be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134bec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x134becu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_134bf0:
    // 0x134bf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x134bf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134bf4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134bfc: 0x0  nop
    ctx->pc = 0x134bfcu;
    // NOP
    // 0x134c00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134c04: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x134C04u;
    {
        const bool branch_taken_0x134c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134c04) {
            ctx->pc = 0x134C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134C04u;
            // 0x134c08: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C1Cu;
            goto label_134c1c;
        }
    }
    ctx->pc = 0x134C0Cu;
    // 0x134c0c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134c0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134c10: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134c10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134c14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C14u;
            // 0x134c18: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134C34u;
            goto label_134c34;
        }
    }
    ctx->pc = 0x134C1Cu;
label_134c1c:
    // 0x134c1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134c20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134c24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134c28: 0x0  nop
    ctx->pc = 0x134c28u;
    // NOP
    // 0x134c2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134c30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x134c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_134c34:
    // 0x134c34: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x134C34u;
    {
        const bool branch_taken_0x134c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C34u;
            // 0x134c38: 0xa2830001  sb          $v1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c34) {
            ctx->pc = 0x1351B0u;
            goto label_1351b0;
        }
    }
    ctx->pc = 0x134C3Cu;
    // 0x134c3c: 0x0  nop
    ctx->pc = 0x134c3cu;
    // NOP
label_134c40:
    // 0x134c40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134c44: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x134c44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x134c48: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x134c48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x134c4c: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x134C4Cu;
    {
        const bool branch_taken_0x134c4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c4c) {
            ctx->pc = 0x134D50u;
            goto label_134d50;
        }
    }
    ctx->pc = 0x134C54u;
    // 0x134c54: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x134c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x134c58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x134c5c: 0x2463c5f0  addiu       $v1, $v1, -0x3A10
    ctx->pc = 0x134c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952432));
    // 0x134c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134c64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134c68: 0x400008  jr          $v0
    ctx->pc = 0x134C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134C70u: goto label_134c70;
            case 0x134C90u: goto label_134c90;
            case 0x134CB0u: goto label_134cb0;
            case 0x134CD0u: goto label_134cd0;
            case 0x134CF0u: goto label_134cf0;
            case 0x134D10u: goto label_134d10;
            case 0x134D30u: goto label_134d30;
            case 0x134D50u: goto label_134d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x134C70u;
label_134c70:
    // 0x134c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c74: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134c74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c7c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134C7Cu;
    SET_GPR_U32(ctx, 31, 0x134C84u);
    ctx->pc = 0x134C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134C7Cu;
            // 0x134c80: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C84u; }
        if (ctx->pc != 0x134C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C84u; }
        if (ctx->pc != 0x134C84u) { return; }
    }
    ctx->pc = 0x134C84u;
label_134c84:
    // 0x134c84: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x134C84u;
    {
        const bool branch_taken_0x134c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c84) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134C8Cu;
    // 0x134c8c: 0x0  nop
    ctx->pc = 0x134c8cu;
    // NOP
label_134c90:
    // 0x134c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c94: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134c94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134c98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c9c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134C9Cu;
    SET_GPR_U32(ctx, 31, 0x134CA4u);
    ctx->pc = 0x134CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134C9Cu;
            // 0x134ca0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CA4u; }
        if (ctx->pc != 0x134CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CA4u; }
        if (ctx->pc != 0x134CA4u) { return; }
    }
    ctx->pc = 0x134CA4u;
label_134ca4:
    // 0x134ca4: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x134CA4u;
    {
        const bool branch_taken_0x134ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ca4) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134CACu;
    // 0x134cac: 0x0  nop
    ctx->pc = 0x134cacu;
    // NOP
label_134cb0:
    // 0x134cb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134cb4: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134cb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cbc: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134CBCu;
    SET_GPR_U32(ctx, 31, 0x134CC4u);
    ctx->pc = 0x134CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134CBCu;
            // 0x134cc0: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CC4u; }
        if (ctx->pc != 0x134CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CC4u; }
        if (ctx->pc != 0x134CC4u) { return; }
    }
    ctx->pc = 0x134CC4u;
label_134cc4:
    // 0x134cc4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x134CC4u;
    {
        const bool branch_taken_0x134cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cc4) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134CCCu;
    // 0x134ccc: 0x0  nop
    ctx->pc = 0x134cccu;
    // NOP
label_134cd0:
    // 0x134cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134cd4: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cdc: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134CDCu;
    SET_GPR_U32(ctx, 31, 0x134CE4u);
    ctx->pc = 0x134CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134CDCu;
            // 0x134ce0: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CE4u; }
        if (ctx->pc != 0x134CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134CE4u; }
        if (ctx->pc != 0x134CE4u) { return; }
    }
    ctx->pc = 0x134CE4u;
label_134ce4:
    // 0x134ce4: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x134CE4u;
    {
        const bool branch_taken_0x134ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ce4) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134CECu;
    // 0x134cec: 0x0  nop
    ctx->pc = 0x134cecu;
    // NOP
label_134cf0:
    // 0x134cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134cf4: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134cf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134cfc: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134CFCu;
    SET_GPR_U32(ctx, 31, 0x134D04u);
    ctx->pc = 0x134D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134CFCu;
            // 0x134d00: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D04u; }
        if (ctx->pc != 0x134D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D04u; }
        if (ctx->pc != 0x134D04u) { return; }
    }
    ctx->pc = 0x134D04u;
label_134d04:
    // 0x134d04: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x134D04u;
    {
        const bool branch_taken_0x134d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d04) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134D0Cu;
    // 0x134d0c: 0x0  nop
    ctx->pc = 0x134d0cu;
    // NOP
label_134d10:
    // 0x134d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134d14: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134d14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d1c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134D1Cu;
    SET_GPR_U32(ctx, 31, 0x134D24u);
    ctx->pc = 0x134D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134D1Cu;
            // 0x134d20: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D24u; }
        if (ctx->pc != 0x134D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D24u; }
        if (ctx->pc != 0x134D24u) { return; }
    }
    ctx->pc = 0x134D24u;
label_134d24:
    // 0x134d24: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x134D24u;
    {
        const bool branch_taken_0x134d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d24) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134D2Cu;
    // 0x134d2c: 0x0  nop
    ctx->pc = 0x134d2cu;
    // NOP
label_134d30:
    // 0x134d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134d34: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134d34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x134d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134d3c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134D3Cu;
    SET_GPR_U32(ctx, 31, 0x134D44u);
    ctx->pc = 0x134D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134D3Cu;
            // 0x134d40: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D44u; }
        if (ctx->pc != 0x134D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D44u; }
        if (ctx->pc != 0x134D44u) { return; }
    }
    ctx->pc = 0x134D44u;
label_134d44:
    // 0x134d44: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x134D44u;
    {
        const bool branch_taken_0x134d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d44) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134D4Cu;
    // 0x134d4c: 0x0  nop
    ctx->pc = 0x134d4cu;
    // NOP
label_134d50:
    // 0x134d50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x134d54: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x134d54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x134d58: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x134d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x134d5c: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x134D5Cu;
    {
        const bool branch_taken_0x134d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134d5c) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134D64u;
    // 0x134d64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x134d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134d68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x134d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134d6c: 0x9043f35a  lbu         $v1, -0xCA6($v0)
    ctx->pc = 0x134d6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x134d70: 0x1466003f  bne         $v1, $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x134D70u;
    {
        const bool branch_taken_0x134d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x134d70) {
            ctx->pc = 0x134E70u;
            goto label_134e70;
        }
    }
    ctx->pc = 0x134D78u;
    // 0x134d78: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x134d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134d7c: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x134D7Cu;
    {
        const bool branch_taken_0x134d7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134d7c) {
            ctx->pc = 0x134DD0u;
            goto label_134dd0;
        }
    }
    ctx->pc = 0x134D84u;
    // 0x134d84: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x134d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x134d88: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x134d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134d8c: 0x9044befc  lbu         $a0, -0x4104($v0)
    ctx->pc = 0x134d8cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x134d90: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x134D90u;
    {
        const bool branch_taken_0x134d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d90) {
            ctx->pc = 0x134DD0u;
            goto label_134dd0;
        }
    }
    ctx->pc = 0x134D98u;
    // 0x134d98: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x134d9c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x134D9Cu;
    {
        const bool branch_taken_0x134d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134d9c) {
            ctx->pc = 0x134DB8u;
            goto label_134db8;
        }
    }
    ctx->pc = 0x134DA4u;
    // 0x134da4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x134da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134da8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x134da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x134dac: 0xa2830005  sb          $v1, 0x5($s4)
    ctx->pc = 0x134dacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x134db0: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DB0u;
            // 0x134db4: 0xa040f35a  sb          $zero, -0xCA6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134db0) {
            ctx->pc = 0x1350F0u;
            goto label_1350f0;
        }
    }
    ctx->pc = 0x134DB8u;
label_134db8:
    // 0x134db8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x134db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x134dbc: 0xa2860005  sb          $a2, 0x5($s4)
    ctx->pc = 0x134dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x134dc0: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134DC0u;
    SET_GPR_U32(ctx, 31, 0x134DC8u);
    ctx->pc = 0x134DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134DC0u;
            // 0x134dc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DC8u; }
        if (ctx->pc != 0x134DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DC8u; }
        if (ctx->pc != 0x134DC8u) { return; }
    }
    ctx->pc = 0x134DC8u;
label_134dc8:
    // 0x134dc8: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x134DC8u;
    {
        const bool branch_taken_0x134dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134dc8) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134DD0u;
label_134dd0:
    // 0x134dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134dd4: 0xc067c48  jal         func_19F120
    ctx->pc = 0x134DD4u;
    SET_GPR_U32(ctx, 31, 0x134DDCu);
    ctx->pc = 0x134DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134DD4u;
            // 0x134dd8: 0xa2820005  sb          $v0, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DDCu; }
        if (ctx->pc != 0x134DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DDCu; }
        if (ctx->pc != 0x134DDCu) { return; }
    }
    ctx->pc = 0x134DDCu;
label_134ddc:
    // 0x134ddc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x134ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x134de0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134de4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x134de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134de8: 0x0  nop
    ctx->pc = 0x134de8u;
    // NOP
    // 0x134dec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x134decu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134df4: 0x0  nop
    ctx->pc = 0x134df4u;
    // NOP
    // 0x134df8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134dfc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x134DFCu;
    {
        const bool branch_taken_0x134dfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134dfc) {
            ctx->pc = 0x134E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134DFCu;
            // 0x134e00: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134E14u;
            goto label_134e14;
        }
    }
    ctx->pc = 0x134E04u;
    // 0x134e04: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134e08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134e0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134E0Cu;
    {
        const bool branch_taken_0x134e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134E0Cu;
            // 0x134e10: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e0c) {
            ctx->pc = 0x134E2Cu;
            goto label_134e2c;
        }
    }
    ctx->pc = 0x134E14u;
label_134e14:
    // 0x134e14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134e18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134e18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134e1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134e1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134e20: 0x0  nop
    ctx->pc = 0x134e20u;
    // NOP
    // 0x134e24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134e28: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x134e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_134e2c:
    // 0x134e2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134e30: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x134e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x134e34: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x134e34u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x134e38: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x134e3c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x134e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x134e40: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x134e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x134e44: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x134e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134e48: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x134e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x134e4c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x134e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134e54: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x134e58: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x134e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x134e5c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x134e5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134e60: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134E60u;
    SET_GPR_U32(ctx, 31, 0x134E68u);
    ctx->pc = 0x134E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134E60u;
            // 0x134e64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E68u; }
        if (ctx->pc != 0x134E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134E68u; }
        if (ctx->pc != 0x134E68u) { return; }
    }
    ctx->pc = 0x134E68u;
label_134e68:
    // 0x134e68: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x134E68u;
    {
        const bool branch_taken_0x134e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e68) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134E70u;
label_134e70:
    // 0x134e70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x134e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134e74: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x134E74u;
    {
        const bool branch_taken_0x134e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134e74) {
            ctx->pc = 0x134EC8u;
            goto label_134ec8;
        }
    }
    ctx->pc = 0x134E7Cu;
    // 0x134e7c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x134e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134e80: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x134E80u;
    {
        const bool branch_taken_0x134e80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134e80) {
            ctx->pc = 0x134EB0u;
            goto label_134eb0;
        }
    }
    ctx->pc = 0x134E88u;
    // 0x134e88: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x134e8c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134e90: 0x9045befc  lbu         $a1, -0x4104($v0)
    ctx->pc = 0x134e90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x134e94: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134E94u;
    {
        const bool branch_taken_0x134e94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x134e94) {
            ctx->pc = 0x134EB0u;
            goto label_134eb0;
        }
    }
    ctx->pc = 0x134E9Cu;
    // 0x134e9c: 0xa2860005  sb          $a2, 0x5($s4)
    ctx->pc = 0x134e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x134ea0: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134EA0u;
    SET_GPR_U32(ctx, 31, 0x134EA8u);
    ctx->pc = 0x134EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134EA0u;
            // 0x134ea4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EA8u; }
        if (ctx->pc != 0x134EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EA8u; }
        if (ctx->pc != 0x134EA8u) { return; }
    }
    ctx->pc = 0x134EA8u;
label_134ea8:
    // 0x134ea8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x134EA8u;
    {
        const bool branch_taken_0x134ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ea8) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134EB0u;
label_134eb0:
    // 0x134eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134eb4: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x134eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x134eb8: 0xc04ed08  jal         func_13B420
    ctx->pc = 0x134EB8u;
    SET_GPR_U32(ctx, 31, 0x134EC0u);
    ctx->pc = 0x134EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134EB8u;
            // 0x134ebc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B420u;
    if (runtime->hasFunction(0x13B420u)) {
        auto targetFn = runtime->lookupFunction(0x13B420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EC0u; }
        if (ctx->pc != 0x134EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B420_0x13b420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134EC0u; }
        if (ctx->pc != 0x134EC0u) { return; }
    }
    ctx->pc = 0x134EC0u;
label_134ec0:
    // 0x134ec0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x134EC0u;
    {
        const bool branch_taken_0x134ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ec0) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134EC8u;
label_134ec8:
    // 0x134ec8: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x134EC8u;
    {
        const bool branch_taken_0x134ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134EC8u;
            // 0x134ecc: 0xa2820005  sb          $v0, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ec8) {
            ctx->pc = 0x1350E8u;
            goto label_1350e8;
        }
    }
    ctx->pc = 0x134ED0u;
    // 0x134ed0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x134ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x134ed4: 0x14820062  bne         $a0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x134ED4u;
    {
        const bool branch_taken_0x134ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134ed4) {
            ctx->pc = 0x135060u;
            goto label_135060;
        }
    }
    ctx->pc = 0x134EDCu;
    // 0x134edc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x134edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x134ee0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x134ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134ee4: 0x9044befc  lbu         $a0, -0x4104($v0)
    ctx->pc = 0x134ee4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x134ee8: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x134EE8u;
    {
        const bool branch_taken_0x134ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134ee8) {
            ctx->pc = 0x135060u;
            goto label_135060;
        }
    }
    ctx->pc = 0x134EF0u;
    // 0x134ef0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x134ef4: 0x9042bf00  lbu         $v0, -0x4100($v0)
    ctx->pc = 0x134ef4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950656)));
    // 0x134ef8: 0x14460031  bne         $v0, $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x134EF8u;
    {
        const bool branch_taken_0x134ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x134ef8) {
            ctx->pc = 0x134FC0u;
            goto label_134fc0;
        }
    }
    ctx->pc = 0x134F00u;
    // 0x134f00: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x134f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x134f04: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x134f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x134f08: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x134F08u;
    {
        const bool branch_taken_0x134f08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x134F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F08u;
            // 0x134f0c: 0xa2860005  sb          $a2, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f08) {
            ctx->pc = 0x134FB0u;
            goto label_134fb0;
        }
    }
    ctx->pc = 0x134F10u;
    // 0x134f10: 0xc067c48  jal         func_19F120
    ctx->pc = 0x134F10u;
    SET_GPR_U32(ctx, 31, 0x134F18u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F18u; }
        if (ctx->pc != 0x134F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F18u; }
        if (ctx->pc != 0x134F18u) { return; }
    }
    ctx->pc = 0x134F18u;
label_134f18:
    // 0x134f18: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x134f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x134f1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x134f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x134f20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x134f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134f24: 0x0  nop
    ctx->pc = 0x134f24u;
    // NOP
    // 0x134f28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x134f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x134f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134f30: 0x0  nop
    ctx->pc = 0x134f30u;
    // NOP
    // 0x134f34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x134f34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134f38: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134f38) {
            ctx->pc = 0x134F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134F38u;
            // 0x134f3c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x134F50u;
            goto label_134f50;
        }
    }
    ctx->pc = 0x134F40u;
    // 0x134f40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134f44: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134f48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x134F48u;
    {
        const bool branch_taken_0x134f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F48u;
            // 0x134f4c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f48) {
            ctx->pc = 0x134F68u;
            goto label_134f68;
        }
    }
    ctx->pc = 0x134F50u;
label_134f50:
    // 0x134f50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x134f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x134f54: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134f58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134f5c: 0x0  nop
    ctx->pc = 0x134f5cu;
    // NOP
    // 0x134f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x134f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134f64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x134f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_134f68:
    // 0x134f68: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x134f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x134f6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x134f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x134f70: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x134f70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x134f74: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x134f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x134f78: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x134f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x134f7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x134f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x134f80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x134f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134f84: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x134f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x134f88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x134f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134f90: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x134f94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x134f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x134f98: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x134f98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134f9c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134F9Cu;
    SET_GPR_U32(ctx, 31, 0x134FA4u);
    ctx->pc = 0x134FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134F9Cu;
            // 0x134fa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FA4u; }
        if (ctx->pc != 0x134FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FA4u; }
        if (ctx->pc != 0x134FA4u) { return; }
    }
    ctx->pc = 0x134FA4u;
label_134fa4:
    // 0x134fa4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x134FA4u;
    {
        const bool branch_taken_0x134fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134fa4) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134FACu;
    // 0x134fac: 0x0  nop
    ctx->pc = 0x134facu;
    // NOP
label_134fb0:
    // 0x134fb0: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x134FB0u;
    SET_GPR_U32(ctx, 31, 0x134FB8u);
    ctx->pc = 0x134FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134FB0u;
            // 0x134fb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FB8u; }
        if (ctx->pc != 0x134FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FB8u; }
        if (ctx->pc != 0x134FB8u) { return; }
    }
    ctx->pc = 0x134FB8u;
label_134fb8:
    // 0x134fb8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x134FB8u;
    {
        const bool branch_taken_0x134fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134fb8) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x134FC0u;
label_134fc0:
    // 0x134fc0: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x134fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x134fc4: 0xa2830151  sb          $v1, 0x151($s4)
    ctx->pc = 0x134fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fc8: 0x3c1601e0  lui         $s6, 0x1E0
    ctx->pc = 0x134fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)480 << 16));
    // 0x134fcc: 0xa2830150  sb          $v1, 0x150($s4)
    ctx->pc = 0x134fccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x134fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fd4: 0xa2830171  sb          $v1, 0x171($s4)
    ctx->pc = 0x134fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 369), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fd8: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x134fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fdc: 0xa2830170  sb          $v1, 0x170($s4)
    ctx->pc = 0x134fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fe0: 0x26d6bed0  addiu       $s6, $s6, -0x4130
    ctx->pc = 0x134fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950608));
    // 0x134fe4: 0xa2830191  sb          $v1, 0x191($s4)
    ctx->pc = 0x134fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fe8: 0xa2830190  sb          $v1, 0x190($s4)
    ctx->pc = 0x134fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 3));
    // 0x134fec: 0x0  nop
    ctx->pc = 0x134fecu;
    // NOP
label_134ff0:
    // 0x134ff0: 0xa2a0014c  sb          $zero, 0x14C($s5)
    ctx->pc = 0x134ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x134ff4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x134ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x134ff8: 0x92d1002d  lbu         $s1, 0x2D($s6)
    ctx->pc = 0x134ff8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 45)));
    // 0x134ffc: 0xa2a20151  sb          $v0, 0x151($s5)
    ctx->pc = 0x134ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x135000: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x135000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x135004: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x135004u;
    SET_GPR_U32(ctx, 31, 0x13500Cu);
    ctx->pc = 0x135008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135004u;
            // 0x135008: 0x26b0014c  addiu       $s0, $s5, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (runtime->hasFunction(0x13B150u)) {
        auto targetFn = runtime->lookupFunction(0x13B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13500Cu; }
        if (ctx->pc != 0x13500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B150_0x13b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13500Cu; }
        if (ctx->pc != 0x13500Cu) { return; }
    }
    ctx->pc = 0x13500Cu;
label_13500c:
    // 0x13500c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13500cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135010: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x135010u;
    SET_GPR_U32(ctx, 31, 0x135018u);
    ctx->pc = 0x135014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135010u;
            // 0x135014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (runtime->hasFunction(0x13B010u)) {
        auto targetFn = runtime->lookupFunction(0x13B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135018u; }
        if (ctx->pc != 0x135018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B010_0x13b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135018u; }
        if (ctx->pc != 0x135018u) { return; }
    }
    ctx->pc = 0x135018u;
label_135018:
    // 0x135018: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x135018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x13501c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13501cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x135020: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x135020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135024: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x135024u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x135028: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x135028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x13502c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x13502cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x135030: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x135030u;
    {
        const bool branch_taken_0x135030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135030u;
            // 0x135034: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135030) {
            ctx->pc = 0x134FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134ff0;
        }
    }
    ctx->pc = 0x135038u;
    // 0x135038: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13503c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135040: 0xa282000a  sb          $v0, 0xA($s4)
    ctx->pc = 0x135040u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x135044: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x135044u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x135048: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x135048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x13504c: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x13504Cu;
    SET_GPR_U32(ctx, 31, 0x135054u);
    ctx->pc = 0x135050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13504Cu;
            // 0x135050: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135054u; }
        if (ctx->pc != 0x135054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135054u; }
        if (ctx->pc != 0x135054u) { return; }
    }
    ctx->pc = 0x135054u;
label_135054:
    // 0x135054: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x135054u;
    {
        const bool branch_taken_0x135054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135054) {
            ctx->pc = 0x135190u;
            goto label_135190;
        }
    }
    ctx->pc = 0x13505Cu;
    // 0x13505c: 0x0  nop
    ctx->pc = 0x13505cu;
    // NOP
label_135060:
    // 0x135060: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135060u;
    SET_GPR_U32(ctx, 31, 0x135068u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135068u; }
        if (ctx->pc != 0x135068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135068u; }
        if (ctx->pc != 0x135068u) { return; }
    }
    ctx->pc = 0x135068u;
label_135068:
    // 0x135068: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x135068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x13506c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13506Cu;
    {
        const bool branch_taken_0x13506c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13506c) {
            ctx->pc = 0x135070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13506Cu;
            // 0x135070: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135080u;
            goto label_135080;
        }
    }
    ctx->pc = 0x135074u;
    // 0x135074: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135078u;
    {
        const bool branch_taken_0x135078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135078u;
            // 0x13507c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135078) {
            ctx->pc = 0x135098u;
            goto label_135098;
        }
    }
    ctx->pc = 0x135080u;
label_135080:
    // 0x135080: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135084: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135088: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13508c: 0x0  nop
    ctx->pc = 0x13508cu;
    // NOP
    // 0x135090: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x135090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x135094: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x135094u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_135098:
    // 0x135098: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13509c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1350a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1350a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1350a4: 0x0  nop
    ctx->pc = 0x1350a4u;
    // NOP
    // 0x1350a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1350a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1350ac: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1350ACu;
    {
        const bool branch_taken_0x1350ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1350ac) {
            ctx->pc = 0x1350B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1350ACu;
            // 0x1350b0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1350C4u;
            goto label_1350c4;
        }
    }
    ctx->pc = 0x1350B4u;
    // 0x1350b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1350b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1350b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1350b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1350bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1350BCu;
    {
        const bool branch_taken_0x1350bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1350BCu;
            // 0x1350c0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350bc) {
            ctx->pc = 0x1350DCu;
            goto label_1350dc;
        }
    }
    ctx->pc = 0x1350C4u;
label_1350c4:
    // 0x1350c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1350c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1350c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1350c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1350cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1350ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1350d0: 0x0  nop
    ctx->pc = 0x1350d0u;
    // NOP
    // 0x1350d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1350d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1350d8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1350d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1350dc:
    // 0x1350dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1350DCu;
    {
        const bool branch_taken_0x1350dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1350DCu;
            // 0x1350e0: 0xa2830001  sb          $v1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350dc) {
            ctx->pc = 0x1350F0u;
            goto label_1350f0;
        }
    }
    ctx->pc = 0x1350E4u;
    // 0x1350e4: 0x0  nop
    ctx->pc = 0x1350e4u;
    // NOP
label_1350e8:
    // 0x1350e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1350e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1350ec: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x1350ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_1350f0:
    // 0x1350f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1350f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1350f4: 0xa2830151  sb          $v1, 0x151($s4)
    ctx->pc = 0x1350f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x1350f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1350f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1350fc: 0xa2830150  sb          $v1, 0x150($s4)
    ctx->pc = 0x1350fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x135100: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x135100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x135104: 0xa2830171  sb          $v1, 0x171($s4)
    ctx->pc = 0x135104u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 369), (uint8_t)GPR_U32(ctx, 3));
    // 0x135108: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13510c: 0xa2830170  sb          $v1, 0x170($s4)
    ctx->pc = 0x13510cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x135110: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x135110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135114: 0xa2830191  sb          $v1, 0x191($s4)
    ctx->pc = 0x135114u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x135118: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x135118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13511c: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x13511cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x135120: 0xa2830190  sb          $v1, 0x190($s4)
    ctx->pc = 0x135120u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 3));
    // 0x135124: 0x0  nop
    ctx->pc = 0x135124u;
    // NOP
label_135128:
    // 0x135128: 0xa2a0014c  sb          $zero, 0x14C($s5)
    ctx->pc = 0x135128u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x13512c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135130: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x135130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x135134: 0xa2a20151  sb          $v0, 0x151($s5)
    ctx->pc = 0x135134u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x135138: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13513c: 0x8043d9f8  lb          $v1, -0x2608($v0)
    ctx->pc = 0x13513cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x135140: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135148: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x135148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13514c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x13514cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x135150: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x135154: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x135154u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135158: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x135158u;
    SET_GPR_U32(ctx, 31, 0x135160u);
    ctx->pc = 0x13515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135158u;
            // 0x13515c: 0x26b0014c  addiu       $s0, $s5, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (runtime->hasFunction(0x13B150u)) {
        auto targetFn = runtime->lookupFunction(0x13B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135160u; }
        if (ctx->pc != 0x135160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B150_0x13b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135160u; }
        if (ctx->pc != 0x135160u) { return; }
    }
    ctx->pc = 0x135160u;
label_135160:
    // 0x135160: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x135160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135164: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x135164u;
    SET_GPR_U32(ctx, 31, 0x13516Cu);
    ctx->pc = 0x135168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135164u;
            // 0x135168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (runtime->hasFunction(0x13B010u)) {
        auto targetFn = runtime->lookupFunction(0x13B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13516Cu; }
        if (ctx->pc != 0x13516Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B010_0x13b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13516Cu; }
        if (ctx->pc != 0x13516Cu) { return; }
    }
    ctx->pc = 0x13516Cu;
label_13516c:
    // 0x13516c: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x13516cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x135170: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x135170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x135174: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x135174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135178: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x135178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x13517c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x13517cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x135180: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x135180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x135184: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x135184u;
    {
        const bool branch_taken_0x135184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135184u;
            // 0x135188: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135184) {
            ctx->pc = 0x135128u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135128;
        }
    }
    ctx->pc = 0x13518Cu;
    // 0x13518c: 0x0  nop
    ctx->pc = 0x13518cu;
    // NOP
label_135190:
    // 0x135190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135194: 0xa282000a  sb          $v0, 0xA($s4)
    ctx->pc = 0x135194u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x135198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13519c: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x13519cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x1351a0: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x1351a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x1351a4: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x1351A4u;
    SET_GPR_U32(ctx, 31, 0x1351ACu);
    ctx->pc = 0x1351A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1351A4u;
            // 0x1351a8: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1351ACu; }
        if (ctx->pc != 0x1351ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1351ACu; }
        if (ctx->pc != 0x1351ACu) { return; }
    }
    ctx->pc = 0x1351ACu;
label_1351ac:
    // 0x1351ac: 0x0  nop
    ctx->pc = 0x1351acu;
    // NOP
label_1351b0:
    // 0x1351b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1351b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1351b4: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x1351b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x1351b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1351b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1351bc: 0x26940248  addiu       $s4, $s4, 0x248
    ctx->pc = 0x1351bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 584));
    // 0x1351c0: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x1351c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1351c4: 0x1440fe5f  bnez        $v0, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x1351C4u;
    {
        const bool branch_taken_0x1351c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1351C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1351C4u;
            // 0x1351c8: 0x26f70006  addiu       $s7, $s7, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351c4) {
            ctx->pc = 0x134B44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_134b44;
        }
    }
    ctx->pc = 0x1351CCu;
    // 0x1351cc: 0x0  nop
    ctx->pc = 0x1351ccu;
    // NOP
label_1351d0:
    // 0x1351d0: 0x18600045  blez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1351D0u;
    {
        const bool branch_taken_0x1351d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1351D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1351D0u;
            // 0x1351d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351d0) {
            ctx->pc = 0x1352E8u;
            goto label_1352e8;
        }
    }
    ctx->pc = 0x1351D8u;
    // 0x1351d8: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x1351d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x1351dc: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x1351dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_1351e0:
    // 0x1351e0: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x1351e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1351e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1351e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1351e8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1351E8u;
    {
        const bool branch_taken_0x1351e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1351e8) {
            ctx->pc = 0x135230u;
            goto label_135230;
        }
    }
    ctx->pc = 0x1351F0u;
    // 0x1351f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1351f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1351f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1351F4u;
    {
        const bool branch_taken_0x1351f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1351f4) {
            ctx->pc = 0x135208u;
            goto label_135208;
        }
    }
    ctx->pc = 0x1351FCu;
    // 0x1351fc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1351FCu;
    {
        const bool branch_taken_0x1351fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1351fc) {
            ctx->pc = 0x1352D0u;
            goto label_1352d0;
        }
    }
    ctx->pc = 0x135204u;
    // 0x135204: 0x0  nop
    ctx->pc = 0x135204u;
    // NOP
label_135208:
    // 0x135208: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x135208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13520c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x13520cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x135210: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135210u;
    {
        const bool branch_taken_0x135210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135210) {
            ctx->pc = 0x135220u;
            goto label_135220;
        }
    }
    ctx->pc = 0x135218u;
    // 0x135218: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x135218u;
    {
        const bool branch_taken_0x135218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135218u;
            // 0x13521c: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135218) {
            ctx->pc = 0x1352D0u;
            goto label_1352d0;
        }
    }
    ctx->pc = 0x135220u;
label_135220:
    // 0x135220: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x135220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135224: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x135224u;
    {
        const bool branch_taken_0x135224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135224u;
            // 0x135228: 0xa2220001  sb          $v0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135224) {
            ctx->pc = 0x1352D0u;
            goto label_1352d0;
        }
    }
    ctx->pc = 0x13522Cu;
    // 0x13522c: 0x0  nop
    ctx->pc = 0x13522cu;
    // NOP
label_135230:
    // 0x135230: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x135230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x135234: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x135234u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x135238: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x135238u;
    {
        const bool branch_taken_0x135238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135238) {
            ctx->pc = 0x1352C8u;
            goto label_1352c8;
        }
    }
    ctx->pc = 0x135240u;
    // 0x135240: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135240u;
    SET_GPR_U32(ctx, 31, 0x135248u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135248u; }
        if (ctx->pc != 0x135248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135248u; }
        if (ctx->pc != 0x135248u) { return; }
    }
    ctx->pc = 0x135248u;
label_135248:
    // 0x135248: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x135248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x13524c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13524Cu;
    {
        const bool branch_taken_0x13524c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13524c) {
            ctx->pc = 0x135250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13524Cu;
            // 0x135250: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135260u;
            goto label_135260;
        }
    }
    ctx->pc = 0x135254u;
    // 0x135254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135258u;
    {
        const bool branch_taken_0x135258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135258u;
            // 0x13525c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135258) {
            ctx->pc = 0x135278u;
            goto label_135278;
        }
    }
    ctx->pc = 0x135260u;
label_135260:
    // 0x135260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135268: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13526c: 0x0  nop
    ctx->pc = 0x13526cu;
    // NOP
    // 0x135270: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x135270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x135274: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x135274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_135278:
    // 0x135278: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13527c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135284: 0x0  nop
    ctx->pc = 0x135284u;
    // NOP
    // 0x135288: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13528c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x13528Cu;
    {
        const bool branch_taken_0x13528c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13528c) {
            ctx->pc = 0x135290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13528Cu;
            // 0x135290: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1352A4u;
            goto label_1352a4;
        }
    }
    ctx->pc = 0x135294u;
    // 0x135294: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135294u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135298: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135298u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13529c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13529Cu;
    {
        const bool branch_taken_0x13529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13529Cu;
            // 0x1352a0: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13529c) {
            ctx->pc = 0x1352BCu;
            goto label_1352bc;
        }
    }
    ctx->pc = 0x1352A4u;
label_1352a4:
    // 0x1352a4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1352a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1352a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1352ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1352acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1352b0: 0x0  nop
    ctx->pc = 0x1352b0u;
    // NOP
    // 0x1352b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1352b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1352b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1352b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1352bc:
    // 0x1352bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1352BCu;
    {
        const bool branch_taken_0x1352bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352BCu;
            // 0x1352c0: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352bc) {
            ctx->pc = 0x1352D0u;
            goto label_1352d0;
        }
    }
    ctx->pc = 0x1352C4u;
    // 0x1352c4: 0x0  nop
    ctx->pc = 0x1352c4u;
    // NOP
label_1352c8:
    // 0x1352c8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1352c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1352cc: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1352ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1352d0:
    // 0x1352d0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1352d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1352d4: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x1352d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x1352d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1352d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1352dc: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1352dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1352e0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1352E0u;
    {
        const bool branch_taken_0x1352e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1352E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352E0u;
            // 0x1352e4: 0x26310248  addiu       $s1, $s1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352e0) {
            ctx->pc = 0x1351E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1351e0;
        }
    }
    ctx->pc = 0x1352E8u;
label_1352e8:
    // 0x1352e8: 0x18600041  blez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1352E8u;
    {
        const bool branch_taken_0x1352e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1352ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352E8u;
            // 0x1352ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352e8) {
            ctx->pc = 0x1353F0u;
            goto label_1353f0;
        }
    }
    ctx->pc = 0x1352F0u;
    // 0x1352f0: 0x3c11009c  lui         $s1, 0x9C
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)156 << 16));
    // 0x1352f4: 0x2631db50  addiu       $s1, $s1, -0x24B0
    ctx->pc = 0x1352f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957904));
label_1352f8:
    // 0x1352f8: 0x9224000a  lbu         $a0, 0xA($s1)
    ctx->pc = 0x1352f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1352fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1352fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135300: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x135300u;
    {
        const bool branch_taken_0x135300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135300) {
            ctx->pc = 0x135340u;
            goto label_135340;
        }
    }
    ctx->pc = 0x135308u;
    // 0x135308: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13530c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13530Cu;
    {
        const bool branch_taken_0x13530c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13530c) {
            ctx->pc = 0x135320u;
            goto label_135320;
        }
    }
    ctx->pc = 0x135314u;
    // 0x135314: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x135314u;
    {
        const bool branch_taken_0x135314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135314) {
            ctx->pc = 0x1353D8u;
            goto label_1353d8;
        }
    }
    ctx->pc = 0x13531Cu;
    // 0x13531c: 0x0  nop
    ctx->pc = 0x13531cu;
    // NOP
label_135320:
    // 0x135320: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x135320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x135324: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x135324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x135328: 0xa223002a  sb          $v1, 0x2A($s1)
    ctx->pc = 0x135328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x13532c: 0xa220015c  sb          $zero, 0x15C($s1)
    ctx->pc = 0x13532cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 348), (uint8_t)GPR_U32(ctx, 0));
    // 0x135330: 0xa222017c  sb          $v0, 0x17C($s1)
    ctx->pc = 0x135330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 380), (uint8_t)GPR_U32(ctx, 2));
    // 0x135334: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x135334u;
    {
        const bool branch_taken_0x135334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135334u;
            // 0x135338: 0xa223019c  sb          $v1, 0x19C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 412), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135334) {
            ctx->pc = 0x1353D8u;
            goto label_1353d8;
        }
    }
    ctx->pc = 0x13533Cu;
    // 0x13533c: 0x0  nop
    ctx->pc = 0x13533cu;
    // NOP
label_135340:
    // 0x135340: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x135340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x135344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135348: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x135348u;
    {
        const bool branch_taken_0x135348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x135348) {
            ctx->pc = 0x13534Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135348u;
            // 0x13534c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135384u;
            goto label_135384;
        }
    }
    ctx->pc = 0x135350u;
    // 0x135350: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135350u;
    SET_GPR_U32(ctx, 31, 0x135358u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135358u; }
        if (ctx->pc != 0x135358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135358u; }
        if (ctx->pc != 0x135358u) { return; }
    }
    ctx->pc = 0x135358u;
label_135358:
    // 0x135358: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x135358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x13535c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13535cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x135360: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135364: 0x0  nop
    ctx->pc = 0x135364u;
    // NOP
    // 0x135368: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135368u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13536c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13536cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135370: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135374: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135378: 0x0  nop
    ctx->pc = 0x135378u;
    // NOP
    // 0x13537c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x13537cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x135380: 0x1810  mfhi        $v1
    ctx->pc = 0x135380u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_135384:
    // 0x135384: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135388: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13538c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13538cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135390: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x135390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x135394: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x135394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135398: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x135398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x13539c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x13539cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1353a0: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x1353a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1353a4: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x1353a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x1353a8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1353a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1353ac: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x1353acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1353b0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1353b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1353b4: 0xa0a0015c  sb          $zero, 0x15C($a1)
    ctx->pc = 0x1353b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 348), (uint8_t)GPR_U32(ctx, 0));
    // 0x1353b8: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1353bc: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1353bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1353c0: 0xa2270029  sb          $a3, 0x29($s1)
    ctx->pc = 0x1353c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x1353c4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x1353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1353c8: 0xa0a6015c  sb          $a2, 0x15C($a1)
    ctx->pc = 0x1353c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 348), (uint8_t)GPR_U32(ctx, 6));
    // 0x1353cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1353d0: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x1353d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
    // 0x1353d4: 0xa043015c  sb          $v1, 0x15C($v0)
    ctx->pc = 0x1353d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 348), (uint8_t)GPR_U32(ctx, 3));
label_1353d8:
    // 0x1353d8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1353d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1353dc: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x1353dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x1353e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1353e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1353e4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1353e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1353e8: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x1353E8u;
    {
        const bool branch_taken_0x1353e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1353ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353E8u;
            // 0x1353ec: 0x26310248  addiu       $s1, $s1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353e8) {
            ctx->pc = 0x1352F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1352f8;
        }
    }
    ctx->pc = 0x1353F0u;
label_1353f0:
    // 0x1353f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1353f4: 0x1880001a  blez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1353F4u;
    {
        const bool branch_taken_0x1353f4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1353F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353F4u;
            // 0x1353f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353f4) {
            ctx->pc = 0x135460u;
            goto label_135460;
        }
    }
    ctx->pc = 0x1353FCu;
    // 0x1353fc: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1353fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x135400: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x135400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
label_135404:
    // 0x135404: 0x90c30150  lbu         $v1, 0x150($a2)
    ctx->pc = 0x135404u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 336)));
    // 0x135408: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13540c: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x13540cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x135410: 0xa0c3014d  sb          $v1, 0x14D($a2)
    ctx->pc = 0x135410u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 333), (uint8_t)GPR_U32(ctx, 3));
    // 0x135414: 0x90c30151  lbu         $v1, 0x151($a2)
    ctx->pc = 0x135414u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 337)));
    // 0x135418: 0xa0c3014e  sb          $v1, 0x14E($a2)
    ctx->pc = 0x135418u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 334), (uint8_t)GPR_U32(ctx, 3));
    // 0x13541c: 0x90c30152  lbu         $v1, 0x152($a2)
    ctx->pc = 0x13541cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 338)));
    // 0x135420: 0xa0c3014f  sb          $v1, 0x14F($a2)
    ctx->pc = 0x135420u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 335), (uint8_t)GPR_U32(ctx, 3));
    // 0x135424: 0x90c30170  lbu         $v1, 0x170($a2)
    ctx->pc = 0x135424u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 368)));
    // 0x135428: 0xa0c3016d  sb          $v1, 0x16D($a2)
    ctx->pc = 0x135428u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 365), (uint8_t)GPR_U32(ctx, 3));
    // 0x13542c: 0x90c30171  lbu         $v1, 0x171($a2)
    ctx->pc = 0x13542cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 369)));
    // 0x135430: 0xa0c3016e  sb          $v1, 0x16E($a2)
    ctx->pc = 0x135430u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 366), (uint8_t)GPR_U32(ctx, 3));
    // 0x135434: 0x90c30172  lbu         $v1, 0x172($a2)
    ctx->pc = 0x135434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 370)));
    // 0x135438: 0xa0c3016f  sb          $v1, 0x16F($a2)
    ctx->pc = 0x135438u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 367), (uint8_t)GPR_U32(ctx, 3));
    // 0x13543c: 0x90c30190  lbu         $v1, 0x190($a2)
    ctx->pc = 0x13543cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 400)));
    // 0x135440: 0xa0c3018d  sb          $v1, 0x18D($a2)
    ctx->pc = 0x135440u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 397), (uint8_t)GPR_U32(ctx, 3));
    // 0x135444: 0x90c30191  lbu         $v1, 0x191($a2)
    ctx->pc = 0x135444u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 401)));
    // 0x135448: 0xa0c3018e  sb          $v1, 0x18E($a2)
    ctx->pc = 0x135448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 398), (uint8_t)GPR_U32(ctx, 3));
    // 0x13544c: 0x90c30192  lbu         $v1, 0x192($a2)
    ctx->pc = 0x13544cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 402)));
    // 0x135450: 0xa0c3018f  sb          $v1, 0x18F($a2)
    ctx->pc = 0x135450u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 399), (uint8_t)GPR_U32(ctx, 3));
    // 0x135454: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x135454u;
    {
        const bool branch_taken_0x135454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135454u;
            // 0x135458: 0x24c60248  addiu       $a2, $a2, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135454) {
            ctx->pc = 0x135404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135404;
        }
    }
    ctx->pc = 0x13545Cu;
    // 0x13545c: 0x0  nop
    ctx->pc = 0x13545cu;
    // NOP
label_135460:
    // 0x135460: 0xc052bd4  jal         func_14AF50
    ctx->pc = 0x135460u;
    SET_GPR_U32(ctx, 31, 0x135468u);
    ctx->pc = 0x14AF50u;
    if (runtime->hasFunction(0x14AF50u)) {
        auto targetFn = runtime->lookupFunction(0x14AF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135468u; }
        if (ctx->pc != 0x135468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AF50_0x14af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135468u; }
        if (ctx->pc != 0x135468u) { return; }
    }
    ctx->pc = 0x135468u;
label_135468:
    // 0x135468: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x135468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13546c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13546cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135470: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x135470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135474: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x135474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135478: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x135478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13547c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135480: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x135480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135484: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x135484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x135488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13548c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13548cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135490: 0x3e00008  jr          $ra
    ctx->pc = 0x135490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135490u;
            // 0x135494: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135498u;
    // 0x135498: 0x0  nop
    ctx->pc = 0x135498u;
    // NOP
    // 0x13549c: 0x0  nop
    ctx->pc = 0x13549cu;
    // NOP
label_1354a0:
    // 0x1354a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1354a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1354a4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1354a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1354a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1354a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1354ac: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1354acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1354b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1354b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1354b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1354b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1354b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1354b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1354bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1354bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1354c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1354c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1354c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1354c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1354c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1354c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1354cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1354ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1354d0: 0x906558c0  lbu         $a1, 0x58C0($v1)
    ctx->pc = 0x1354d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x1354d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1354d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1354d8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1354d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1354dc: 0x50a402b7  beql        $a1, $a0, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x1354DCu;
    {
        const bool branch_taken_0x1354dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1354dc) {
            ctx->pc = 0x1354E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1354DCu;
            // 0x1354e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135FBCu;
            goto label_135fbc;
        }
    }
    ctx->pc = 0x1354E4u;
    // 0x1354e4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1354e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1354e8: 0x50a3029f  beql        $a1, $v1, . + 4 + (0x29F << 2)
    ctx->pc = 0x1354E8u;
    {
        const bool branch_taken_0x1354e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1354e8) {
            ctx->pc = 0x1354ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1354E8u;
            // 0x1354ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135F68u;
            goto label_135f68;
        }
    }
    ctx->pc = 0x1354F0u;
    // 0x1354f0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x1354f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1354f4: 0x10a30290  beq         $a1, $v1, . + 4 + (0x290 << 2)
    ctx->pc = 0x1354F4u;
    {
        const bool branch_taken_0x1354f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1354f4) {
            ctx->pc = 0x135F38u;
            goto label_135f38;
        }
    }
    ctx->pc = 0x1354FCu;
    // 0x1354fc: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1354fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x135500: 0x10a30286  beq         $a1, $v1, . + 4 + (0x286 << 2)
    ctx->pc = 0x135500u;
    {
        const bool branch_taken_0x135500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x135500) {
            ctx->pc = 0x135F1Cu;
            goto label_135f1c;
        }
    }
    ctx->pc = 0x135508u;
    // 0x135508: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13550c: 0x10a40265  beq         $a1, $a0, . + 4 + (0x265 << 2)
    ctx->pc = 0x13550Cu;
    {
        const bool branch_taken_0x13550c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x13550c) {
            ctx->pc = 0x135EA4u;
            goto label_135ea4;
        }
    }
    ctx->pc = 0x135514u;
    // 0x135514: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135518: 0x10a30242  beq         $a1, $v1, . + 4 + (0x242 << 2)
    ctx->pc = 0x135518u;
    {
        const bool branch_taken_0x135518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x135518) {
            ctx->pc = 0x135E24u;
            goto label_135e24;
        }
    }
    ctx->pc = 0x135520u;
    // 0x135520: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135520u;
    {
        const bool branch_taken_0x135520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x135520) {
            ctx->pc = 0x135530u;
            goto label_135530;
        }
    }
    ctx->pc = 0x135528u;
    // 0x135528: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x135528u;
    {
        const bool branch_taken_0x135528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135528u;
            // 0x13552c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135528) {
            ctx->pc = 0x13600Cu;
            goto label_13600c;
        }
    }
    ctx->pc = 0x135530u;
label_135530:
    // 0x135530: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135534: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x135534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x135538: 0x18600057  blez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x135538u;
    {
        const bool branch_taken_0x135538 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135538u;
            // 0x13553c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135538) {
            ctx->pc = 0x135698u;
            goto label_135698;
        }
    }
    ctx->pc = 0x135540u;
    // 0x135540: 0x3c15009c  lui         $s5, 0x9C
    ctx->pc = 0x135540u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)156 << 16));
    // 0x135544: 0x26b5db50  addiu       $s5, $s5, -0x24B0
    ctx->pc = 0x135544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957904));
label_135548:
    // 0x135548: 0x92a3000a  lbu         $v1, 0xA($s5)
    ctx->pc = 0x135548u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x13554c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135550: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x135550u;
    {
        const bool branch_taken_0x135550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x135550) {
            ctx->pc = 0x135680u;
            goto label_135680;
        }
    }
    ctx->pc = 0x135558u;
    // 0x135558: 0x92a20050  lbu         $v0, 0x50($s5)
    ctx->pc = 0x135558u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x13555c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13555cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x135560: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x135560u;
    {
        const bool branch_taken_0x135560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135560) {
            ctx->pc = 0x135680u;
            goto label_135680;
        }
    }
    ctx->pc = 0x135568u;
    // 0x135568: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135568u;
    SET_GPR_U32(ctx, 31, 0x135570u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135570u; }
        if (ctx->pc != 0x135570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135570u; }
        if (ctx->pc != 0x135570u) { return; }
    }
    ctx->pc = 0x135570u;
label_135570:
    // 0x135570: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x135570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
    // 0x135574: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x135574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13557c: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x13557cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x135580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135584: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x135584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x135588: 0x2442c4a0  addiu       $v0, $v0, -0x3B60
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952096));
    // 0x13558c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13558cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135590: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135594: 0x0  nop
    ctx->pc = 0x135594u;
    // NOP
    // 0x135598: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x135598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x13559c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x13559cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x1355a0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1355a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1355a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1355a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1355a8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1355a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1355ac: 0x0  nop
    ctx->pc = 0x1355acu;
    // NOP
label_1355b0:
    // 0x1355b0: 0x92c3014c  lbu         $v1, 0x14C($s6)
    ctx->pc = 0x1355b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 332)));
    // 0x1355b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1355b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1355b8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1355B8u;
    {
        const bool branch_taken_0x1355b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1355BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355B8u;
            // 0x1355bc: 0x26d1014c  addiu       $s1, $s6, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1355b8) {
            ctx->pc = 0x135660u;
            goto label_135660;
        }
    }
    ctx->pc = 0x1355C0u;
    // 0x1355c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1355c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1355c4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1355C4u;
    {
        const bool branch_taken_0x1355c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1355c4) {
            ctx->pc = 0x1355E0u;
            goto label_1355e0;
        }
    }
    ctx->pc = 0x1355CCu;
    // 0x1355cc: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1355CCu;
    {
        const bool branch_taken_0x1355cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355cc) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x1355D4u;
    // 0x1355d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1355D4u;
    {
        const bool branch_taken_0x1355d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1355d4) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x1355DCu;
    // 0x1355dc: 0x0  nop
    ctx->pc = 0x1355dcu;
    // NOP
label_1355e0:
    // 0x1355e0: 0xc067c48  jal         func_19F120
    ctx->pc = 0x1355E0u;
    SET_GPR_U32(ctx, 31, 0x1355E8u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355E8u; }
        if (ctx->pc != 0x1355E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1355E8u; }
        if (ctx->pc != 0x1355E8u) { return; }
    }
    ctx->pc = 0x1355E8u;
label_1355e8:
    // 0x1355e8: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1355e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1355ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1355f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1355f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1355f4: 0x0  nop
    ctx->pc = 0x1355f4u;
    // NOP
    // 0x1355f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1355f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1355fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1355fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135600: 0x0  nop
    ctx->pc = 0x135600u;
    // NOP
    // 0x135604: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135608: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x135608u;
    {
        const bool branch_taken_0x135608 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135608) {
            ctx->pc = 0x13560Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135608u;
            // 0x13560c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x135620u;
            goto label_135620;
        }
    }
    ctx->pc = 0x135610u;
    // 0x135610: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135614: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135618: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135618u;
    {
        const bool branch_taken_0x135618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13561Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135618u;
            // 0x13561c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135618) {
            ctx->pc = 0x135638u;
            goto label_135638;
        }
    }
    ctx->pc = 0x135620u;
label_135620:
    // 0x135620: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135624: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135628: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13562c: 0x0  nop
    ctx->pc = 0x13562cu;
    // NOP
    // 0x135630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135634: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x135634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_135638:
    // 0x135638: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x135638u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13563c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135640: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135644: 0xc04c790  jal         func_131E40
    ctx->pc = 0x135644u;
    SET_GPR_U32(ctx, 31, 0x13564Cu);
    ctx->pc = 0x135648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135644u;
            // 0x135648: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131E40u;
    if (runtime->hasFunction(0x131E40u)) {
        auto targetFn = runtime->lookupFunction(0x131E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13564Cu; }
        if (ctx->pc != 0x13564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131E40_0x131e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13564Cu; }
        if (ctx->pc != 0x13564Cu) { return; }
    }
    ctx->pc = 0x13564Cu;
label_13564c:
    // 0x13564c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x13564Cu;
    {
        const bool branch_taken_0x13564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13564c) {
            ctx->pc = 0x1355E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1355e0;
        }
    }
    ctx->pc = 0x135654u;
    // 0x135654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135654u;
    {
        const bool branch_taken_0x135654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135654u;
            // 0x135658: 0xa2300004  sb          $s0, 0x4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135654) {
            ctx->pc = 0x135668u;
            goto label_135668;
        }
    }
    ctx->pc = 0x13565Cu;
    // 0x13565c: 0x0  nop
    ctx->pc = 0x13565cu;
    // NOP
label_135660:
    // 0x135660: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x135660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135664: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x135664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_135668:
    // 0x135668: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x135668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13566c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x13566cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x135670: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x135670u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x135674: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x135674u;
    {
        const bool branch_taken_0x135674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135674u;
            // 0x135678: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135674) {
            ctx->pc = 0x1355B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1355b0;
        }
    }
    ctx->pc = 0x13567Cu;
    // 0x13567c: 0x0  nop
    ctx->pc = 0x13567cu;
    // NOP
label_135680:
    // 0x135680: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135684: 0x9043daa0  lbu         $v1, -0x2560($v0)
    ctx->pc = 0x135684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x135688: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x135688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13568c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x13568cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x135690: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x135690u;
    {
        const bool branch_taken_0x135690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135690u;
            // 0x135694: 0x26b50248  addiu       $s5, $s5, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135690) {
            ctx->pc = 0x135548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135548;
        }
    }
    ctx->pc = 0x135698u;
label_135698:
    // 0x135698: 0x186001a7  blez        $v1, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x135698u;
    {
        const bool branch_taken_0x135698 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x13569Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135698u;
            // 0x13569c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135698) {
            ctx->pc = 0x135D38u;
            goto label_135d38;
        }
    }
    ctx->pc = 0x1356A0u;
    // 0x1356a0: 0x3c14009c  lui         $s4, 0x9C
    ctx->pc = 0x1356a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)156 << 16));
    // 0x1356a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1356a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1356a8: 0x2694db50  addiu       $s4, $s4, -0x24B0
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957904));
label_1356ac:
    // 0x1356ac: 0x9284000a  lbu         $a0, 0xA($s4)
    ctx->pc = 0x1356acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x1356b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1356b4: 0x1082003c  beq         $a0, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1356B4u;
    {
        const bool branch_taken_0x1356b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1356b4) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x1356BCu;
    // 0x1356bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1356bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1356c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1356C0u;
    {
        const bool branch_taken_0x1356c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1356c0) {
            ctx->pc = 0x1356D0u;
            goto label_1356d0;
        }
    }
    ctx->pc = 0x1356C8u;
    // 0x1356c8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1356C8u;
    {
        const bool branch_taken_0x1356c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1356c8) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x1356D0u;
label_1356d0:
    // 0x1356d0: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x1356d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x1356d4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1356D4u;
    {
        const bool branch_taken_0x1356d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1356d4) {
            ctx->pc = 0x1356F0u;
            goto label_1356f0;
        }
    }
    ctx->pc = 0x1356DCu;
    // 0x1356dc: 0x92820150  lbu         $v0, 0x150($s4)
    ctx->pc = 0x1356dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x1356e0: 0xa2820170  sb          $v0, 0x170($s4)
    ctx->pc = 0x1356e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1356e4: 0x92820150  lbu         $v0, 0x150($s4)
    ctx->pc = 0x1356e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 336)));
    // 0x1356e8: 0xa2820190  sb          $v0, 0x190($s4)
    ctx->pc = 0x1356e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 2));
    // 0x1356ec: 0x0  nop
    ctx->pc = 0x1356ecu;
    // NOP
label_1356f0:
    // 0x1356f0: 0x92820050  lbu         $v0, 0x50($s4)
    ctx->pc = 0x1356f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1356f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1356f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1356f8: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x1356F8u;
    {
        const bool branch_taken_0x1356f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1356f8) {
            ctx->pc = 0x135D18u;
            goto label_135d18;
        }
    }
    ctx->pc = 0x135700u;
    // 0x135700: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x135700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x135704: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x135704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x135708: 0x14400183  bnez        $v0, . + 4 + (0x183 << 2)
    ctx->pc = 0x135708u;
    {
        const bool branch_taken_0x135708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135708) {
            ctx->pc = 0x135D18u;
            goto label_135d18;
        }
    }
    ctx->pc = 0x135710u;
    // 0x135710: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x135710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x135714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135718: 0x1040017f  beqz        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x135718u;
    {
        const bool branch_taken_0x135718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135718) {
            ctx->pc = 0x135D18u;
            goto label_135d18;
        }
    }
    ctx->pc = 0x135720u;
    // 0x135720: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135720u;
    SET_GPR_U32(ctx, 31, 0x135728u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135728u; }
        if (ctx->pc != 0x135728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135728u; }
        if (ctx->pc != 0x135728u) { return; }
    }
    ctx->pc = 0x135728u;
label_135728:
    // 0x135728: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x135728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x13572c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13572Cu;
    {
        const bool branch_taken_0x13572c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13572c) {
            ctx->pc = 0x135730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13572Cu;
            // 0x135730: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135740u;
            goto label_135740;
        }
    }
    ctx->pc = 0x135734u;
    // 0x135734: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135738u;
    {
        const bool branch_taken_0x135738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13573Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135738u;
            // 0x13573c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135738) {
            ctx->pc = 0x135758u;
            goto label_135758;
        }
    }
    ctx->pc = 0x135740u;
label_135740:
    // 0x135740: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135744: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13574c: 0x0  nop
    ctx->pc = 0x13574cu;
    // NOP
    // 0x135750: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x135750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x135754: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x135754u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_135758:
    // 0x135758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13575c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x13575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135764: 0x0  nop
    ctx->pc = 0x135764u;
    // NOP
    // 0x135768: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13576c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x13576Cu;
    {
        const bool branch_taken_0x13576c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13576c) {
            ctx->pc = 0x135770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13576Cu;
            // 0x135770: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x135784u;
            goto label_135784;
        }
    }
    ctx->pc = 0x135774u;
    // 0x135774: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135778: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13577c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13577Cu;
    {
        const bool branch_taken_0x13577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13577Cu;
            // 0x135780: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13577c) {
            ctx->pc = 0x13579Cu;
            goto label_13579c;
        }
    }
    ctx->pc = 0x135784u;
label_135784:
    // 0x135784: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135788: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13578c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x13578cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135790: 0x0  nop
    ctx->pc = 0x135790u;
    // NOP
    // 0x135794: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135798: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_13579c:
    // 0x13579c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x13579Cu;
    {
        const bool branch_taken_0x13579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13579Cu;
            // 0x1357a0: 0xa2830001  sb          $v1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13579c) {
            ctx->pc = 0x135D18u;
            goto label_135d18;
        }
    }
    ctx->pc = 0x1357A4u;
    // 0x1357a4: 0x0  nop
    ctx->pc = 0x1357a4u;
    // NOP
label_1357a8:
    // 0x1357a8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1357a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1357ac: 0x8042da08  lb          $v0, -0x25F8($v0)
    ctx->pc = 0x1357acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957576)));
    // 0x1357b0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1357b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1357b4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1357B4u;
    {
        const bool branch_taken_0x1357b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1357b4) {
            ctx->pc = 0x1358B8u;
            goto label_1358b8;
        }
    }
    ctx->pc = 0x1357BCu;
    // 0x1357bc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1357bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1357c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1357c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1357c4: 0x2463c620  addiu       $v1, $v1, -0x39E0
    ctx->pc = 0x1357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952480));
    // 0x1357c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1357c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1357cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1357ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1357d0: 0x400008  jr          $v0
    ctx->pc = 0x1357D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1357D8u: goto label_1357d8;
            case 0x1357F8u: goto label_1357f8;
            case 0x135818u: goto label_135818;
            case 0x135838u: goto label_135838;
            case 0x135858u: goto label_135858;
            case 0x135878u: goto label_135878;
            case 0x135898u: goto label_135898;
            case 0x1358B8u: goto label_1358b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1357D8u;
label_1357d8:
    // 0x1357d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1357d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1357dc: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x1357dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1357e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1357e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1357e4: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x1357E4u;
    SET_GPR_U32(ctx, 31, 0x1357ECu);
    ctx->pc = 0x1357E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1357E4u;
            // 0x1357e8: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357ECu; }
        if (ctx->pc != 0x1357ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1357ECu; }
        if (ctx->pc != 0x1357ECu) { return; }
    }
    ctx->pc = 0x1357ECu;
label_1357ec:
    // 0x1357ec: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1357ECu;
    {
        const bool branch_taken_0x1357ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1357ec) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x1357F4u;
    // 0x1357f4: 0x0  nop
    ctx->pc = 0x1357f4u;
    // NOP
label_1357f8:
    // 0x1357f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1357fc: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x1357fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135800: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135804: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135804u;
    SET_GPR_U32(ctx, 31, 0x13580Cu);
    ctx->pc = 0x135808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135804u;
            // 0x135808: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13580Cu; }
        if (ctx->pc != 0x13580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13580Cu; }
        if (ctx->pc != 0x13580Cu) { return; }
    }
    ctx->pc = 0x13580Cu;
label_13580c:
    // 0x13580c: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x13580Cu;
    {
        const bool branch_taken_0x13580c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13580c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135814u;
    // 0x135814: 0x0  nop
    ctx->pc = 0x135814u;
    // NOP
label_135818:
    // 0x135818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13581c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x13581cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135820: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135824: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135824u;
    SET_GPR_U32(ctx, 31, 0x13582Cu);
    ctx->pc = 0x135828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135824u;
            // 0x135828: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13582Cu; }
        if (ctx->pc != 0x13582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13582Cu; }
        if (ctx->pc != 0x13582Cu) { return; }
    }
    ctx->pc = 0x13582Cu;
label_13582c:
    // 0x13582c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x13582Cu;
    {
        const bool branch_taken_0x13582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13582c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135834u;
    // 0x135834: 0x0  nop
    ctx->pc = 0x135834u;
    // NOP
label_135838:
    // 0x135838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13583c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x13583cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135840: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135844: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135844u;
    SET_GPR_U32(ctx, 31, 0x13584Cu);
    ctx->pc = 0x135848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135844u;
            // 0x135848: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13584Cu; }
        if (ctx->pc != 0x13584Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13584Cu; }
        if (ctx->pc != 0x13584Cu) { return; }
    }
    ctx->pc = 0x13584Cu;
label_13584c:
    // 0x13584c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x13584Cu;
    {
        const bool branch_taken_0x13584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13584c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135854u;
    // 0x135854: 0x0  nop
    ctx->pc = 0x135854u;
    // NOP
label_135858:
    // 0x135858: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13585c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x13585cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135864: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135864u;
    SET_GPR_U32(ctx, 31, 0x13586Cu);
    ctx->pc = 0x135868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135864u;
            // 0x135868: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13586Cu; }
        if (ctx->pc != 0x13586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13586Cu; }
        if (ctx->pc != 0x13586Cu) { return; }
    }
    ctx->pc = 0x13586Cu;
label_13586c:
    // 0x13586c: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x13586Cu;
    {
        const bool branch_taken_0x13586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13586c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135874u;
    // 0x135874: 0x0  nop
    ctx->pc = 0x135874u;
    // NOP
label_135878:
    // 0x135878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13587c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x13587cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135884: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135884u;
    SET_GPR_U32(ctx, 31, 0x13588Cu);
    ctx->pc = 0x135888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135884u;
            // 0x135888: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13588Cu; }
        if (ctx->pc != 0x13588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13588Cu; }
        if (ctx->pc != 0x13588Cu) { return; }
    }
    ctx->pc = 0x13588Cu;
label_13588c:
    // 0x13588c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x13588Cu;
    {
        const bool branch_taken_0x13588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13588c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135894u;
    // 0x135894: 0x0  nop
    ctx->pc = 0x135894u;
    // NOP
label_135898:
    // 0x135898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13589c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x13589cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1358a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1358a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358a4: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x1358A4u;
    SET_GPR_U32(ctx, 31, 0x1358ACu);
    ctx->pc = 0x1358A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1358A4u;
            // 0x1358a8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358ACu; }
        if (ctx->pc != 0x1358ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358ACu; }
        if (ctx->pc != 0x1358ACu) { return; }
    }
    ctx->pc = 0x1358ACu;
label_1358ac:
    // 0x1358ac: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1358ACu;
    {
        const bool branch_taken_0x1358ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1358ac) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x1358B4u;
    // 0x1358b4: 0x0  nop
    ctx->pc = 0x1358b4u;
    // NOP
label_1358b8:
    // 0x1358b8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1358b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1358bc: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x1358bcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1358c0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1358c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1358c4: 0x1082010c  beq         $a0, $v0, . + 4 + (0x10C << 2)
    ctx->pc = 0x1358C4u;
    {
        const bool branch_taken_0x1358c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1358c4) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x1358CCu;
    // 0x1358cc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1358ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1358d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1358d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1358d4: 0x9043f35a  lbu         $v1, -0xCA6($v0)
    ctx->pc = 0x1358d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x1358d8: 0x1466003f  bne         $v1, $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x1358D8u;
    {
        const bool branch_taken_0x1358d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1358d8) {
            ctx->pc = 0x1359D8u;
            goto label_1359d8;
        }
    }
    ctx->pc = 0x1358E0u;
    // 0x1358e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1358e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1358e4: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1358E4u;
    {
        const bool branch_taken_0x1358e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1358e4) {
            ctx->pc = 0x135938u;
            goto label_135938;
        }
    }
    ctx->pc = 0x1358ECu;
    // 0x1358ec: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1358f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1358f4: 0x9044befc  lbu         $a0, -0x4104($v0)
    ctx->pc = 0x1358f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x1358f8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1358F8u;
    {
        const bool branch_taken_0x1358f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1358f8) {
            ctx->pc = 0x135938u;
            goto label_135938;
        }
    }
    ctx->pc = 0x135900u;
    // 0x135900: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x135900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x135904: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135904u;
    {
        const bool branch_taken_0x135904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x135904) {
            ctx->pc = 0x135920u;
            goto label_135920;
        }
    }
    ctx->pc = 0x13590Cu;
    // 0x13590c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x135910: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x135910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x135914: 0xa2830005  sb          $v1, 0x5($s4)
    ctx->pc = 0x135914u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x135918: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x135918u;
    {
        const bool branch_taken_0x135918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13591Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135918u;
            // 0x13591c: 0xa040f35a  sb          $zero, -0xCA6($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294964058), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135918) {
            ctx->pc = 0x135C58u;
            goto label_135c58;
        }
    }
    ctx->pc = 0x135920u;
label_135920:
    // 0x135920: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x135920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x135924: 0xa2860005  sb          $a2, 0x5($s4)
    ctx->pc = 0x135924u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x135928: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135928u;
    SET_GPR_U32(ctx, 31, 0x135930u);
    ctx->pc = 0x13592Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135928u;
            // 0x13592c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135930u; }
        if (ctx->pc != 0x135930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135930u; }
        if (ctx->pc != 0x135930u) { return; }
    }
    ctx->pc = 0x135930u;
label_135930:
    // 0x135930: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x135930u;
    {
        const bool branch_taken_0x135930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135930) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135938u;
label_135938:
    // 0x135938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13593c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x13593Cu;
    SET_GPR_U32(ctx, 31, 0x135944u);
    ctx->pc = 0x135940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13593Cu;
            // 0x135940: 0xa2820005  sb          $v0, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135944u; }
        if (ctx->pc != 0x135944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135944u; }
        if (ctx->pc != 0x135944u) { return; }
    }
    ctx->pc = 0x135944u;
label_135944:
    // 0x135944: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x135944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x135948: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13594c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13594cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135950: 0x0  nop
    ctx->pc = 0x135950u;
    // NOP
    // 0x135954: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13595c: 0x0  nop
    ctx->pc = 0x13595cu;
    // NOP
    // 0x135960: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135964: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x135964u;
    {
        const bool branch_taken_0x135964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135964) {
            ctx->pc = 0x135968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135964u;
            // 0x135968: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13597Cu;
            goto label_13597c;
        }
    }
    ctx->pc = 0x13596Cu;
    // 0x13596c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13596cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135970: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135974: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135974u;
    {
        const bool branch_taken_0x135974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135974u;
            // 0x135978: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135974) {
            ctx->pc = 0x135994u;
            goto label_135994;
        }
    }
    ctx->pc = 0x13597Cu;
label_13597c:
    // 0x13597c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135980: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135984: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135988: 0x0  nop
    ctx->pc = 0x135988u;
    // NOP
    // 0x13598c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13598cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_135994:
    // 0x135994: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135998: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13599c: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x1359a0: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1359a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1359a4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1359a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1359a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1359a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1359ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1359acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1359b0: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x1359b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1359b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1359b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1359bc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1359c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1359c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1359c4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1359c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1359c8: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x1359C8u;
    SET_GPR_U32(ctx, 31, 0x1359D0u);
    ctx->pc = 0x1359CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359C8u;
            // 0x1359cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359D0u; }
        if (ctx->pc != 0x1359D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359D0u; }
        if (ctx->pc != 0x1359D0u) { return; }
    }
    ctx->pc = 0x1359D0u;
label_1359d0:
    // 0x1359d0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1359D0u;
    {
        const bool branch_taken_0x1359d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1359d0) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x1359D8u;
label_1359d8:
    // 0x1359d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1359dc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1359DCu;
    {
        const bool branch_taken_0x1359dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1359dc) {
            ctx->pc = 0x135A30u;
            goto label_135a30;
        }
    }
    ctx->pc = 0x1359E4u;
    // 0x1359e4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1359e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1359e8: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1359E8u;
    {
        const bool branch_taken_0x1359e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1359e8) {
            ctx->pc = 0x135A18u;
            goto label_135a18;
        }
    }
    ctx->pc = 0x1359F0u;
    // 0x1359f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1359f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1359f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1359f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1359f8: 0x9045befc  lbu         $a1, -0x4104($v0)
    ctx->pc = 0x1359f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x1359fc: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1359FCu;
    {
        const bool branch_taken_0x1359fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1359fc) {
            ctx->pc = 0x135A18u;
            goto label_135a18;
        }
    }
    ctx->pc = 0x135A04u;
    // 0x135a04: 0xa2860005  sb          $a2, 0x5($s4)
    ctx->pc = 0x135a04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x135a08: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135A08u;
    SET_GPR_U32(ctx, 31, 0x135A10u);
    ctx->pc = 0x135A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A08u;
            // 0x135a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A10u; }
        if (ctx->pc != 0x135A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A10u; }
        if (ctx->pc != 0x135A10u) { return; }
    }
    ctx->pc = 0x135A10u;
label_135a10:
    // 0x135a10: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x135A10u;
    {
        const bool branch_taken_0x135a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a10) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135A18u;
label_135a18:
    // 0x135a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135a1c: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x135a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135a20: 0xc04ed08  jal         func_13B420
    ctx->pc = 0x135A20u;
    SET_GPR_U32(ctx, 31, 0x135A28u);
    ctx->pc = 0x135A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135A20u;
            // 0x135a24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B420u;
    if (runtime->hasFunction(0x13B420u)) {
        auto targetFn = runtime->lookupFunction(0x13B420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A28u; }
        if (ctx->pc != 0x135A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B420_0x13b420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A28u; }
        if (ctx->pc != 0x135A28u) { return; }
    }
    ctx->pc = 0x135A28u;
label_135a28:
    // 0x135a28: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x135A28u;
    {
        const bool branch_taken_0x135a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135a28) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135A30u;
label_135a30:
    // 0x135a30: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x135A30u;
    {
        const bool branch_taken_0x135a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A30u;
            // 0x135a34: 0xa2820005  sb          $v0, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a30) {
            ctx->pc = 0x135C50u;
            goto label_135c50;
        }
    }
    ctx->pc = 0x135A38u;
    // 0x135a38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x135a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x135a3c: 0x14820062  bne         $a0, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x135A3Cu;
    {
        const bool branch_taken_0x135a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x135a3c) {
            ctx->pc = 0x135BC8u;
            goto label_135bc8;
        }
    }
    ctx->pc = 0x135A44u;
    // 0x135a44: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x135a48: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x135a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135a4c: 0x9044befc  lbu         $a0, -0x4104($v0)
    ctx->pc = 0x135a4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950652)));
    // 0x135a50: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x135A50u;
    {
        const bool branch_taken_0x135a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x135a50) {
            ctx->pc = 0x135BC8u;
            goto label_135bc8;
        }
    }
    ctx->pc = 0x135A58u;
    // 0x135a58: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x135a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x135a5c: 0x9042bf00  lbu         $v0, -0x4100($v0)
    ctx->pc = 0x135a5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950656)));
    // 0x135a60: 0x14460031  bne         $v0, $a2, . + 4 + (0x31 << 2)
    ctx->pc = 0x135A60u;
    {
        const bool branch_taken_0x135a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x135a60) {
            ctx->pc = 0x135B28u;
            goto label_135b28;
        }
    }
    ctx->pc = 0x135A68u;
    // 0x135a68: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x135a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x135a6c: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x135a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x135a70: 0x14a20029  bne         $a1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x135A70u;
    {
        const bool branch_taken_0x135a70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x135A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A70u;
            // 0x135a74: 0xa2860005  sb          $a2, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a70) {
            ctx->pc = 0x135B18u;
            goto label_135b18;
        }
    }
    ctx->pc = 0x135A78u;
    // 0x135a78: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135A78u;
    SET_GPR_U32(ctx, 31, 0x135A80u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A80u; }
        if (ctx->pc != 0x135A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135A80u; }
        if (ctx->pc != 0x135A80u) { return; }
    }
    ctx->pc = 0x135A80u;
label_135a80:
    // 0x135a80: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x135a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x135a84: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x135a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135a88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135a8c: 0x0  nop
    ctx->pc = 0x135a8cu;
    // NOP
    // 0x135a90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135a98: 0x0  nop
    ctx->pc = 0x135a98u;
    // NOP
    // 0x135a9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135a9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135aa0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x135AA0u;
    {
        const bool branch_taken_0x135aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135aa0) {
            ctx->pc = 0x135AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135AA0u;
            // 0x135aa4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x135AB8u;
            goto label_135ab8;
        }
    }
    ctx->pc = 0x135AA8u;
    // 0x135aa8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135aa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135aac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135aacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135ab0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135AB0u;
    {
        const bool branch_taken_0x135ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135AB0u;
            // 0x135ab4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ab0) {
            ctx->pc = 0x135AD0u;
            goto label_135ad0;
        }
    }
    ctx->pc = 0x135AB8u;
label_135ab8:
    // 0x135ab8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135abc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135abcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135ac0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135ac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135ac4: 0x0  nop
    ctx->pc = 0x135ac4u;
    // NOP
    // 0x135ac8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135acc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_135ad0:
    // 0x135ad0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135ad4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x135ad8: 0x8045d9f8  lb          $a1, -0x2608($v0)
    ctx->pc = 0x135ad8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x135adc: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x135adcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135ae0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x135ae4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135ae8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x135ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x135aec: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x135aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x135af0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x135af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x135af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135af8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x135af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x135afc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x135afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x135b00: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x135b00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135b04: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135B04u;
    SET_GPR_U32(ctx, 31, 0x135B0Cu);
    ctx->pc = 0x135B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B04u;
            // 0x135b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B0Cu; }
        if (ctx->pc != 0x135B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B0Cu; }
        if (ctx->pc != 0x135B0Cu) { return; }
    }
    ctx->pc = 0x135B0Cu;
label_135b0c:
    // 0x135b0c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x135B0Cu;
    {
        const bool branch_taken_0x135b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b0c) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135B14u;
    // 0x135b14: 0x0  nop
    ctx->pc = 0x135b14u;
    // NOP
label_135b18:
    // 0x135b18: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x135B18u;
    SET_GPR_U32(ctx, 31, 0x135B20u);
    ctx->pc = 0x135B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B18u;
            // 0x135b1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (runtime->hasFunction(0x137130u)) {
        auto targetFn = runtime->lookupFunction(0x137130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B20u; }
        if (ctx->pc != 0x135B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137130_0x137130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B20u; }
        if (ctx->pc != 0x135B20u) { return; }
    }
    ctx->pc = 0x135B20u;
label_135b20:
    // 0x135b20: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x135B20u;
    {
        const bool branch_taken_0x135b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135b20) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135B28u;
label_135b28:
    // 0x135b28: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x135b28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x135b2c: 0xa2830151  sb          $v1, 0x151($s4)
    ctx->pc = 0x135b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b30: 0x3c1601e0  lui         $s6, 0x1E0
    ctx->pc = 0x135b30u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)480 << 16));
    // 0x135b34: 0xa2830150  sb          $v1, 0x150($s4)
    ctx->pc = 0x135b34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135b38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b3c: 0xa2830171  sb          $v1, 0x171($s4)
    ctx->pc = 0x135b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 369), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b40: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x135b40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b44: 0xa2830170  sb          $v1, 0x170($s4)
    ctx->pc = 0x135b44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b48: 0x26d6bed0  addiu       $s6, $s6, -0x4130
    ctx->pc = 0x135b48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294950608));
    // 0x135b4c: 0xa2830191  sb          $v1, 0x191($s4)
    ctx->pc = 0x135b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b50: 0xa2830190  sb          $v1, 0x190($s4)
    ctx->pc = 0x135b50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 3));
    // 0x135b54: 0x0  nop
    ctx->pc = 0x135b54u;
    // NOP
label_135b58:
    // 0x135b58: 0xa2a0014c  sb          $zero, 0x14C($s5)
    ctx->pc = 0x135b58u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x135b5c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x135b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135b60: 0x92d1002d  lbu         $s1, 0x2D($s6)
    ctx->pc = 0x135b60u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 45)));
    // 0x135b64: 0xa2a20151  sb          $v0, 0x151($s5)
    ctx->pc = 0x135b64u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x135b68: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x135b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x135b6c: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x135B6Cu;
    SET_GPR_U32(ctx, 31, 0x135B74u);
    ctx->pc = 0x135B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B6Cu;
            // 0x135b70: 0x26b0014c  addiu       $s0, $s5, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (runtime->hasFunction(0x13B150u)) {
        auto targetFn = runtime->lookupFunction(0x13B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B74u; }
        if (ctx->pc != 0x135B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B150_0x13b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B74u; }
        if (ctx->pc != 0x135B74u) { return; }
    }
    ctx->pc = 0x135B74u;
label_135b74:
    // 0x135b74: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x135b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135b78: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x135B78u;
    SET_GPR_U32(ctx, 31, 0x135B80u);
    ctx->pc = 0x135B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B78u;
            // 0x135b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (runtime->hasFunction(0x13B010u)) {
        auto targetFn = runtime->lookupFunction(0x13B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B80u; }
        if (ctx->pc != 0x135B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B010_0x13b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B80u; }
        if (ctx->pc != 0x135B80u) { return; }
    }
    ctx->pc = 0x135B80u;
label_135b80:
    // 0x135b80: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x135b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x135b84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x135b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x135b88: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x135b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135b8c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x135b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x135b90: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x135b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x135b94: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x135b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x135b98: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x135B98u;
    {
        const bool branch_taken_0x135b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135B98u;
            // 0x135b9c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b98) {
            ctx->pc = 0x135B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135b58;
        }
    }
    ctx->pc = 0x135BA0u;
    // 0x135ba0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ba8: 0xa282000a  sb          $v0, 0xA($s4)
    ctx->pc = 0x135ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x135bac: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x135bacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x135bb0: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x135bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x135bb4: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x135BB4u;
    SET_GPR_U32(ctx, 31, 0x135BBCu);
    ctx->pc = 0x135BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135BB4u;
            // 0x135bb8: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BBCu; }
        if (ctx->pc != 0x135BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BBCu; }
        if (ctx->pc != 0x135BBCu) { return; }
    }
    ctx->pc = 0x135BBCu;
label_135bbc:
    // 0x135bbc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x135BBCu;
    {
        const bool branch_taken_0x135bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135bbc) {
            ctx->pc = 0x135CF8u;
            goto label_135cf8;
        }
    }
    ctx->pc = 0x135BC4u;
    // 0x135bc4: 0x0  nop
    ctx->pc = 0x135bc4u;
    // NOP
label_135bc8:
    // 0x135bc8: 0xc067c48  jal         func_19F120
    ctx->pc = 0x135BC8u;
    SET_GPR_U32(ctx, 31, 0x135BD0u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BD0u; }
        if (ctx->pc != 0x135BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BD0u; }
        if (ctx->pc != 0x135BD0u) { return; }
    }
    ctx->pc = 0x135BD0u;
label_135bd0:
    // 0x135bd0: 0x92820005  lbu         $v0, 0x5($s4)
    ctx->pc = 0x135bd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 5)));
    // 0x135bd4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135BD4u;
    {
        const bool branch_taken_0x135bd4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x135bd4) {
            ctx->pc = 0x135BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135BD4u;
            // 0x135bd8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135BE8u;
            goto label_135be8;
        }
    }
    ctx->pc = 0x135BDCu;
    // 0x135bdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x135bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135be0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135BE0u;
    {
        const bool branch_taken_0x135be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135BE0u;
            // 0x135be4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135be0) {
            ctx->pc = 0x135C00u;
            goto label_135c00;
        }
    }
    ctx->pc = 0x135BE8u;
label_135be8:
    // 0x135be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x135be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x135bec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135bf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x135bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x135bf4: 0x0  nop
    ctx->pc = 0x135bf4u;
    // NOP
    // 0x135bf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x135bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x135bfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x135bfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_135c00:
    // 0x135c00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135c04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x135c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135c0c: 0x0  nop
    ctx->pc = 0x135c0cu;
    // NOP
    // 0x135c10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x135c10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135c14: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x135C14u;
    {
        const bool branch_taken_0x135c14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135c14) {
            ctx->pc = 0x135C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135C14u;
            // 0x135c18: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C2Cu;
            goto label_135c2c;
        }
    }
    ctx->pc = 0x135C1Cu;
    // 0x135c1c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135c1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135c20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135c20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135c24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x135C24u;
    {
        const bool branch_taken_0x135c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C24u;
            // 0x135c28: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c24) {
            ctx->pc = 0x135C44u;
            goto label_135c44;
        }
    }
    ctx->pc = 0x135C2Cu;
label_135c2c:
    // 0x135c2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x135c30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x135c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x135c34: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x135c34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x135c38: 0x0  nop
    ctx->pc = 0x135c38u;
    // NOP
    // 0x135c3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x135c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x135c40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x135c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_135c44:
    // 0x135c44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x135C44u;
    {
        const bool branch_taken_0x135c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C44u;
            // 0x135c48: 0xa2830001  sb          $v1, 0x1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c44) {
            ctx->pc = 0x135C58u;
            goto label_135c58;
        }
    }
    ctx->pc = 0x135C4Cu;
    // 0x135c4c: 0x0  nop
    ctx->pc = 0x135c4cu;
    // NOP
label_135c50:
    // 0x135c50: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x135c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135c54: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x135c54u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_135c58:
    // 0x135c58: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x135c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135c5c: 0xa2830151  sb          $v1, 0x151($s4)
    ctx->pc = 0x135c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 337), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c60: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135c64: 0xa2830150  sb          $v1, 0x150($s4)
    ctx->pc = 0x135c64u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 336), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c68: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x135c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x135c6c: 0xa2830171  sb          $v1, 0x171($s4)
    ctx->pc = 0x135c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 369), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x135c70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c74: 0xa2830170  sb          $v1, 0x170($s4)
    ctx->pc = 0x135c74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c78: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x135c78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c7c: 0xa2830191  sb          $v1, 0x191($s4)
    ctx->pc = 0x135c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 401), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c80: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x135c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135c84: 0x57f021  addu        $fp, $v0, $s7
    ctx->pc = 0x135c84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x135c88: 0xa2830190  sb          $v1, 0x190($s4)
    ctx->pc = 0x135c88u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 400), (uint8_t)GPR_U32(ctx, 3));
    // 0x135c8c: 0x0  nop
    ctx->pc = 0x135c8cu;
    // NOP
label_135c90:
    // 0x135c90: 0xa2a0014c  sb          $zero, 0x14C($s5)
    ctx->pc = 0x135c90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x135c94: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x135c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x135c98: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x135c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x135c9c: 0xa2a20151  sb          $v0, 0x151($s5)
    ctx->pc = 0x135c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 337), (uint8_t)GPR_U32(ctx, 2));
    // 0x135ca0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135ca4: 0x8043d9f8  lb          $v1, -0x2608($v0)
    ctx->pc = 0x135ca4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x135ca8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x135ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x135cac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135cb0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x135cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x135cb4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x135cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x135cb8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x135cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x135cbc: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x135cbcu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135cc0: 0xc04ec54  jal         func_13B150
    ctx->pc = 0x135CC0u;
    SET_GPR_U32(ctx, 31, 0x135CC8u);
    ctx->pc = 0x135CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135CC0u;
            // 0x135cc4: 0x26b0014c  addiu       $s0, $s5, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B150u;
    if (runtime->hasFunction(0x13B150u)) {
        auto targetFn = runtime->lookupFunction(0x13B150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CC8u; }
        if (ctx->pc != 0x135CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B150_0x13b150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CC8u; }
        if (ctx->pc != 0x135CC8u) { return; }
    }
    ctx->pc = 0x135CC8u;
label_135cc8:
    // 0x135cc8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x135cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135ccc: 0xc04ec04  jal         func_13B010
    ctx->pc = 0x135CCCu;
    SET_GPR_U32(ctx, 31, 0x135CD4u);
    ctx->pc = 0x135CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135CCCu;
            // 0x135cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B010u;
    if (runtime->hasFunction(0x13B010u)) {
        auto targetFn = runtime->lookupFunction(0x13B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CD4u; }
        if (ctx->pc != 0x135CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B010_0x13b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135CD4u; }
        if (ctx->pc != 0x135CD4u) { return; }
    }
    ctx->pc = 0x135CD4u;
label_135cd4:
    // 0x135cd4: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x135cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
    // 0x135cd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x135cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x135cdc: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x135cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x135ce0: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x135ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x135ce4: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x135ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x135ce8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x135ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x135cec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x135CECu;
    {
        const bool branch_taken_0x135cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CECu;
            // 0x135cf0: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135cec) {
            ctx->pc = 0x135C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135c90;
        }
    }
    ctx->pc = 0x135CF4u;
    // 0x135cf4: 0x0  nop
    ctx->pc = 0x135cf4u;
    // NOP
label_135cf8:
    // 0x135cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x135cfc: 0xa282000a  sb          $v0, 0xA($s4)
    ctx->pc = 0x135cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x135d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d04: 0xae800044  sw          $zero, 0x44($s4)
    ctx->pc = 0x135d04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 0));
    // 0x135d08: 0xae800048  sw          $zero, 0x48($s4)
    ctx->pc = 0x135d08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 0));
    // 0x135d0c: 0xc067f98  jal         func_19FE60
    ctx->pc = 0x135D0Cu;
    SET_GPR_U32(ctx, 31, 0x135D14u);
    ctx->pc = 0x135D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135D0Cu;
            // 0x135d10: 0xae80004c  sw          $zero, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FE60u;
    if (runtime->hasFunction(0x19FE60u)) {
        auto targetFn = runtime->lookupFunction(0x19FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D14u; }
        if (ctx->pc != 0x135D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019FE60_0x19fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135D14u; }
        if (ctx->pc != 0x135D14u) { return; }
    }
    ctx->pc = 0x135D14u;
label_135d14:
    // 0x135d14: 0x0  nop
    ctx->pc = 0x135d14u;
    // NOP
label_135d18:
    // 0x135d18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135d1c: 0x9042daa0  lbu         $v0, -0x2560($v0)
    ctx->pc = 0x135d1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957728)));
    // 0x135d20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x135d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x135d24: 0x26940248  addiu       $s4, $s4, 0x248
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 584));
    // 0x135d28: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x135d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x135d2c: 0x1440fe5f  bnez        $v0, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x135D2Cu;
    {
        const bool branch_taken_0x135d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D2Cu;
            // 0x135d30: 0x26f70006  addiu       $s7, $s7, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d2c) {
            ctx->pc = 0x1356ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1356ac;
        }
    }
    ctx->pc = 0x135D34u;
    // 0x135d34: 0x0  nop
    ctx->pc = 0x135d34u;
    // NOP
label_135d38:
    // 0x135d38: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x135d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x135d3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x135d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135d40: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x135d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x135d44: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x135d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_135d48:
    // 0x135d48: 0xa0a3015c  sb          $v1, 0x15C($a1)
    ctx->pc = 0x135d48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 348), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x135d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x135d50: 0xa0a30028  sb          $v1, 0x28($a1)
    ctx->pc = 0x135d50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d54: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x135d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x135d58: 0xa0a3017c  sb          $v1, 0x17C($a1)
    ctx->pc = 0x135d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 380), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d5c: 0xa0a30029  sb          $v1, 0x29($a1)
    ctx->pc = 0x135d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d60: 0xa0a3019c  sb          $v1, 0x19C($a1)
    ctx->pc = 0x135d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 412), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d64: 0xa0a3002a  sb          $v1, 0x2A($a1)
    ctx->pc = 0x135d64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x135d68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135D68u;
    {
        const bool branch_taken_0x135d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135D68u;
            // 0x135d6c: 0x24a50248  addiu       $a1, $a1, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135d68) {
            ctx->pc = 0x135D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135d48;
        }
    }
    ctx->pc = 0x135D70u;
    // 0x135d70: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135d74: 0xa3a000a8  sb          $zero, 0xA8($sp)
    ctx->pc = 0x135d74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 0));
    // 0x135d78: 0x9045dca0  lbu         $a1, -0x2360($v0)
    ctx->pc = 0x135d78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958240)));
    // 0x135d7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135d80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135d84: 0x9044dcc0  lbu         $a0, -0x2340($v0)
    ctx->pc = 0x135d84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958272)));
    // 0x135d88: 0xa3a500a9  sb          $a1, 0xA9($sp)
    ctx->pc = 0x135d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 5));
    // 0x135d8c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x135d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x135d90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135d94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x135d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x135d98: 0x9043dce0  lbu         $v1, -0x2320($v0)
    ctx->pc = 0x135d98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958304)));
    // 0x135d9c: 0xa3a400aa  sb          $a0, 0xAA($sp)
    ctx->pc = 0x135d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 4));
    // 0x135da0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x135da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135da4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135da8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x135da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x135dac: 0x9042dee8  lbu         $v0, -0x2118($v0)
    ctx->pc = 0x135dacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958824)));
    // 0x135db0: 0xa3a300ab  sb          $v1, 0xAB($sp)
    ctx->pc = 0x135db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 171), (uint8_t)GPR_U32(ctx, 3));
    // 0x135db4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135db8: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x135db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x135dbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135dc0: 0x9043df08  lbu         $v1, -0x20F8($v0)
    ctx->pc = 0x135dc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958856)));
    // 0x135dc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x135dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x135dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x135dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x135dcc: 0x9042df28  lbu         $v0, -0x20D8($v0)
    ctx->pc = 0x135dccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958888)));
    // 0x135dd0: 0xa3a300ad  sb          $v1, 0xAD($sp)
    ctx->pc = 0x135dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 173), (uint8_t)GPR_U32(ctx, 3));
    // 0x135dd4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x135dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135ddc: 0xa3a200ae  sb          $v0, 0xAE($sp)
    ctx->pc = 0x135ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 174), (uint8_t)GPR_U32(ctx, 2));
label_135de0:
    // 0x135de0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x135de0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135de4: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x135de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x135de8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135DE8u;
    {
        const bool branch_taken_0x135de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135de8) {
            ctx->pc = 0x135DF8u;
            goto label_135df8;
        }
    }
    ctx->pc = 0x135DF0u;
    // 0x135df0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x135df0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x135df4: 0x0  nop
    ctx->pc = 0x135df4u;
    // NOP
label_135df8:
    // 0x135df8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x135df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x135dfc: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x135dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x135e00: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135E00u;
    {
        const bool branch_taken_0x135e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E00u;
            // 0x135e04: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e00) {
            ctx->pc = 0x135DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135de0;
        }
    }
    ctx->pc = 0x135E08u;
    // 0x135e08: 0xc0c880c  jal         func_322030
    ctx->pc = 0x135E08u;
    SET_GPR_U32(ctx, 31, 0x135E10u);
    ctx->pc = 0x322030u;
    if (runtime->hasFunction(0x322030u)) {
        auto targetFn = runtime->lookupFunction(0x322030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E10u; }
        if (ctx->pc != 0x135E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322030_0x322030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E10u; }
        if (ctx->pc != 0x135E10u) { return; }
    }
    ctx->pc = 0x135E10u;
label_135e10:
    // 0x135e10: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x135e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x135e14: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135e18: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x135e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x135e1c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135e20: 0xa0405bf8  sb          $zero, 0x5BF8($v0)
    ctx->pc = 0x135e20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23544), (uint8_t)GPR_U32(ctx, 0));
label_135e24:
    // 0x135e24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x135e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x135e28: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x135e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x135e2c: 0xc0cb3c4  jal         func_32CF10
    ctx->pc = 0x135E2Cu;
    SET_GPR_U32(ctx, 31, 0x135E34u);
    ctx->pc = 0x135E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E2Cu;
            // 0x135e30: 0x2484c610  addiu       $a0, $a0, -0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32CF10u;
    if (runtime->hasFunction(0x32CF10u)) {
        auto targetFn = runtime->lookupFunction(0x32CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E34u; }
        if (ctx->pc != 0x135E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032CF10_0x32cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E34u; }
        if (ctx->pc != 0x135E34u) { return; }
    }
    ctx->pc = 0x135E34u;
label_135e34:
    // 0x135e34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e38: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x135E38u;
    SET_GPR_U32(ctx, 31, 0x135E40u);
    ctx->pc = 0x135E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E38u;
            // 0x135e3c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (runtime->hasFunction(0x32C890u)) {
        auto targetFn = runtime->lookupFunction(0x32C890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E40u; }
        if (ctx->pc != 0x135E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C890_0x32c890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E40u; }
        if (ctx->pc != 0x135E40u) { return; }
    }
    ctx->pc = 0x135E40u;
label_135e40:
    // 0x135e40: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x135e44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x135e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135e48: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x135e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x135e4c: 0x26315930  addiu       $s1, $s1, 0x5930
    ctx->pc = 0x135e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22832));
label_135e50:
    // 0x135e50: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x135e50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x135e54: 0x28a20029  slti        $v0, $a1, 0x29
    ctx->pc = 0x135e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x135e58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135E58u;
    {
        const bool branch_taken_0x135e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135e58) {
            ctx->pc = 0x135E70u;
            goto label_135e70;
        }
    }
    ctx->pc = 0x135E60u;
    // 0x135e60: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x135E60u;
    SET_GPR_U32(ctx, 31, 0x135E68u);
    ctx->pc = 0x135E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E60u;
            // 0x135e64: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E68u; }
        if (ctx->pc != 0x135E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E68u; }
        if (ctx->pc != 0x135E68u) { return; }
    }
    ctx->pc = 0x135E68u;
label_135e68:
    // 0x135e68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135E68u;
    {
        const bool branch_taken_0x135e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E68u;
            // 0x135e6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e68) {
            ctx->pc = 0x135E80u;
            goto label_135e80;
        }
    }
    ctx->pc = 0x135E70u;
label_135e70:
    // 0x135e70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135e74: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x135E74u;
    SET_GPR_U32(ctx, 31, 0x135E7Cu);
    ctx->pc = 0x135E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135E74u;
            // 0x135e78: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E7Cu; }
        if (ctx->pc != 0x135E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135E7Cu; }
        if (ctx->pc != 0x135E7Cu) { return; }
    }
    ctx->pc = 0x135E7Cu;
label_135e7c:
    // 0x135e7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x135e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_135e80:
    // 0x135e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x135e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x135e84: 0x2a030007  slti        $v1, $s0, 0x7
    ctx->pc = 0x135e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x135e88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x135e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x135e8c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x135E8Cu;
    {
        const bool branch_taken_0x135e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E8Cu;
            // 0x135e90: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e8c) {
            ctx->pc = 0x135E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_135e50;
        }
    }
    ctx->pc = 0x135E94u;
    // 0x135e94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x135e98: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x135e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x135e9c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x135E9Cu;
    {
        const bool branch_taken_0x135e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135E9Cu;
            // 0x135ea0: 0xa06458c0  sb          $a0, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e9c) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135EA4u;
label_135ea4:
    // 0x135ea4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135ea8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x135ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x135eac: 0x8c485930  lw          $t0, 0x5930($v0)
    ctx->pc = 0x135eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22832)));
    // 0x135eb0: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x135eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x135eb4: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x135eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x135eb8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135ebc: 0xac8858d8  sw          $t0, 0x58D8($a0)
    ctx->pc = 0x135ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22744), GPR_U32(ctx, 8));
    // 0x135ec0: 0x8c475934  lw          $a3, 0x5934($v0)
    ctx->pc = 0x135ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22836)));
    // 0x135ec4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x135ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x135ec8: 0x8c88593c  lw          $t0, 0x593C($a0)
    ctx->pc = 0x135ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22844)));
    // 0x135ecc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135ed0: 0xaca758e4  sw          $a3, 0x58E4($a1)
    ctx->pc = 0x135ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22756), GPR_U32(ctx, 7));
    // 0x135ed4: 0x8c495938  lw          $t1, 0x5938($v0)
    ctx->pc = 0x135ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22840)));
    // 0x135ed8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x135ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x135edc: 0xaca858fc  sw          $t0, 0x58FC($a1)
    ctx->pc = 0x135edcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22780), GPR_U32(ctx, 8));
    // 0x135ee0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x135ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x135ee4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x135ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x135ee8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135eec: 0xacc958f0  sw          $t1, 0x58F0($a2)
    ctx->pc = 0x135eecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22768), GPR_U32(ctx, 9));
    // 0x135ef0: 0x8c475940  lw          $a3, 0x5940($v0)
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22848)));
    // 0x135ef4: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x135ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x135ef8: 0xac875908  sw          $a3, 0x5908($a0)
    ctx->pc = 0x135ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22792), GPR_U32(ctx, 7));
    // 0x135efc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135f00: 0x8c475944  lw          $a3, 0x5944($v0)
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22852)));
    // 0x135f04: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x135f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x135f08: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135f0c: 0xacc75914  sw          $a3, 0x5914($a2)
    ctx->pc = 0x135f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22804), GPR_U32(ctx, 7));
    // 0x135f10: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x135f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x135f14: 0x8ca25948  lw          $v0, 0x5948($a1)
    ctx->pc = 0x135f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22856)));
    // 0x135f18: 0xac825920  sw          $v0, 0x5920($a0)
    ctx->pc = 0x135f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22816), GPR_U32(ctx, 2));
label_135f1c:
    // 0x135f1c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x135f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x135f20: 0xc0c0db4  jal         func_3036D0
    ctx->pc = 0x135F20u;
    SET_GPR_U32(ctx, 31, 0x135F28u);
    ctx->pc = 0x135F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F20u;
            // 0x135f24: 0x2484d838  addiu       $a0, $a0, -0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036D0u;
    if (runtime->hasFunction(0x3036D0u)) {
        auto targetFn = runtime->lookupFunction(0x3036D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F28u; }
        if (ctx->pc != 0x135F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036D0_0x3036d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F28u; }
        if (ctx->pc != 0x135F28u) { return; }
    }
    ctx->pc = 0x135F28u;
label_135f28:
    // 0x135f28: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x135f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x135f2c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x135f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x135f30: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x135F30u;
    {
        const bool branch_taken_0x135f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135F30u;
            // 0x135f34: 0xa06458c0  sb          $a0, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f30) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135F38u;
label_135f38:
    // 0x135f38: 0xc0c0da8  jal         func_3036A0
    ctx->pc = 0x135F38u;
    SET_GPR_U32(ctx, 31, 0x135F40u);
    ctx->pc = 0x3036A0u;
    if (runtime->hasFunction(0x3036A0u)) {
        auto targetFn = runtime->lookupFunction(0x3036A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F40u; }
        if (ctx->pc != 0x135F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036A0_0x3036a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F40u; }
        if (ctx->pc != 0x135F40u) { return; }
    }
    ctx->pc = 0x135F40u;
label_135f40:
    // 0x135f40: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x135F40u;
    {
        const bool branch_taken_0x135f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f40) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135F48u;
    // 0x135f48: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x135f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x135f4c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135f50: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x135F50u;
    SET_GPR_U32(ctx, 31, 0x135F58u);
    ctx->pc = 0x135F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F50u;
            // 0x135f54: 0xa04358c0  sb          $v1, 0x58C0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F58u; }
        if (ctx->pc != 0x135F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F58u; }
        if (ctx->pc != 0x135F58u) { return; }
    }
    ctx->pc = 0x135F58u;
label_135f58:
    // 0x135f58: 0xc063d18  jal         func_18F460
    ctx->pc = 0x135F58u;
    SET_GPR_U32(ctx, 31, 0x135F60u);
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F60u; }
        if (ctx->pc != 0x135F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F60u; }
        if (ctx->pc != 0x135F60u) { return; }
    }
    ctx->pc = 0x135F60u;
label_135f60:
    // 0x135f60: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x135F60u;
    {
        const bool branch_taken_0x135f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135f60) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135F68u;
label_135f68:
    // 0x135f68: 0xc0cb22c  jal         func_32C8B0
    ctx->pc = 0x135F68u;
    SET_GPR_U32(ctx, 31, 0x135F70u);
    ctx->pc = 0x135F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F68u;
            // 0x135f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8B0u;
    if (runtime->hasFunction(0x32C8B0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F70u; }
        if (ctx->pc != 0x135F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8B0_0x32c8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F70u; }
        if (ctx->pc != 0x135F70u) { return; }
    }
    ctx->pc = 0x135F70u;
label_135f70:
    // 0x135f70: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x135f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x135f74: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x135f74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x135f78: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x135f78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x135f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x135f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f84: 0x24c6d838  addiu       $a2, $a2, -0x27C8
    ctx->pc = 0x135f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957112));
    // 0x135f88: 0x24e7d450  addiu       $a3, $a3, -0x2BB0
    ctx->pc = 0x135f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956112));
    // 0x135f8c: 0x2508d470  addiu       $t0, $t0, -0x2B90
    ctx->pc = 0x135f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956144));
    // 0x135f90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x135f90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135f94: 0xc0c886c  jal         func_3221B0
    ctx->pc = 0x135F94u;
    SET_GPR_U32(ctx, 31, 0x135F9Cu);
    ctx->pc = 0x135F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135F94u;
            // 0x135f98: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3221B0u;
    if (runtime->hasFunction(0x3221B0u)) {
        auto targetFn = runtime->lookupFunction(0x3221B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F9Cu; }
        if (ctx->pc != 0x135F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003221B0_0x3221b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135F9Cu; }
        if (ctx->pc != 0x135F9Cu) { return; }
    }
    ctx->pc = 0x135F9Cu;
label_135f9c:
    // 0x135f9c: 0xc063d18  jal         func_18F460
    ctx->pc = 0x135F9Cu;
    SET_GPR_U32(ctx, 31, 0x135FA4u);
    ctx->pc = 0x18F460u;
    if (runtime->hasFunction(0x18F460u)) {
        auto targetFn = runtime->lookupFunction(0x18F460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FA4u; }
        if (ctx->pc != 0x135FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F460_0x18f460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FA4u; }
        if (ctx->pc != 0x135FA4u) { return; }
    }
    ctx->pc = 0x135FA4u;
label_135fa4:
    // 0x135fa4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x135fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x135fa8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x135fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x135fac: 0xc052f44  jal         func_14BD10
    ctx->pc = 0x135FACu;
    SET_GPR_U32(ctx, 31, 0x135FB4u);
    ctx->pc = 0x135FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135FACu;
            // 0x135fb0: 0xa04358c0  sb          $v1, 0x58C0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BD10u;
    if (runtime->hasFunction(0x14BD10u)) {
        auto targetFn = runtime->lookupFunction(0x14BD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FB4u; }
        if (ctx->pc != 0x135FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BD10_0x14bd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FB4u; }
        if (ctx->pc != 0x135FB4u) { return; }
    }
    ctx->pc = 0x135FB4u;
label_135fb4:
    // 0x135fb4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x135FB4u;
    {
        const bool branch_taken_0x135fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fb4) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135FBCu;
label_135fbc:
    // 0x135fbc: 0xc052f54  jal         func_14BD50
    ctx->pc = 0x135FBCu;
    SET_GPR_U32(ctx, 31, 0x135FC4u);
    ctx->pc = 0x14BD50u;
    if (runtime->hasFunction(0x14BD50u)) {
        auto targetFn = runtime->lookupFunction(0x14BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FC4u; }
        if (ctx->pc != 0x135FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014BD50_0x14bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FC4u; }
        if (ctx->pc != 0x135FC4u) { return; }
    }
    ctx->pc = 0x135FC4u;
label_135fc4:
    // 0x135fc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x135FC4u;
    {
        const bool branch_taken_0x135fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fc4) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135FCCu;
    // 0x135fcc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x135fd0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x135fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x135fd4: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x135fd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x135fd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x135FD8u;
    {
        const bool branch_taken_0x135fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135FD8u;
            // 0x135fdc: 0xa06058c0  sb          $zero, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135fd8) {
            ctx->pc = 0x135FF8u;
            goto label_135ff8;
        }
    }
    ctx->pc = 0x135FE0u;
    // 0x135fe0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x135fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x135fe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135fe8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x135FE8u;
    SET_GPR_U32(ctx, 31, 0x135FF0u);
    ctx->pc = 0x135FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135FE8u;
            // 0x135fec: 0x24846040  addiu       $a0, $a0, 0x6040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FF0u; }
        if (ctx->pc != 0x135FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135FF0u; }
        if (ctx->pc != 0x135FF0u) { return; }
    }
    ctx->pc = 0x135FF0u;
label_135ff0:
    // 0x135ff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x135FF0u;
    {
        const bool branch_taken_0x135ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135ff0) {
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135FF8u;
label_135ff8:
    // 0x135ff8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x135ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x135ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136000: 0xc055768  jal         func_155DA0
    ctx->pc = 0x136000u;
    SET_GPR_U32(ctx, 31, 0x136008u);
    ctx->pc = 0x136004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136000u;
            // 0x136004: 0x248469a0  addiu       $a0, $a0, 0x69A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136008u; }
        if (ctx->pc != 0x136008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136008u; }
        if (ctx->pc != 0x136008u) { return; }
    }
    ctx->pc = 0x136008u;
label_136008:
    // 0x136008: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x136008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_13600c:
    // 0x13600c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13600cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x136010: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x136010u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x136014: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x136014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136018: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x136018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13601c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13601cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136020: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13602c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13602cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136030: 0x3e00008  jr          $ra
    ctx->pc = 0x136030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136030u;
            // 0x136034: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136038u;
    // 0x136038: 0x0  nop
    ctx->pc = 0x136038u;
    // NOP
    // 0x13603c: 0x0  nop
    ctx->pc = 0x13603cu;
    // NOP
label_136040:
    // 0x136040: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x136040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x136044: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x136044u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x136048: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x136048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13604c: 0x24e7d870  addiu       $a3, $a3, -0x2790
    ctx->pc = 0x13604cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957168));
    // 0x136050: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x136050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x136054: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x136054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x136058: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x136058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13605c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x13605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x136060: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x136060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x136064: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x136064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x136068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x136068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13606c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136070: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136074:
    // 0x136074: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136078: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x136078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13607c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13607cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x136080: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x136080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x136084: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136084u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136088: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x136088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x13608c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13608Cu;
    {
        const bool branch_taken_0x13608c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x136090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13608Cu;
            // 0x136090: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13608c) {
            ctx->pc = 0x136074u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136074;
        }
    }
    ctx->pc = 0x136094u;
    // 0x136094: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x136094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x136098: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x136098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13609c: 0x24e7d8c0  addiu       $a3, $a3, -0x2740
    ctx->pc = 0x13609cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957248));
    // 0x1360a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1360a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1360a4:
    // 0x1360a4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1360a8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1360ac: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1360acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1360b0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1360b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1360b4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1360b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1360b8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1360b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1360bc: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1360BCu;
    {
        const bool branch_taken_0x1360bc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1360C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1360BCu;
            // 0x1360c0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1360bc) {
            ctx->pc = 0x1360A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1360a4;
        }
    }
    ctx->pc = 0x1360C4u;
    // 0x1360c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1360c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1360c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1360c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1360cc: 0xc460d910  lwc1        $f0, -0x26F0($v1)
    ctx->pc = 0x1360ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1360d0: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1360d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1360d4: 0xc481d914  lwc1        $f1, -0x26EC($a0)
    ctx->pc = 0x1360d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1360d8: 0x24e7d950  addiu       $a3, $a3, -0x26B0
    ctx->pc = 0x1360d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957392));
    // 0x1360dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1360dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1360e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1360e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1360e4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1360e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1360e8: 0xc462d918  lwc1        $f2, -0x26E8($v1)
    ctx->pc = 0x1360e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1360ec: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1360ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1360f0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1360f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1360f4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x1360f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1360f8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1360fc: 0xc480d91c  lwc1        $f0, -0x26E4($a0)
    ctx->pc = 0x1360fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136100: 0xc461d920  lwc1        $f1, -0x26E0($v1)
    ctx->pc = 0x136100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136104: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x136104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x136108: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x136108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x13610c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x136110: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136114: 0xc460d924  lwc1        $f0, -0x26DC($v1)
    ctx->pc = 0x136114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136118: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x136118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x13611c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13611cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136120: 0xc461d930  lwc1        $f1, -0x26D0($v1)
    ctx->pc = 0x136120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136124: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x136128: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x13612c: 0xc460d934  lwc1        $f0, -0x26CC($v1)
    ctx->pc = 0x13612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136130: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x136130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x136134: 0xc481d938  lwc1        $f1, -0x26C8($a0)
    ctx->pc = 0x136134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136138: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x136138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x13613c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x13613cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136140: 0xc460d93c  lwc1        $f0, -0x26C4($v1)
    ctx->pc = 0x136140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136144: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x136144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x136148: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x13614c: 0xc481d940  lwc1        $f1, -0x26C0($a0)
    ctx->pc = 0x13614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136150: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x136150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x136154: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136158: 0xc460d944  lwc1        $f0, -0x26BC($v1)
    ctx->pc = 0x136158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13615c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x13615cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x136160: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_136164:
    // 0x136164: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x136164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136168: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x136168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13616c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x13616cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x136170: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x136170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x136174: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136178: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x136178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x13617c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13617Cu;
    {
        const bool branch_taken_0x13617c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x136180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13617Cu;
            // 0x136180: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13617c) {
            ctx->pc = 0x136164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136164;
        }
    }
    ctx->pc = 0x136184u;
    // 0x136184: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136188: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x136188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13618c: 0x906558c0  lbu         $a1, 0x58C0($v1)
    ctx->pc = 0x13618cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x136190: 0x50a401f6  beql        $a1, $a0, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x136190u;
    {
        const bool branch_taken_0x136190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x136190) {
            ctx->pc = 0x136194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136190u;
            // 0x136194: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13696Cu;
            goto label_13696c;
        }
    }
    ctx->pc = 0x136198u;
    // 0x136198: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x136198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13619c: 0x10a301be  beq         $a1, $v1, . + 4 + (0x1BE << 2)
    ctx->pc = 0x13619Cu;
    {
        const bool branch_taken_0x13619c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13619c) {
            ctx->pc = 0x136898u;
            goto label_136898;
        }
    }
    ctx->pc = 0x1361A4u;
    // 0x1361a4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1361a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1361a8: 0x50a30087  beql        $a1, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x1361A8u;
    {
        const bool branch_taken_0x1361a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361a8) {
            ctx->pc = 0x1361ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1361A8u;
            // 0x1361ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1363C8u;
            goto label_1363c8;
        }
    }
    ctx->pc = 0x1361B0u;
    // 0x1361b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1361b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1361b4: 0x50a3007a  beql        $a1, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x1361B4u;
    {
        const bool branch_taken_0x1361b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361b4) {
            ctx->pc = 0x1361B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1361B4u;
            // 0x1361b8: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1363A0u;
            goto label_1363a0;
        }
    }
    ctx->pc = 0x1361BCu;
    // 0x1361bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1361bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1361c0: 0x50a30061  beql        $a1, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1361C0u;
    {
        const bool branch_taken_0x1361c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361c0) {
            ctx->pc = 0x1361C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1361C0u;
            // 0x1361c4: 0x24040059  addiu       $a0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136348u;
            goto label_136348;
        }
    }
    ctx->pc = 0x1361C8u;
    // 0x1361c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1361c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1361cc: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1361CCu;
    {
        const bool branch_taken_0x1361cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1361cc) {
            ctx->pc = 0x1362E8u;
            goto label_1362e8;
        }
    }
    ctx->pc = 0x1361D4u;
    // 0x1361d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1361D4u;
    {
        const bool branch_taken_0x1361d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1361d4) {
            ctx->pc = 0x1361E4u;
            goto label_1361e4;
        }
    }
    ctx->pc = 0x1361DCu;
    // 0x1361dc: 0x100001e6  b           . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1361DCu;
    {
        const bool branch_taken_0x1361dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1361E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1361DCu;
            // 0x1361e0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361dc) {
            ctx->pc = 0x136978u;
            goto label_136978;
        }
    }
    ctx->pc = 0x1361E4u;
label_1361e4:
    // 0x1361e4: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x1361E4u;
    SET_GPR_U32(ctx, 31, 0x1361ECu);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1361ECu; }
        if (ctx->pc != 0x1361ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1361ECu; }
        if (ctx->pc != 0x1361ECu) { return; }
    }
    ctx->pc = 0x1361ECu;
label_1361ec:
    // 0x1361ec: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1361f0: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x1361f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1361f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1361f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1361f8: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x1361F8u;
    SET_GPR_U32(ctx, 31, 0x136200u);
    ctx->pc = 0x1361FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1361F8u;
            // 0x1361fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136200u; }
        if (ctx->pc != 0x136200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136200u; }
        if (ctx->pc != 0x136200u) { return; }
    }
    ctx->pc = 0x136200u;
label_136200:
    // 0x136200: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x136200u;
    SET_GPR_U32(ctx, 31, 0x136208u);
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136208u; }
        if (ctx->pc != 0x136208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136208u; }
        if (ctx->pc != 0x136208u) { return; }
    }
    ctx->pc = 0x136208u;
label_136208:
    // 0x136208: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13620c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136210: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136210u;
    SET_GPR_U32(ctx, 31, 0x136218u);
    ctx->pc = 0x136214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136210u;
            // 0x136214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136218u; }
        if (ctx->pc != 0x136218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136218u; }
        if (ctx->pc != 0x136218u) { return; }
    }
    ctx->pc = 0x136218u;
label_136218:
    // 0x136218: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x136218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x13621c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136220: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136220u;
    SET_GPR_U32(ctx, 31, 0x136228u);
    ctx->pc = 0x136224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136220u;
            // 0x136224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136228u; }
        if (ctx->pc != 0x136228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136228u; }
        if (ctx->pc != 0x136228u) { return; }
    }
    ctx->pc = 0x136228u;
label_136228:
    // 0x136228: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x136228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x13622c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136230: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136230u;
    SET_GPR_U32(ctx, 31, 0x136238u);
    ctx->pc = 0x136234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136230u;
            // 0x136234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136238u; }
        if (ctx->pc != 0x136238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136238u; }
        if (ctx->pc != 0x136238u) { return; }
    }
    ctx->pc = 0x136238u;
label_136238:
    // 0x136238: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13623c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13623cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136240: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x136240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x136244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136248: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13624c: 0x8c4400ec  lw          $a0, 0xEC($v0)
    ctx->pc = 0x13624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x136250: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136250u;
    SET_GPR_U32(ctx, 31, 0x136258u);
    ctx->pc = 0x136254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136250u;
            // 0x136254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136258u; }
        if (ctx->pc != 0x136258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136258u; }
        if (ctx->pc != 0x136258u) { return; }
    }
    ctx->pc = 0x136258u;
label_136258:
    // 0x136258: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13625c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136260: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x136260u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x136264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136268: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13626c: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x13626cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x136270: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136270u;
    SET_GPR_U32(ctx, 31, 0x136278u);
    ctx->pc = 0x136274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136270u;
            // 0x136274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136278u; }
        if (ctx->pc != 0x136278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136278u; }
        if (ctx->pc != 0x136278u) { return; }
    }
    ctx->pc = 0x136278u;
label_136278:
    // 0x136278: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13627c: 0x806358a0  lb          $v1, 0x58A0($v1)
    ctx->pc = 0x13627cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22688)));
    // 0x136280: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136280u;
    {
        const bool branch_taken_0x136280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136280) {
            ctx->pc = 0x1362A8u;
            goto label_1362a8;
        }
    }
    ctx->pc = 0x136288u;
    // 0x136288: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13628c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136290: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x136290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x136294: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136298: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13629c: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x13629cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1362a0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1362A0u;
    SET_GPR_U32(ctx, 31, 0x1362A8u);
    ctx->pc = 0x1362A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1362A0u;
            // 0x1362a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362A8u; }
        if (ctx->pc != 0x1362A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362A8u; }
        if (ctx->pc != 0x1362A8u) { return; }
    }
    ctx->pc = 0x1362A8u;
label_1362a8:
    // 0x1362a8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1362a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1362ac: 0x806358a1  lb          $v1, 0x58A1($v1)
    ctx->pc = 0x1362acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22689)));
    // 0x1362b0: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1362B0u;
    {
        const bool branch_taken_0x1362b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1362b0) {
            ctx->pc = 0x1362B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1362B0u;
            // 0x1362b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1362DCu;
            goto label_1362dc;
        }
    }
    ctx->pc = 0x1362B8u;
    // 0x1362b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1362b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1362bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1362bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1362c0: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x1362c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x1362c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1362c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1362c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1362cc: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x1362ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x1362d0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1362D0u;
    SET_GPR_U32(ctx, 31, 0x1362D8u);
    ctx->pc = 0x1362D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1362D0u;
            // 0x1362d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362D8u; }
        if (ctx->pc != 0x1362D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1362D8u; }
        if (ctx->pc != 0x1362D8u) { return; }
    }
    ctx->pc = 0x1362D8u;
label_1362d8:
    // 0x1362d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1362dc:
    // 0x1362dc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1362dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1362e0: 0x100001a4  b           . + 4 + (0x1A4 << 2)
    ctx->pc = 0x1362E0u;
    {
        const bool branch_taken_0x1362e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362E0u;
            // 0x1362e4: 0xa06458c0  sb          $a0, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362e0) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x1362E8u;
label_1362e8:
    // 0x1362e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1362e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1362ec: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x1362ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x1362f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1362f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1362f4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1362f8: 0x8c4400ec  lw          $a0, 0xEC($v0)
    ctx->pc = 0x1362f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x1362fc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1362FCu;
    SET_GPR_U32(ctx, 31, 0x136304u);
    ctx->pc = 0x136300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1362FCu;
            // 0x136300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136304u; }
        if (ctx->pc != 0x136304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136304u; }
        if (ctx->pc != 0x136304u) { return; }
    }
    ctx->pc = 0x136304u;
label_136304:
    // 0x136304: 0x1040019b  beqz        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x136304u;
    {
        const bool branch_taken_0x136304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136304) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x13630Cu;
    // 0x13630c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136310: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x136310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x136314: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136318: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13631c: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x13631cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x136320: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x136320u;
    SET_GPR_U32(ctx, 31, 0x136328u);
    ctx->pc = 0x136324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136320u;
            // 0x136324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136328u; }
        if (ctx->pc != 0x136328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136328u; }
        if (ctx->pc != 0x136328u) { return; }
    }
    ctx->pc = 0x136328u;
label_136328:
    // 0x136328: 0x10400192  beqz        $v0, . + 4 + (0x192 << 2)
    ctx->pc = 0x136328u;
    {
        const bool branch_taken_0x136328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136328) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x136330u;
    // 0x136330: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136334: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x136334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x136338: 0x906358c0  lbu         $v1, 0x58C0($v1)
    ctx->pc = 0x136338u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x13633c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136340: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x136340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x136344: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x136344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_136348:
    // 0x136348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13634c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x13634Cu;
    SET_GPR_U32(ctx, 31, 0x136354u);
    ctx->pc = 0x136350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13634Cu;
            // 0x136350: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136354u; }
        if (ctx->pc != 0x136354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136354u; }
        if (ctx->pc != 0x136354u) { return; }
    }
    ctx->pc = 0x136354u;
label_136354:
    // 0x136354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136358: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x136358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13635c: 0xa0435d28  sb          $v1, 0x5D28($v0)
    ctx->pc = 0x13635cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23848), (uint8_t)GPR_U32(ctx, 3));
    // 0x136360: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x136364: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x136368: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x13636c: 0xa040f360  sb          $zero, -0xCA0($v0)
    ctx->pc = 0x13636cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 0));
    // 0x136370: 0x2484d410  addiu       $a0, $a0, -0x2BF0
    ctx->pc = 0x136370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956048));
    // 0x136374: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x136374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x136378: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x136378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13637c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13637cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136380: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136380u;
    SET_GPR_U32(ctx, 31, 0x136388u);
    ctx->pc = 0x136384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136380u;
            // 0x136384: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136388u; }
        if (ctx->pc != 0x136388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136388u; }
        if (ctx->pc != 0x136388u) { return; }
    }
    ctx->pc = 0x136388u;
label_136388:
    // 0x136388: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13638c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x136390: 0x906358c0  lbu         $v1, 0x58C0($v1)
    ctx->pc = 0x136390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x136394: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136398: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x136398u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x13639c: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x13639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1363a0:
    // 0x1363a0: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x1363A0u;
    SET_GPR_U32(ctx, 31, 0x1363A8u);
    ctx->pc = 0x1363A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1363A0u;
            // 0x1363a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363A8u; }
        if (ctx->pc != 0x1363A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363A8u; }
        if (ctx->pc != 0x1363A8u) { return; }
    }
    ctx->pc = 0x1363A8u;
label_1363a8:
    // 0x1363a8: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x1363A8u;
    {
        const bool branch_taken_0x1363a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363a8) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x1363B0u;
    // 0x1363b0: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x1363B0u;
    SET_GPR_U32(ctx, 31, 0x1363B8u);
    ctx->pc = 0x3236D0u;
    if (runtime->hasFunction(0x3236D0u)) {
        auto targetFn = runtime->lookupFunction(0x3236D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363B8u; }
        if (ctx->pc != 0x1363B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003236D0_0x3236d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363B8u; }
        if (ctx->pc != 0x1363B8u) { return; }
    }
    ctx->pc = 0x1363B8u;
label_1363b8:
    // 0x1363b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1363b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1363bc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1363bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1363c0: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x1363c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x1363c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1363c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1363c8:
    // 0x1363c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1363c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1363cc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1363CCu;
    SET_GPR_U32(ctx, 31, 0x1363D4u);
    ctx->pc = 0x1363D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1363CCu;
            // 0x1363d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363D4u; }
        if (ctx->pc != 0x1363D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363D4u; }
        if (ctx->pc != 0x1363D4u) { return; }
    }
    ctx->pc = 0x1363D4u;
label_1363d4:
    // 0x1363d4: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1363d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1363d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1363dc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1363DCu;
    SET_GPR_U32(ctx, 31, 0x1363E4u);
    ctx->pc = 0x1363E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1363DCu;
            // 0x1363e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363E4u; }
        if (ctx->pc != 0x1363E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363E4u; }
        if (ctx->pc != 0x1363E4u) { return; }
    }
    ctx->pc = 0x1363E4u;
label_1363e4:
    // 0x1363e4: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x1363e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1363e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1363e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1363ec: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1363ECu;
    SET_GPR_U32(ctx, 31, 0x1363F4u);
    ctx->pc = 0x1363F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1363ECu;
            // 0x1363f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363F4u; }
        if (ctx->pc != 0x1363F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1363F4u; }
        if (ctx->pc != 0x1363F4u) { return; }
    }
    ctx->pc = 0x1363F4u;
label_1363f4:
    // 0x1363f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1363f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1363f8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1363f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1363fc: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1363fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x136400: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136400u;
    {
        const bool branch_taken_0x136400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x136400) {
            ctx->pc = 0x136410u;
            goto label_136410;
        }
    }
    ctx->pc = 0x136408u;
    // 0x136408: 0xc0d4360  jal         func_350D80
    ctx->pc = 0x136408u;
    SET_GPR_U32(ctx, 31, 0x136410u);
    ctx->pc = 0x350D80u;
    if (runtime->hasFunction(0x350D80u)) {
        auto targetFn = runtime->lookupFunction(0x350D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136410u; }
        if (ctx->pc != 0x136410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350D80_0x350d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136410u; }
        if (ctx->pc != 0x136410u) { return; }
    }
    ctx->pc = 0x136410u;
label_136410:
    // 0x136410: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136414: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136418: 0x24847260  addiu       $a0, $a0, 0x7260
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29280));
    // 0x13641c: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x13641cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x136420: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x136420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x136424: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136428: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136428u;
    SET_GPR_U32(ctx, 31, 0x136430u);
    ctx->pc = 0x13642Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136428u;
            // 0x13642c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136430u; }
        if (ctx->pc != 0x136430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136430u; }
        if (ctx->pc != 0x136430u) { return; }
    }
    ctx->pc = 0x136430u;
label_136430:
    // 0x136430: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x136430u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136434: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136438: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x13643c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136440: 0x24635c20  addiu       $v1, $v1, 0x5C20
    ctx->pc = 0x136440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23584));
    // 0x136444: 0x24847260  addiu       $a0, $a0, 0x7260
    ctx->pc = 0x136444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29280));
    // 0x136448: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x136448u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13644c: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x13644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x136450: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x136450u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136454: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x136458: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x136458u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x13645c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x13645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136460: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x136460u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x136464: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136468: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x136468u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x13646c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x13646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x136470: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136470u;
    SET_GPR_U32(ctx, 31, 0x136478u);
    ctx->pc = 0x136474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136470u;
            // 0x136474: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136478u; }
        if (ctx->pc != 0x136478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136478u; }
        if (ctx->pc != 0x136478u) { return; }
    }
    ctx->pc = 0x136478u;
label_136478:
    // 0x136478: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x136478u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13647c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13647cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136480: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136484: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136488: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x13648c: 0x24635c20  addiu       $v1, $v1, 0x5C20
    ctx->pc = 0x13648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23584));
    // 0x136490: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x136490u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x136494: 0x24847710  addiu       $a0, $a0, 0x7710
    ctx->pc = 0x136494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
    // 0x136498: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x136498u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x13649c: 0x24a5c658  addiu       $a1, $a1, -0x39A8
    ctx->pc = 0x13649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
    // 0x1364a0: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x1364a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x1364a4: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1364a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1364a8: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1364a8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1364ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1364acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1364b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1364b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1364b4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1364b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1364b8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1364b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1364bc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1364BCu;
    SET_GPR_U32(ctx, 31, 0x1364C4u);
    ctx->pc = 0x1364C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1364BCu;
            // 0x1364c0: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364C4u; }
        if (ctx->pc != 0x1364C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1364C4u; }
        if (ctx->pc != 0x1364C4u) { return; }
    }
    ctx->pc = 0x1364C4u;
label_1364c4:
    // 0x1364c4: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x1364c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1364c8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1364c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1364cc: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1364ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1364d0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1364d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1364d4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1364d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1364d8: 0x24635c28  addiu       $v1, $v1, 0x5C28
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23592));
    // 0x1364dc: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x1364dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1364e0: 0x24847710  addiu       $a0, $a0, 0x7710
    ctx->pc = 0x1364e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
    // 0x1364e4: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x1364e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1364e8: 0x24a5c668  addiu       $a1, $a1, -0x3998
    ctx->pc = 0x1364e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952552));
    // 0x1364ec: 0xa1490002  sb          $t1, 0x2($t2)
    ctx->pc = 0x1364ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x1364f0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1364f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1364f4: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x1364f4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1364f8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1364f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1364fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1364fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136500: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x136500u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x136504: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x136508: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136508u;
    SET_GPR_U32(ctx, 31, 0x136510u);
    ctx->pc = 0x13650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136508u;
            // 0x13650c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136510u; }
        if (ctx->pc != 0x136510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136510u; }
        if (ctx->pc != 0x136510u) { return; }
    }
    ctx->pc = 0x136510u;
label_136510:
    // 0x136510: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x136510u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136518: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x13651c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x13651cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x136520: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136524: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x136524u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136528: 0xa1260000  sb          $a2, 0x0($t1)
    ctx->pc = 0x136528u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x13652c: 0x24635c28  addiu       $v1, $v1, 0x5C28
    ctx->pc = 0x13652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23592));
    // 0x136530: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x136530u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136534: 0x24848c50  addiu       $a0, $a0, -0x73B0
    ctx->pc = 0x136534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937680));
    // 0x136538: 0xa1280002  sb          $t0, 0x2($t1)
    ctx->pc = 0x136538u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x13653c: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x13653cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x136540: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x136540u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x136544: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x136544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136548: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x136548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x13654c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13654cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136550: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x136550u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x136554: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x136554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x136558: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136558u;
    SET_GPR_U32(ctx, 31, 0x136560u);
    ctx->pc = 0x13655Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136558u;
            // 0x13655c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136560u; }
        if (ctx->pc != 0x136560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136560u; }
        if (ctx->pc != 0x136560u) { return; }
    }
    ctx->pc = 0x136560u;
label_136560:
    // 0x136560: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x136560u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136564: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136568: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x136568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13656c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13656cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136570: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x136570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136574: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x136574u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x136578: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136578u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13657c: 0x24635c00  addiu       $v1, $v1, 0x5C00
    ctx->pc = 0x13657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23552));
    // 0x136580: 0xa1470001  sb          $a3, 0x1($t2)
    ctx->pc = 0x136580u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x136584: 0x24848c50  addiu       $a0, $a0, -0x73B0
    ctx->pc = 0x136584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937680));
    // 0x136588: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x136588u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x13658c: 0x24a5c678  addiu       $a1, $a1, -0x3988
    ctx->pc = 0x13658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952568));
    // 0x136590: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x136590u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x136594: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x136594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136598: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x136598u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x13659c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x13659cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1365a0: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x1365a0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1365a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1365a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365a8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1365a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1365ac: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1365acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1365b0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1365B0u;
    SET_GPR_U32(ctx, 31, 0x1365B8u);
    ctx->pc = 0x1365B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1365B0u;
            // 0x1365b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1365B8u; }
        if (ctx->pc != 0x1365B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1365B8u; }
        if (ctx->pc != 0x1365B8u) { return; }
    }
    ctx->pc = 0x1365B8u;
label_1365b8:
    // 0x1365b8: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x1365b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1365bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1365bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1365c0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1365c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1365c4: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x1365c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x1365c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1365c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1365cc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1365ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1365d0: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x1365d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1365d4: 0x24635c00  addiu       $v1, $v1, 0x5C00
    ctx->pc = 0x1365d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23552));
    // 0x1365d8: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x1365d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1365dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1365dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365e0: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x1365e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1365e4: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x1365e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x1365e8: 0xa4e00006  sh          $zero, 0x6($a3)
    ctx->pc = 0x1365e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1365ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1365ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1365f0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1365f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x1365f4: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x1365f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1365f8: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x1365f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1365fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1365fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136604: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x136604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_136608:
    // 0x136608: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x136608u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x13660c: 0x1a00003a  blez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13660Cu;
    {
        const bool branch_taken_0x13660c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x136610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13660Cu;
            // 0x136610: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13660c) {
            ctx->pc = 0x1366F8u;
            goto label_1366f8;
        }
    }
    ctx->pc = 0x136614u;
    // 0x136614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x136614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136618:
    // 0x136618: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x136618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x13661c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x13661cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136620: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x136620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
    // 0x136624: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x136624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x136628: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x136628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13662c: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x13662cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x136630: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136630u;
    SET_GPR_U32(ctx, 31, 0x136638u);
    ctx->pc = 0x136634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136630u;
            // 0x136634: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136638u; }
        if (ctx->pc != 0x136638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136638u; }
        if (ctx->pc != 0x136638u) { return; }
    }
    ctx->pc = 0x136638u;
label_136638:
    // 0x136638: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x136638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13663c: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x13663cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x136640: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x136640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x136644: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x136644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x136648: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x136648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x13664c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x13664cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136650: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x136650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x136654: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x136654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x136658: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x136658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x13665c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13665cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136660: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x136660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x136664: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x136664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x136668: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x136668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x13666c: 0x2254021  addu        $t0, $s1, $a1
    ctx->pc = 0x13666cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x136670: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x136670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x136674: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x136674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x136678: 0x926b0005  lbu         $t3, 0x5($s3)
    ctx->pc = 0x136678u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x13667c: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x13667cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x136680: 0x8d090160  lw          $t1, 0x160($t0)
    ctx->pc = 0x136680u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x136684: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x136684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x136688: 0x24a55c30  addiu       $a1, $a1, 0x5C30
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23600));
    // 0x13668c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13668cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x136690: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x136690u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x136694: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x136694u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x136698: 0x8d080110  lw          $t0, 0x110($t0)
    ctx->pc = 0x136698u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 272)));
    // 0x13669c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x13669cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1366a0: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x1366a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x1366a4: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1366a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1366a8: 0x8d4afff4  lw          $t2, -0xC($t2)
    ctx->pc = 0x1366a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967284)));
    // 0x1366ac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1366acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1366b0: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x1366b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x1366b4: 0xa4890028  sh          $t1, 0x28($a0)
    ctx->pc = 0x1366b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 9));
    // 0x1366b8: 0xa488002a  sh          $t0, 0x2A($a0)
    ctx->pc = 0x1366b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 8));
    // 0x1366bc: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x1366bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x1366c0: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1366c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x1366c4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x1366c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1366c8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1366c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1366cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1366ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1366d0: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x1366d0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x1366d4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1366d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1366d8: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x1366d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1366dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1366dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1366e0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1366e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1366e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1366e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1366e8: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x1366e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1366ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1366ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1366f0: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1366F0u;
    {
        const bool branch_taken_0x1366f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1366F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1366F0u;
            // 0x1366f4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1366f0) {
            ctx->pc = 0x136618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136618;
        }
    }
    ctx->pc = 0x1366F8u;
label_1366f8:
    // 0x1366f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1366f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1366fc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x1366fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136700: 0x26730248  addiu       $s3, $s3, 0x248
    ctx->pc = 0x136700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 584));
    // 0x136704: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x136704u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x136708: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x136708u;
    {
        const bool branch_taken_0x136708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136708u;
            // 0x13670c: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136708) {
            ctx->pc = 0x136608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136608;
        }
    }
    ctx->pc = 0x136710u;
    // 0x136710: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136714: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136718: 0x24847ba0  addiu       $a0, $a0, 0x7BA0
    ctx->pc = 0x136718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31648));
    // 0x13671c: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x13671cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136720: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x136720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x136724: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x136724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x136728: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136728u;
    SET_GPR_U32(ctx, 31, 0x136730u);
    ctx->pc = 0x13672Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136728u;
            // 0x13672c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136730u; }
        if (ctx->pc != 0x136730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136730u; }
        if (ctx->pc != 0x136730u) { return; }
    }
    ctx->pc = 0x136730u;
label_136730:
    // 0x136730: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x136730u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136734: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136738: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x136738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13673c: 0x2406018f  addiu       $a2, $zero, 0x18F
    ctx->pc = 0x13673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x136740: 0x3c074170  lui         $a3, 0x4170
    ctx->pc = 0x136740u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16752 << 16));
    // 0x136744: 0x240900f8  addiu       $t1, $zero, 0xF8
    ctx->pc = 0x136744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x136748: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136748u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13674c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13674cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136750: 0xa1440001  sb          $a0, 0x1($t2)
    ctx->pc = 0x136750u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x136754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136758: 0xa5450004  sh          $a1, 0x4($t2)
    ctx->pc = 0x136758u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x13675c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x13675cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136760: 0xa5460006  sh          $a2, 0x6($t2)
    ctx->pc = 0x136760u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x136764: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136768: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x136768u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x13676c: 0x24847ba0  addiu       $a0, $a0, 0x7BA0
    ctx->pc = 0x13676cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31648));
    // 0x136770: 0xa1400092  sb          $zero, 0x92($t2)
    ctx->pc = 0x136770u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x136774: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136778: 0xa5490090  sh          $t1, 0x90($t2)
    ctx->pc = 0x136778u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x13677c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x13677cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x136780: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x136780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x136784: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136784u;
    SET_GPR_U32(ctx, 31, 0x13678Cu);
    ctx->pc = 0x136788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136784u;
            // 0x136788: 0xac625c48  sw          $v0, 0x5C48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13678Cu; }
        if (ctx->pc != 0x13678Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13678Cu; }
        if (ctx->pc != 0x13678Cu) { return; }
    }
    ctx->pc = 0x13678Cu;
label_13678c:
    // 0x13678c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x13678cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136790: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136794: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x136794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136798: 0x24030185  addiu       $v1, $zero, 0x185
    ctx->pc = 0x136798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x13679c: 0x2404018f  addiu       $a0, $zero, 0x18F
    ctx->pc = 0x13679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x1367a0: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x1367a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x1367a4: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x1367a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x1367a8: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x1367a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1367ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1367acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1367b0: 0xa5030004  sh          $v1, 0x4($t0)
    ctx->pc = 0x1367b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1367b4: 0x240700f8  addiu       $a3, $zero, 0xF8
    ctx->pc = 0x1367b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x1367b8: 0xa5040006  sh          $a0, 0x6($t0)
    ctx->pc = 0x1367b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x1367bc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1367bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1367c0: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x1367c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x1367c4: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1367c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1367c8: 0xa1060092  sb          $a2, 0x92($t0)
    ctx->pc = 0x1367c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 146), (uint8_t)GPR_U32(ctx, 6));
    // 0x1367cc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1367ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1367d0: 0xa5070090  sh          $a3, 0x90($t0)
    ctx->pc = 0x1367d0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 144), (uint16_t)GPR_U32(ctx, 7));
    // 0x1367d4: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x1367d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
    // 0x1367d8: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x1367d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x1367dc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1367dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1367e0: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1367e4: 0xac625c4c  sw          $v0, 0x5C4C($v1)
    ctx->pc = 0x1367e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23628), GPR_U32(ctx, 2));
    // 0x1367e8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1367E8u;
    SET_GPR_U32(ctx, 31, 0x1367F0u);
    ctx->pc = 0x1367ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1367E8u;
            // 0x1367ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1367F0u; }
        if (ctx->pc != 0x1367F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1367F0u; }
        if (ctx->pc != 0x1367F0u) { return; }
    }
    ctx->pc = 0x1367F0u;
label_1367f0:
    // 0x1367f0: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x1367f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1367f4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1367f8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x1367f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x1367fc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1367fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136800: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x136800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x136804: 0x24080199  addiu       $t0, $zero, 0x199
    ctx->pc = 0x136804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x136808: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136808u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x13680c: 0x3c094170  lui         $t1, 0x4170
    ctx->pc = 0x13680cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16752 << 16));
    // 0x136810: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x136810u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136814: 0x24635c08  addiu       $v1, $v1, 0x5C08
    ctx->pc = 0x136814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23560));
    // 0x136818: 0xa5470004  sh          $a3, 0x4($t2)
    ctx->pc = 0x136818u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x13681c: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x13681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
    // 0x136820: 0xa5480006  sh          $t0, 0x6($t2)
    ctx->pc = 0x136820u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x136824: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136828: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x136828u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x13682c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x13682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x136830: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x136830u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x136834: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x136834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136838: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13683c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x13683cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x136840: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x136840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x136844: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136844u;
    SET_GPR_U32(ctx, 31, 0x13684Cu);
    ctx->pc = 0x136848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136844u;
            // 0x136848: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13684Cu; }
        if (ctx->pc != 0x13684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13684Cu; }
        if (ctx->pc != 0x13684Cu) { return; }
    }
    ctx->pc = 0x13684Cu;
label_13684c:
    // 0x13684c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x13684cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136854: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x136854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x136858: 0x24080156  addiu       $t0, $zero, 0x156
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x13685c: 0x24070199  addiu       $a3, $zero, 0x199
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x136860: 0x3c064170  lui         $a2, 0x4170
    ctx->pc = 0x136860u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16752 << 16));
    // 0x136864: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x136864u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x136868: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13686c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x13686cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136870: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136874: 0xa5280004  sh          $t0, 0x4($t1)
    ctx->pc = 0x136874u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x136878: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
    // 0x13687c: 0xa5270006  sh          $a3, 0x6($t1)
    ctx->pc = 0x13687cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x136880: 0xad260008  sw          $a2, 0x8($t1)
    ctx->pc = 0x136880u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 6));
    // 0x136884: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x136884u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x136888: 0xa06458c0  sb          $a0, 0x58C0($v1)
    ctx->pc = 0x136888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
    // 0x13688c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136890: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x136890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x136894: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x136894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_136898:
    // 0x136898: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x136898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13689c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x13689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1368a0: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x1368a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1368a4: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x136914u;
            goto label_136914;
        }
    }
    ctx->pc = 0x1368ACu;
    // 0x1368ac: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1368acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1368b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1368b4: 0x84845972  lh          $a0, 0x5972($a0)
    ctx->pc = 0x1368b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 22898)));
    // 0x1368b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1368bc: 0xa4645972  sh          $a0, 0x5972($v1)
    ctx->pc = 0x1368bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22898), (uint16_t)GPR_U32(ctx, 4));
    // 0x1368c0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1368c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1368c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1368c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1368c8: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1368C8u;
    {
        const bool branch_taken_0x1368c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1368c8) {
            ctx->pc = 0x1368F0u;
            goto label_1368f0;
        }
    }
    ctx->pc = 0x1368D0u;
    // 0x1368d0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1368d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1368d4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1368d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1368d8: 0xa4645972  sh          $a0, 0x5972($v1)
    ctx->pc = 0x1368d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22898), (uint16_t)GPR_U32(ctx, 4));
    // 0x1368dc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1368dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1368e0: 0x84645970  lh          $a0, 0x5970($v1)
    ctx->pc = 0x1368e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22896)));
    // 0x1368e4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1368e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1368e8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1368e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1368ec: 0xa4645970  sh          $a0, 0x5970($v1)
    ctx->pc = 0x1368ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22896), (uint16_t)GPR_U32(ctx, 4));
label_1368f0:
    // 0x1368f0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1368f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1368f4: 0x84635970  lh          $v1, 0x5970($v1)
    ctx->pc = 0x1368f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22896)));
    // 0x1368f8: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1368F8u;
    {
        const bool branch_taken_0x1368f8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1368f8) {
            ctx->pc = 0x136914u;
            goto label_136914;
        }
    }
    ctx->pc = 0x136900u;
    // 0x136900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136904: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136908: 0xa4645960  sh          $a0, 0x5960($v1)
    ctx->pc = 0x136908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22880), (uint16_t)GPR_U32(ctx, 4));
    // 0x13690c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13690cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136910: 0xa4605970  sh          $zero, 0x5970($v1)
    ctx->pc = 0x136910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22896), (uint16_t)GPR_U32(ctx, 0));
label_136914:
    // 0x136914: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x136914u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x136918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13691c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136920: 0x24c65c20  addiu       $a2, $a2, 0x5C20
    ctx->pc = 0x136920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23584));
    // 0x136924: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x136924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_136928:
    // 0x136928: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x136928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13692c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x13692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x136930: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x136930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x136934: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x136934u;
    {
        const bool branch_taken_0x136934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x136934) {
            ctx->pc = 0x136940u;
            goto label_136940;
        }
    }
    ctx->pc = 0x13693Cu;
    // 0x13693c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13693cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_136940:
    // 0x136940: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x136940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x136944: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x136944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136948: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x136948u;
    {
        const bool branch_taken_0x136948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136948u;
            // 0x13694c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136948) {
            ctx->pc = 0x136928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136928;
        }
    }
    ctx->pc = 0x136950u;
    // 0x136950: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136954: 0x14e30007  bne         $a3, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x136954u;
    {
        const bool branch_taken_0x136954 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x136954) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x13695Cu;
    // 0x13695c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x13695cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x136960: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136964u;
    {
        const bool branch_taken_0x136964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136964u;
            // 0x136968: 0xa06458c0  sb          $a0, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136964) {
            ctx->pc = 0x136974u;
            goto label_136974;
        }
    }
    ctx->pc = 0x13696Cu;
label_13696c:
    // 0x13696c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x13696cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136970: 0xa06458b8  sb          $a0, 0x58B8($v1)
    ctx->pc = 0x136970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22712), (uint8_t)GPR_U32(ctx, 4));
label_136974:
    // 0x136974: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x136974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_136978:
    // 0x136978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x136978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13697c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13697cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x136980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x136984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13698c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13698cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136994: 0x3e00008  jr          $ra
    ctx->pc = 0x136994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136994u;
            // 0x136998: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13699Cu;
    // 0x13699c: 0x0  nop
    ctx->pc = 0x13699cu;
    // NOP
label_1369a0:
    // 0x1369a0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1369a4: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1369a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1369a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1369ac: 0x24e7d9a0  addiu       $a3, $a3, -0x2660
    ctx->pc = 0x1369acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957472));
    // 0x1369b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1369b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1369b4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x1369b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1369b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1369b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1369bc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1369c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1369c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1369c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1369c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1369c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1369c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1369cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1369ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1369d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1369d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1369d4:
    // 0x1369d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1369d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1369d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1369dc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1369dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1369e0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1369e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1369e4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x1369e8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1369e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1369ec: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1369ECu;
    {
        const bool branch_taken_0x1369ec = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1369F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1369ECu;
            // 0x1369f0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1369ec) {
            ctx->pc = 0x1369D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1369d4;
        }
    }
    ctx->pc = 0x1369F4u;
    // 0x1369f4: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x1369f8: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1369f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1369fc: 0x24e7d9f0  addiu       $a3, $a3, -0x2610
    ctx->pc = 0x1369fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957552));
    // 0x136a00: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x136a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_136a04:
    // 0x136a04: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x136a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136a08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x136a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136a0c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x136a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x136a10: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x136a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x136a14: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136a18: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x136a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x136a1c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x136A1Cu;
    {
        const bool branch_taken_0x136a1c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x136A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136A1Cu;
            // 0x136a20: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a1c) {
            ctx->pc = 0x136A04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136a04;
        }
    }
    ctx->pc = 0x136A24u;
    // 0x136a24: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a28: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x136a2c: 0xc460da40  lwc1        $f0, -0x25C0($v1)
    ctx->pc = 0x136a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a30: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x136a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x136a34: 0xc481da44  lwc1        $f1, -0x25BC($a0)
    ctx->pc = 0x136a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136a38: 0x24e7da80  addiu       $a3, $a3, -0x2580
    ctx->pc = 0x136a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957696));
    // 0x136a3c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x136a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x136a40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x136a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x136a44: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a48: 0xc462da48  lwc1        $f2, -0x25B8($v1)
    ctx->pc = 0x136a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136a4c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x136a50: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x136a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x136a54: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x136a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x136a58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a5c: 0xc480da4c  lwc1        $f0, -0x25B4($a0)
    ctx->pc = 0x136a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a60: 0xc461da50  lwc1        $f1, -0x25B0($v1)
    ctx->pc = 0x136a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136a64: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x136a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x136a68: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x136a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x136a6c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x136a70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a74: 0xc460da54  lwc1        $f0, -0x25AC($v1)
    ctx->pc = 0x136a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a78: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x136a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x136a7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a80: 0xc461da60  lwc1        $f1, -0x25A0($v1)
    ctx->pc = 0x136a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136a84: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x136a88: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136a8c: 0xc460da64  lwc1        $f0, -0x259C($v1)
    ctx->pc = 0x136a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136a90: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x136a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x136a94: 0xc481da68  lwc1        $f1, -0x2598($a0)
    ctx->pc = 0x136a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136a98: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x136a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x136a9c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136aa0: 0xc460da6c  lwc1        $f0, -0x2594($v1)
    ctx->pc = 0x136aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136aa4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x136aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x136aa8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x136aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x136aac: 0xc481da70  lwc1        $f1, -0x2590($a0)
    ctx->pc = 0x136aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136ab0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x136ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x136ab4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x136ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x136ab8: 0xc460da74  lwc1        $f0, -0x258C($v1)
    ctx->pc = 0x136ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136abc: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x136abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x136ac0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x136ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_136ac4:
    // 0x136ac4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x136ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136ac8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x136ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136acc: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x136accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x136ad0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x136ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x136ad4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x136ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x136ad8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x136ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x136adc: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x136ADCu;
    {
        const bool branch_taken_0x136adc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x136AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136ADCu;
            // 0x136ae0: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136adc) {
            ctx->pc = 0x136AC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136ac4;
        }
    }
    ctx->pc = 0x136AE4u;
    // 0x136ae4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136ae8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x136ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x136aec: 0x906558c0  lbu         $a1, 0x58C0($v1)
    ctx->pc = 0x136aecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x136af0: 0x50a40163  beql        $a1, $a0, . + 4 + (0x163 << 2)
    ctx->pc = 0x136AF0u;
    {
        const bool branch_taken_0x136af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x136af0) {
            ctx->pc = 0x136AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136AF0u;
            // 0x136af4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x137080u;
            goto label_137080;
        }
    }
    ctx->pc = 0x136AF8u;
    // 0x136af8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x136af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x136afc: 0x50a30076  beql        $a1, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x136AFCu;
    {
        const bool branch_taken_0x136afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x136afc) {
            ctx->pc = 0x136B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136AFCu;
            // 0x136b00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136CD8u;
            goto label_136cd8;
        }
    }
    ctx->pc = 0x136B04u;
    // 0x136b04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136b08: 0x10a30060  beq         $a1, $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x136B08u;
    {
        const bool branch_taken_0x136b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x136b08) {
            ctx->pc = 0x136C8Cu;
            goto label_136c8c;
        }
    }
    ctx->pc = 0x136B10u;
    // 0x136b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b14: 0x10a30046  beq         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x136B14u;
    {
        const bool branch_taken_0x136b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x136b14) {
            ctx->pc = 0x136C30u;
            goto label_136c30;
        }
    }
    ctx->pc = 0x136B1Cu;
    // 0x136b1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136B1Cu;
    {
        const bool branch_taken_0x136b1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x136b1c) {
            ctx->pc = 0x136B2Cu;
            goto label_136b2c;
        }
    }
    ctx->pc = 0x136B24u;
    // 0x136b24: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x136B24u;
    {
        const bool branch_taken_0x136b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136B24u;
            // 0x136b28: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b24) {
            ctx->pc = 0x13708Cu;
            goto label_13708c;
        }
    }
    ctx->pc = 0x136B2Cu;
label_136b2c:
    // 0x136b2c: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x136B2Cu;
    SET_GPR_U32(ctx, 31, 0x136B34u);
    ctx->pc = 0x1A0C00u;
    if (runtime->hasFunction(0x1A0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1A0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B34u; }
        if (ctx->pc != 0x136B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0C00_0x1a0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B34u; }
        if (ctx->pc != 0x136B34u) { return; }
    }
    ctx->pc = 0x136B34u;
label_136b34:
    // 0x136b34: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x136b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x136b38: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x136b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x136b3c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x136b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b40: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x136B40u;
    SET_GPR_U32(ctx, 31, 0x136B48u);
    ctx->pc = 0x136B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B40u;
            // 0x136b44: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B48u; }
        if (ctx->pc != 0x136B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B48u; }
        if (ctx->pc != 0x136B48u) { return; }
    }
    ctx->pc = 0x136B48u;
label_136b48:
    // 0x136b48: 0xc0c8ad8  jal         func_322B60
    ctx->pc = 0x136B48u;
    SET_GPR_U32(ctx, 31, 0x136B50u);
    ctx->pc = 0x322B60u;
    if (runtime->hasFunction(0x322B60u)) {
        auto targetFn = runtime->lookupFunction(0x322B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B50u; }
        if (ctx->pc != 0x136B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B60_0x322b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B50u; }
        if (ctx->pc != 0x136B50u) { return; }
    }
    ctx->pc = 0x136B50u;
label_136b50:
    // 0x136b50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b58: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136B58u;
    SET_GPR_U32(ctx, 31, 0x136B60u);
    ctx->pc = 0x136B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B58u;
            // 0x136b5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B60u; }
        if (ctx->pc != 0x136B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B60u; }
        if (ctx->pc != 0x136B60u) { return; }
    }
    ctx->pc = 0x136B60u;
label_136b60:
    // 0x136b60: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x136b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x136b64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b68: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136B68u;
    SET_GPR_U32(ctx, 31, 0x136B70u);
    ctx->pc = 0x136B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B68u;
            // 0x136b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B70u; }
        if (ctx->pc != 0x136B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B70u; }
        if (ctx->pc != 0x136B70u) { return; }
    }
    ctx->pc = 0x136B70u;
label_136b70:
    // 0x136b70: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x136b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x136b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b78: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136B78u;
    SET_GPR_U32(ctx, 31, 0x136B80u);
    ctx->pc = 0x136B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B78u;
            // 0x136b7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B80u; }
        if (ctx->pc != 0x136B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136B80u; }
        if (ctx->pc != 0x136B80u) { return; }
    }
    ctx->pc = 0x136B80u;
label_136b80:
    // 0x136b80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136b84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136b88: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x136b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x136b8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136b90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136b94: 0x8c4400ec  lw          $a0, 0xEC($v0)
    ctx->pc = 0x136b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x136b98: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136B98u;
    SET_GPR_U32(ctx, 31, 0x136BA0u);
    ctx->pc = 0x136B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136B98u;
            // 0x136b9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BA0u; }
        if (ctx->pc != 0x136BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BA0u; }
        if (ctx->pc != 0x136BA0u) { return; }
    }
    ctx->pc = 0x136BA0u;
label_136ba0:
    // 0x136ba0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ba8: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x136ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x136bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136bb0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136bb4: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x136bb8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136BB8u;
    SET_GPR_U32(ctx, 31, 0x136BC0u);
    ctx->pc = 0x136BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136BB8u;
            // 0x136bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BC0u; }
        if (ctx->pc != 0x136BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BC0u; }
        if (ctx->pc != 0x136BC0u) { return; }
    }
    ctx->pc = 0x136BC0u;
label_136bc0:
    // 0x136bc0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136bc4: 0x806358a0  lb          $v1, 0x58A0($v1)
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22688)));
    // 0x136bc8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x136BC8u;
    {
        const bool branch_taken_0x136bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136bc8) {
            ctx->pc = 0x136BF0u;
            goto label_136bf0;
        }
    }
    ctx->pc = 0x136BD0u;
    // 0x136bd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136bd8: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x136bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x136bdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136be0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136be4: 0x8c4400cc  lw          $a0, 0xCC($v0)
    ctx->pc = 0x136be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x136be8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136BE8u;
    SET_GPR_U32(ctx, 31, 0x136BF0u);
    ctx->pc = 0x136BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136BE8u;
            // 0x136bec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BF0u; }
        if (ctx->pc != 0x136BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136BF0u; }
        if (ctx->pc != 0x136BF0u) { return; }
    }
    ctx->pc = 0x136BF0u;
label_136bf0:
    // 0x136bf0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136bf4: 0x806358a1  lb          $v1, 0x58A1($v1)
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22689)));
    // 0x136bf8: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x136BF8u;
    {
        const bool branch_taken_0x136bf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x136bf8) {
            ctx->pc = 0x136BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136BF8u;
            // 0x136bfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136C24u;
            goto label_136c24;
        }
    }
    ctx->pc = 0x136C00u;
    // 0x136c00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136c08: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x136c08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x136c0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136c10: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136c14: 0x8c4400d8  lw          $a0, 0xD8($v0)
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x136c18: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136C18u;
    SET_GPR_U32(ctx, 31, 0x136C20u);
    ctx->pc = 0x136C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136C18u;
            // 0x136c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C20u; }
        if (ctx->pc != 0x136C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C20u; }
        if (ctx->pc != 0x136C20u) { return; }
    }
    ctx->pc = 0x136C20u;
label_136c20:
    // 0x136c20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136c24:
    // 0x136c24: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136c28: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x136C28u;
    {
        const bool branch_taken_0x136c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136C28u;
            // 0x136c2c: 0xa06458c0  sb          $a0, 0x58C0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c28) {
            ctx->pc = 0x137088u;
            goto label_137088;
        }
    }
    ctx->pc = 0x136C30u;
label_136c30:
    // 0x136c30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136c34: 0x9042db55  lbu         $v0, -0x24AB($v0)
    ctx->pc = 0x136c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957909)));
    // 0x136c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136c3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136c40: 0x8c4400ec  lw          $a0, 0xEC($v0)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x136c44: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x136C44u;
    SET_GPR_U32(ctx, 31, 0x136C4Cu);
    ctx->pc = 0x136C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136C44u;
            // 0x136c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C4Cu; }
        if (ctx->pc != 0x136C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C4Cu; }
        if (ctx->pc != 0x136C4Cu) { return; }
    }
    ctx->pc = 0x136C4Cu;
label_136c4c:
    // 0x136c4c: 0x1040010e  beqz        $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x136C4Cu;
    {
        const bool branch_taken_0x136c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c4c) {
            ctx->pc = 0x137088u;
            goto label_137088;
        }
    }
    ctx->pc = 0x136C54u;
    // 0x136c54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x136c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x136c58: 0x9042dd9d  lbu         $v0, -0x2263($v0)
    ctx->pc = 0x136c58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294958493)));
    // 0x136c5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x136c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x136c60: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x136c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136c64: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x136c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x136c68: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x136C68u;
    SET_GPR_U32(ctx, 31, 0x136C70u);
    ctx->pc = 0x136C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136C68u;
            // 0x136c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (runtime->hasFunction(0x323B40u)) {
        auto targetFn = runtime->lookupFunction(0x323B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C70u; }
        if (ctx->pc != 0x136C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323B40_0x323b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C70u; }
        if (ctx->pc != 0x136C70u) { return; }
    }
    ctx->pc = 0x136C70u;
label_136c70:
    // 0x136c70: 0x10400105  beqz        $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x136C70u;
    {
        const bool branch_taken_0x136c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136c70) {
            ctx->pc = 0x137088u;
            goto label_137088;
        }
    }
    ctx->pc = 0x136C78u;
    // 0x136c78: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136c7c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x136c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x136c80: 0x906358c0  lbu         $v1, 0x58C0($v1)
    ctx->pc = 0x136c80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22720)));
    // 0x136c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x136c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x136c88: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x136c88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
label_136c8c:
    // 0x136c8c: 0xc0c8db4  jal         func_3236D0
    ctx->pc = 0x136C8Cu;
    SET_GPR_U32(ctx, 31, 0x136C94u);
    ctx->pc = 0x3236D0u;
    if (runtime->hasFunction(0x3236D0u)) {
        auto targetFn = runtime->lookupFunction(0x3236D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C94u; }
        if (ctx->pc != 0x136C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003236D0_0x3236d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136C94u; }
        if (ctx->pc != 0x136C94u) { return; }
    }
    ctx->pc = 0x136C94u;
label_136c94:
    // 0x136c94: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x136c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x136c98: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x136c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x136c9c: 0xa04358c0  sb          $v1, 0x58C0($v0)
    ctx->pc = 0x136c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22720), (uint8_t)GPR_U32(ctx, 3));
    // 0x136ca0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136ca4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136ca8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136cac: 0xa0645d28  sb          $a0, 0x5D28($v1)
    ctx->pc = 0x136cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 23848), (uint8_t)GPR_U32(ctx, 4));
    // 0x136cb0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x136cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x136cb4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x136cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x136cb8: 0xa040f360  sb          $zero, -0xCA0($v0)
    ctx->pc = 0x136cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294964064), (uint8_t)GPR_U32(ctx, 0));
    // 0x136cbc: 0x2484d410  addiu       $a0, $a0, -0x2BF0
    ctx->pc = 0x136cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956048));
    // 0x136cc0: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x136cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x136cc4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x136cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x136cc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136cc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ccc: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136CCCu;
    SET_GPR_U32(ctx, 31, 0x136CD4u);
    ctx->pc = 0x136CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136CCCu;
            // 0x136cd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CD4u; }
        if (ctx->pc != 0x136CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CD4u; }
        if (ctx->pc != 0x136CD4u) { return; }
    }
    ctx->pc = 0x136CD4u;
label_136cd4:
    // 0x136cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x136cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136cd8:
    // 0x136cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cdc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136CDCu;
    SET_GPR_U32(ctx, 31, 0x136CE4u);
    ctx->pc = 0x136CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136CDCu;
            // 0x136ce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CE4u; }
        if (ctx->pc != 0x136CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CE4u; }
        if (ctx->pc != 0x136CE4u) { return; }
    }
    ctx->pc = 0x136CE4u;
label_136ce4:
    // 0x136ce4: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x136ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x136ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136cec: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136CECu;
    SET_GPR_U32(ctx, 31, 0x136CF4u);
    ctx->pc = 0x136CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136CECu;
            // 0x136cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CF4u; }
        if (ctx->pc != 0x136CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136CF4u; }
        if (ctx->pc != 0x136CF4u) { return; }
    }
    ctx->pc = 0x136CF4u;
label_136cf4:
    // 0x136cf4: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x136cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x136cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136cfc: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x136CFCu;
    SET_GPR_U32(ctx, 31, 0x136D04u);
    ctx->pc = 0x136D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136CFCu;
            // 0x136d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (runtime->hasFunction(0x323890u)) {
        auto targetFn = runtime->lookupFunction(0x323890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D04u; }
        if (ctx->pc != 0x136D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323890_0x323890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D04u; }
        if (ctx->pc != 0x136D04u) { return; }
    }
    ctx->pc = 0x136D04u;
label_136d04:
    // 0x136d04: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x136d08: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136d0c: 0x24848c50  addiu       $a0, $a0, -0x73B0
    ctx->pc = 0x136d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937680));
    // 0x136d10: 0x24a5c640  addiu       $a1, $a1, -0x39C0
    ctx->pc = 0x136d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    // 0x136d14: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x136d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136d18: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136d1c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136D1Cu;
    SET_GPR_U32(ctx, 31, 0x136D24u);
    ctx->pc = 0x136D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D1Cu;
            // 0x136d20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D24u; }
        if (ctx->pc != 0x136D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D24u; }
        if (ctx->pc != 0x136D24u) { return; }
    }
    ctx->pc = 0x136D24u;
label_136d24:
    // 0x136d24: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x136d24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136d28: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136d2c: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x136d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x136d30: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136d34: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x136d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136d38: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x136d38u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x136d3c: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x136d40: 0x24635c00  addiu       $v1, $v1, 0x5C00
    ctx->pc = 0x136d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23552));
    // 0x136d44: 0xa1470001  sb          $a3, 0x1($t2)
    ctx->pc = 0x136d44u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x136d48: 0x24848c50  addiu       $a0, $a0, -0x73B0
    ctx->pc = 0x136d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937680));
    // 0x136d4c: 0xa5400004  sh          $zero, 0x4($t2)
    ctx->pc = 0x136d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x136d50: 0x24a5c678  addiu       $a1, $a1, -0x3988
    ctx->pc = 0x136d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952568));
    // 0x136d54: 0xa5400006  sh          $zero, 0x6($t2)
    ctx->pc = 0x136d54u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x136d58: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x136d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x136d5c: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x136d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x136d60: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x136d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136d64: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x136d64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x136d68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136d68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d6c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x136d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x136d70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x136d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x136d74: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136D74u;
    SET_GPR_U32(ctx, 31, 0x136D7Cu);
    ctx->pc = 0x136D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D74u;
            // 0x136d78: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D7Cu; }
        if (ctx->pc != 0x136D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D7Cu; }
        if (ctx->pc != 0x136D7Cu) { return; }
    }
    ctx->pc = 0x136D7Cu;
label_136d7c:
    // 0x136d7c: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x136d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136d80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136d84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136d88: 0x3c13009c  lui         $s3, 0x9C
    ctx->pc = 0x136d88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)156 << 16));
    // 0x136d8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x136d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136d90: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x136d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x136d94: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x136d94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x136d98: 0x24635c00  addiu       $v1, $v1, 0x5C00
    ctx->pc = 0x136d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23552));
    // 0x136d9c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x136d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x136da0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x136da0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136da4: 0xa4e00004  sh          $zero, 0x4($a3)
    ctx->pc = 0x136da4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x136da8: 0x2673db50  addiu       $s3, $s3, -0x24B0
    ctx->pc = 0x136da8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957904));
    // 0x136dac: 0xa4e00006  sh          $zero, 0x6($a3)
    ctx->pc = 0x136dacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x136db0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x136db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136db4: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x136db4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x136db8: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x136db8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x136dbc: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x136dbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x136dc0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x136dc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x136dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x136dc8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x136dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_136dcc:
    // 0x136dcc: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x136dccu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x136dd0: 0x1a00003d  blez        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x136DD0u;
    {
        const bool branch_taken_0x136dd0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x136DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DD0u;
            // 0x136dd4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dd0) {
            ctx->pc = 0x136EC8u;
            goto label_136ec8;
        }
    }
    ctx->pc = 0x136DD8u;
    // 0x136dd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x136dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ddc: 0x0  nop
    ctx->pc = 0x136ddcu;
    // NOP
label_136de0:
    // 0x136de0: 0x3c040014  lui         $a0, 0x14
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    // 0x136de4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136de8: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
    // 0x136dec: 0x24a5c650  addiu       $a1, $a1, -0x39B0
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952528));
    // 0x136df0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x136df4: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x136df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x136df8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136DF8u;
    SET_GPR_U32(ctx, 31, 0x136E00u);
    ctx->pc = 0x136DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DF8u;
            // 0x136dfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E00u; }
        if (ctx->pc != 0x136E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E00u; }
        if (ctx->pc != 0x136E00u) { return; }
    }
    ctx->pc = 0x136E00u;
label_136e00:
    // 0x136e00: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x136e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136e04: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x136e08: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x136e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x136e0c: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x136e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x136e10: 0x3c053f99  lui         $a1, 0x3F99
    ctx->pc = 0x136e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16281 << 16));
    // 0x136e14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x136e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136e18: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x136e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
    // 0x136e1c: 0x34a7999a  ori         $a3, $a1, 0x999A
    ctx->pc = 0x136e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x136e20: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x136e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x136e24: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x136e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x136e28: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x136e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x136e2c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x136e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x136e30: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x136e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x136e34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x136e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136e38: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x136e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x136e3c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x136e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x136e40: 0x926b0005  lbu         $t3, 0x5($s3)
    ctx->pc = 0x136e40u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x136e44: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x136e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x136e48: 0x8ca90160  lw          $t1, 0x160($a1)
    ctx->pc = 0x136e48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x136e4c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x136e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x136e50: 0x8ca80110  lw          $t0, 0x110($a1)
    ctx->pc = 0x136e50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x136e54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x136e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x136e58: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x136e58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x136e5c: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x136e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x136e60: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x136e60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x136e64: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x136e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x136e68: 0x2ca5021  addu        $t2, $s6, $t2
    ctx->pc = 0x136e68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x136e6c: 0x24a55c30  addiu       $a1, $a1, 0x5C30
    ctx->pc = 0x136e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23600));
    // 0x136e70: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x136e70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x136e74: 0x8d4afff4  lw          $t2, -0xC($t2)
    ctx->pc = 0x136e74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967284)));
    // 0x136e78: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x136e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x136e7c: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x136e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x136e80: 0xa4890028  sh          $t1, 0x28($a0)
    ctx->pc = 0x136e80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 9));
    // 0x136e84: 0xa488002a  sh          $t0, 0x2A($a0)
    ctx->pc = 0x136e84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 8));
    // 0x136e88: 0xac87002c  sw          $a3, 0x2C($a0)
    ctx->pc = 0x136e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 7));
    // 0x136e8c: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x136e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x136e90: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x136e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x136e94: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x136e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136e98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x136e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x136e9c: 0x92700005  lbu         $s0, 0x5($s3)
    ctx->pc = 0x136e9cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
    // 0x136ea0: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x136ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x136ea4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x136ea8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x136ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x136eac: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x136eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x136eb0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x136eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x136eb4: 0x290182a  slt         $v1, $s4, $s0
    ctx->pc = 0x136eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x136eb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x136eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x136ebc: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x136EBCu;
    {
        const bool branch_taken_0x136ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EBCu;
            // 0x136ec0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ebc) {
            ctx->pc = 0x136DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136de0;
        }
    }
    ctx->pc = 0x136EC4u;
    // 0x136ec4: 0x0  nop
    ctx->pc = 0x136ec4u;
    // NOP
label_136ec8:
    // 0x136ec8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x136ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x136ecc: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x136eccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x136ed0: 0x26730248  addiu       $s3, $s3, 0x248
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 584));
    // 0x136ed4: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x136ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x136ed8: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x136ED8u;
    {
        const bool branch_taken_0x136ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136ED8u;
            // 0x136edc: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ed8) {
            ctx->pc = 0x136DCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136dcc;
        }
    }
    ctx->pc = 0x136EE0u;
    // 0x136ee0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136ee4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136ee8: 0x24847ba0  addiu       $a0, $a0, 0x7BA0
    ctx->pc = 0x136ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31648));
    // 0x136eec: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136ef0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x136ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x136ef4: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x136ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x136ef8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136EF8u;
    SET_GPR_U32(ctx, 31, 0x136F00u);
    ctx->pc = 0x136EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136EF8u;
            // 0x136efc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F00u; }
        if (ctx->pc != 0x136F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F00u; }
        if (ctx->pc != 0x136F00u) { return; }
    }
    ctx->pc = 0x136F00u;
label_136f00:
    // 0x136f00: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x136f00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136f04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136f08: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x136f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x136f0c: 0x2406018f  addiu       $a2, $zero, 0x18F
    ctx->pc = 0x136f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x136f10: 0x3c074170  lui         $a3, 0x4170
    ctx->pc = 0x136f10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16752 << 16));
    // 0x136f14: 0x240900f8  addiu       $t1, $zero, 0xF8
    ctx->pc = 0x136f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x136f18: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136f18u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x136f1c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136f20: 0xa1440001  sb          $a0, 0x1($t2)
    ctx->pc = 0x136f20u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x136f24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136f24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f28: 0xa5450004  sh          $a1, 0x4($t2)
    ctx->pc = 0x136f28u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x136f2c: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136f30: 0xa5460006  sh          $a2, 0x6($t2)
    ctx->pc = 0x136f30u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x136f34: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136f38: 0xad470008  sw          $a3, 0x8($t2)
    ctx->pc = 0x136f38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 7));
    // 0x136f3c: 0x24847ba0  addiu       $a0, $a0, 0x7BA0
    ctx->pc = 0x136f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31648));
    // 0x136f40: 0xa1400092  sb          $zero, 0x92($t2)
    ctx->pc = 0x136f40u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 146), (uint8_t)GPR_U32(ctx, 0));
    // 0x136f44: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136f48: 0xa5490090  sh          $t1, 0x90($t2)
    ctx->pc = 0x136f48u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 144), (uint16_t)GPR_U32(ctx, 9));
    // 0x136f4c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x136f50: 0x24070094  addiu       $a3, $zero, 0x94
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x136f54: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136F54u;
    SET_GPR_U32(ctx, 31, 0x136F5Cu);
    ctx->pc = 0x136F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F54u;
            // 0x136f58: 0xac625c48  sw          $v0, 0x5C48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F5Cu; }
        if (ctx->pc != 0x136F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F5Cu; }
        if (ctx->pc != 0x136F5Cu) { return; }
    }
    ctx->pc = 0x136F5Cu;
label_136f5c:
    // 0x136f5c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x136f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136f60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136f64: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x136f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136f68: 0x24030185  addiu       $v1, $zero, 0x185
    ctx->pc = 0x136f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x136f6c: 0x2404018f  addiu       $a0, $zero, 0x18F
    ctx->pc = 0x136f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 399));
    // 0x136f70: 0x3c054170  lui         $a1, 0x4170
    ctx->pc = 0x136f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16752 << 16));
    // 0x136f74: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x136f74u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x136f78: 0xa1070001  sb          $a3, 0x1($t0)
    ctx->pc = 0x136f78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x136f7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x136f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136f80: 0xa5030004  sh          $v1, 0x4($t0)
    ctx->pc = 0x136f80u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x136f84: 0x240700f8  addiu       $a3, $zero, 0xF8
    ctx->pc = 0x136f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x136f88: 0xa5040006  sh          $a0, 0x6($t0)
    ctx->pc = 0x136f88u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x136f8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136f90: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x136f90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x136f94: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136f98: 0xa1060092  sb          $a2, 0x92($t0)
    ctx->pc = 0x136f98u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 146), (uint8_t)GPR_U32(ctx, 6));
    // 0x136f9c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136fa0: 0xa5070090  sh          $a3, 0x90($t0)
    ctx->pc = 0x136fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 144), (uint16_t)GPR_U32(ctx, 7));
    // 0x136fa4: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x136fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
    // 0x136fa8: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136fac: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x136facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x136fb0: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x136fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136fb4: 0xac625c4c  sw          $v0, 0x5C4C($v1)
    ctx->pc = 0x136fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23628), GPR_U32(ctx, 2));
    // 0x136fb8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x136FB8u;
    SET_GPR_U32(ctx, 31, 0x136FC0u);
    ctx->pc = 0x136FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136FB8u;
            // 0x136fbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FC0u; }
        if (ctx->pc != 0x136FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FC0u; }
        if (ctx->pc != 0x136FC0u) { return; }
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x136fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x136fc4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x136fc8: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x136fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    // 0x136fcc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x136fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x136fd0: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x136fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x136fd4: 0x24080199  addiu       $t0, $zero, 0x199
    ctx->pc = 0x136fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x136fd8: 0xa1400000  sb          $zero, 0x0($t2)
    ctx->pc = 0x136fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x136fdc: 0x3c094170  lui         $t1, 0x4170
    ctx->pc = 0x136fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16752 << 16));
    // 0x136fe0: 0xa1400001  sb          $zero, 0x1($t2)
    ctx->pc = 0x136fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x136fe4: 0x24635c08  addiu       $v1, $v1, 0x5C08
    ctx->pc = 0x136fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23560));
    // 0x136fe8: 0xa5470004  sh          $a3, 0x4($t2)
    ctx->pc = 0x136fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x136fec: 0x24847fc0  addiu       $a0, $a0, 0x7FC0
    ctx->pc = 0x136fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32704));
    // 0x136ff0: 0xa5480006  sh          $t0, 0x6($t2)
    ctx->pc = 0x136ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x136ff4: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x136ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x136ff8: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x136ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x136ffc: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x136ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137000: 0x91490000  lbu         $t1, 0x0($t2)
    ctx->pc = 0x137000u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x137004: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x137004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x137008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x137008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13700c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x13700cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x137010: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x137010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x137014: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x137014u;
    SET_GPR_U32(ctx, 31, 0x13701Cu);
    ctx->pc = 0x137018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x137014u;
            // 0x137018: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13701Cu; }
        if (ctx->pc != 0x13701Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13701Cu; }
        if (ctx->pc != 0x13701Cu) { return; }
    }
    ctx->pc = 0x13701Cu;
label_13701c:
    // 0x13701c: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x13701cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x137020: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x137024: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x137024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x137028: 0x24040156  addiu       $a0, $zero, 0x156
    ctx->pc = 0x137028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x13702c: 0x24060199  addiu       $a2, $zero, 0x199
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
    // 0x137030: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x137034: 0xa1250000  sb          $a1, 0x0($t1)
    ctx->pc = 0x137034u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x137038: 0x25085c08  addiu       $t0, $t0, 0x5C08
    ctx->pc = 0x137038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23560));
    // 0x13703c: 0xa1200001  sb          $zero, 0x1($t1)
    ctx->pc = 0x13703cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x137040: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x137044: 0xa5240004  sh          $a0, 0x4($t1)
    ctx->pc = 0x137044u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x137048: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x137048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13704c: 0xa5260006  sh          $a2, 0x6($t1)
    ctx->pc = 0x13704cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x137050: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x137054: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x137054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x137058: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x137058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13705c: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x13705cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x137060: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137064: 0xa06658c0  sb          $a2, 0x58C0($v1)
    ctx->pc = 0x137064u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22720), (uint8_t)GPR_U32(ctx, 6));
    // 0x137068: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x137068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x13706c: 0xa0a7db51  sb          $a3, -0x24AF($a1)
    ctx->pc = 0x13706cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957905), (uint8_t)GPR_U32(ctx, 7));
    // 0x137070: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x137070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x137074: 0xa087dd99  sb          $a3, -0x2267($a0)
    ctx->pc = 0x137074u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294958489), (uint8_t)GPR_U32(ctx, 7));
    // 0x137078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x137078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13707c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137080:
    // 0x137080: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x137080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x137084: 0xa06458b8  sb          $a0, 0x58B8($v1)
    ctx->pc = 0x137084u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22712), (uint8_t)GPR_U32(ctx, 4));
label_137088:
    // 0x137088: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x137088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_13708c:
    // 0x13708c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13708cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x137090: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137090u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x137094: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x137094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137098: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x137098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13709c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13709cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1370a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1370a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1370a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1370a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1370a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1370A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1370ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1370A8u;
            // 0x1370ac: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1370B0u;
    ctx->pc = 0x1370b0u;
}
