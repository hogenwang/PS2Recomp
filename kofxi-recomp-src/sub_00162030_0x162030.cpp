#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162030
// Address: 0x162030 - 0x162d30
void sub_00162030_0x162030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162030_0x162030");
#endif

    switch (ctx->pc) {
        case 0x162040u: goto label_162040;
        case 0x162070u: goto label_162070;
        case 0x1620b0u: goto label_1620b0;
        case 0x162124u: goto label_162124;
        case 0x1622fcu: goto label_1622fc;
        case 0x162360u: goto label_162360;
        case 0x162450u: goto label_162450;
        case 0x162474u: goto label_162474;
        case 0x162498u: goto label_162498;
        case 0x1624bcu: goto label_1624bc;
        case 0x1624f0u: goto label_1624f0;
        case 0x16252cu: goto label_16252c;
        case 0x162538u: goto label_162538;
        case 0x16253cu: goto label_16253c;
        case 0x162620u: goto label_162620;
        case 0x162648u: goto label_162648;
        case 0x162658u: goto label_162658;
        case 0x1626b0u: goto label_1626b0;
        case 0x1626c0u: goto label_1626c0;
        case 0x1626d4u: goto label_1626d4;
        case 0x1626e0u: goto label_1626e0;
        case 0x1626fcu: goto label_1626fc;
        case 0x1627dcu: goto label_1627dc;
        case 0x1627e8u: goto label_1627e8;
        case 0x162844u: goto label_162844;
        case 0x162868u: goto label_162868;
        case 0x162884u: goto label_162884;
        case 0x1628a8u: goto label_1628a8;
        case 0x1628c8u: goto label_1628c8;
        case 0x162940u: goto label_162940;
        case 0x16295cu: goto label_16295c;
        case 0x162978u: goto label_162978;
        case 0x162994u: goto label_162994;
        case 0x1629a4u: goto label_1629a4;
        case 0x1629ecu: goto label_1629ec;
        case 0x1629f4u: goto label_1629f4;
        case 0x162a0cu: goto label_162a0c;
        case 0x162a30u: goto label_162a30;
        case 0x162a4cu: goto label_162a4c;
        case 0x162a68u: goto label_162a68;
        case 0x162a84u: goto label_162a84;
        case 0x162a94u: goto label_162a94;
        case 0x162adcu: goto label_162adc;
        case 0x162af4u: goto label_162af4;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b30u: goto label_162b30;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b68u: goto label_162b68;
        case 0x162b90u: goto label_162b90;
        case 0x162ba0u: goto label_162ba0;
        case 0x162be0u: goto label_162be0;
        case 0x162be8u: goto label_162be8;
        case 0x162c00u: goto label_162c00;
        case 0x162c20u: goto label_162c20;
        case 0x162c3cu: goto label_162c3c;
        case 0x162c58u: goto label_162c58;
        case 0x162c74u: goto label_162c74;
        case 0x162c8cu: goto label_162c8c;
        case 0x162cf0u: goto label_162cf0;
        case 0x162cf8u: goto label_162cf8;
        case 0x162d10u: goto label_162d10;
        default: break;
    }

    ctx->pc = 0x162030u;

    // 0x162030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162038: 0xc0587a0  jal         func_161E80
    ctx->pc = 0x162038u;
    SET_GPR_U32(ctx, 31, 0x162040u);
    ctx->pc = 0x161E80u;
    if (runtime->hasFunction(0x161E80u)) {
        auto targetFn = runtime->lookupFunction(0x161E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162040u; }
        if (ctx->pc != 0x162040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161E80_0x161e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162040u; }
        if (ctx->pc != 0x162040u) { return; }
    }
    ctx->pc = 0x162040u;
label_162040:
    // 0x162040: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162040u;
    {
        const bool branch_taken_0x162040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162040) {
            ctx->pc = 0x162044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162040u;
            // 0x162044: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162058u;
            goto label_162058;
        }
    }
    ctx->pc = 0x162048u;
    // 0x162048: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x162048u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16204c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x16204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x162050: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x162050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x162054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162058:
    // 0x162058: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x162058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16205c: 0x3e00008  jr          $ra
    ctx->pc = 0x16205Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16205Cu;
            // 0x162060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162064u;
    // 0x162064: 0x0  nop
    ctx->pc = 0x162064u;
    // NOP
    // 0x162068: 0x0  nop
    ctx->pc = 0x162068u;
    // NOP
    // 0x16206c: 0x0  nop
    ctx->pc = 0x16206cu;
    // NOP
label_162070:
    // 0x162070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x162070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x162074: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x162074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x162078: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x162078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16207c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16207cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x162080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x162080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x162084: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x162084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x162088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x162088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16208c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x162090: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16209c: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x16209cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1620a0: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1620a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x1620a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1620a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1620a8: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x1620A8u;
    SET_GPR_U32(ctx, 31, 0x1620B0u);
    ctx->pc = 0x1620ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1620A8u;
            // 0x1620ac: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620B0u; }
        if (ctx->pc != 0x1620B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620B0u; }
        if (ctx->pc != 0x1620B0u) { return; }
    }
    ctx->pc = 0x1620B0u;
label_1620b0:
    // 0x1620b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1620b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620b4: 0x52000214  beql        $s0, $zero, . + 4 + (0x214 << 2)
    ctx->pc = 0x1620B4u;
    {
        const bool branch_taken_0x1620b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620b4) {
            ctx->pc = 0x1620B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1620B4u;
            // 0x1620b8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162908u;
            goto label_162908;
        }
    }
    ctx->pc = 0x1620BCu;
    // 0x1620bc: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x1620bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x1620c0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1620c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1620c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1620c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1620c8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1620C8u;
    {
        const bool branch_taken_0x1620c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1620c8) {
            ctx->pc = 0x1620CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1620C8u;
            // 0x1620cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1620E0u;
            goto label_1620e0;
        }
    }
    ctx->pc = 0x1620D0u;
    // 0x1620d0: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x1620d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1620d4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x1620d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x1620d8: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x1620d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1620dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1620dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1620e0:
    // 0x1620e0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1620e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1620e4: 0x3c13009b  lui         $s3, 0x9B
    ctx->pc = 0x1620e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)155 << 16));
    // 0x1620e8: 0x3c12009b  lui         $s2, 0x9B
    ctx->pc = 0x1620e8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)155 << 16));
    // 0x1620ec: 0x3c19009b  lui         $t9, 0x9B
    ctx->pc = 0x1620ecu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)155 << 16));
    // 0x1620f0: 0x3c18009b  lui         $t8, 0x9B
    ctx->pc = 0x1620f0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)155 << 16));
    // 0x1620f4: 0x3c0f009b  lui         $t7, 0x9B
    ctx->pc = 0x1620f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)155 << 16));
    // 0x1620f8: 0x3c0e009b  lui         $t6, 0x9B
    ctx->pc = 0x1620f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)155 << 16));
    // 0x1620fc: 0x3c0d009b  lui         $t5, 0x9B
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)155 << 16));
    // 0x162100: 0x3c0c009b  lui         $t4, 0x9B
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)155 << 16));
    // 0x162104: 0x3c0b009b  lui         $t3, 0x9B
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)155 << 16));
    // 0x162108: 0x3c0a009b  lui         $t2, 0x9B
    ctx->pc = 0x162108u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)155 << 16));
    // 0x16210c: 0x3c09009b  lui         $t1, 0x9B
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)155 << 16));
    // 0x162110: 0x3c08009b  lui         $t0, 0x9B
    ctx->pc = 0x162110u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)155 << 16));
    // 0x162114: 0x3c07009b  lui         $a3, 0x9B
    ctx->pc = 0x162114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)155 << 16));
    // 0x162118: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x162118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x16211c: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x16211cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x162120: 0x3c17009b  lui         $s7, 0x9B
    ctx->pc = 0x162120u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)155 << 16));
label_162124:
    // 0x162124: 0x8476001c  lh          $s6, 0x1C($v1)
    ctx->pc = 0x162124u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x162128: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16212c: 0x86754510  lh          $s5, 0x4510($s3)
    ctx->pc = 0x16212cu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 17680)));
    // 0x162130: 0x28940042  slti        $s4, $a0, 0x42
    ctx->pc = 0x162130u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)66) ? 1 : 0);
    // 0x162134: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162138: 0xa475001c  sh          $s5, 0x1C($v1)
    ctx->pc = 0x162138u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 21));
    // 0x16213c: 0x8476001e  lh          $s6, 0x1E($v1)
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 30)));
    // 0x162140: 0x86554508  lh          $s5, 0x4508($s2)
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 17672)));
    // 0x162144: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162148: 0xa475001e  sh          $s5, 0x1E($v1)
    ctx->pc = 0x162148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 21));
    // 0x16214c: 0x84760028  lh          $s6, 0x28($v1)
    ctx->pc = 0x16214cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x162150: 0x87354510  lh          $s5, 0x4510($t9)
    ctx->pc = 0x162150u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 17680)));
    // 0x162154: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162158: 0xa4750028  sh          $s5, 0x28($v1)
    ctx->pc = 0x162158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 21));
    // 0x16215c: 0x8476002a  lh          $s6, 0x2A($v1)
    ctx->pc = 0x16215cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x162160: 0x87154508  lh          $s5, 0x4508($t8)
    ctx->pc = 0x162160u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 17672)));
    // 0x162164: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162168: 0xa475002a  sh          $s5, 0x2A($v1)
    ctx->pc = 0x162168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 21));
    // 0x16216c: 0x84760034  lh          $s6, 0x34($v1)
    ctx->pc = 0x16216cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x162170: 0x85f54510  lh          $s5, 0x4510($t7)
    ctx->pc = 0x162170u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 17680)));
    // 0x162174: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162174u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162178: 0xa4750034  sh          $s5, 0x34($v1)
    ctx->pc = 0x162178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 21));
    // 0x16217c: 0x84760036  lh          $s6, 0x36($v1)
    ctx->pc = 0x16217cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 54)));
    // 0x162180: 0x85d54508  lh          $s5, 0x4508($t6)
    ctx->pc = 0x162180u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 17672)));
    // 0x162184: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162188: 0xa4750036  sh          $s5, 0x36($v1)
    ctx->pc = 0x162188u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 21));
    // 0x16218c: 0x84760040  lh          $s6, 0x40($v1)
    ctx->pc = 0x16218cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x162190: 0x85b54510  lh          $s5, 0x4510($t5)
    ctx->pc = 0x162190u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 17680)));
    // 0x162194: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162198: 0xa4750040  sh          $s5, 0x40($v1)
    ctx->pc = 0x162198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 21));
    // 0x16219c: 0x84760042  lh          $s6, 0x42($v1)
    ctx->pc = 0x16219cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x1621a0: 0x85954508  lh          $s5, 0x4508($t4)
    ctx->pc = 0x1621a0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 17672)));
    // 0x1621a4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621a8: 0xa4750042  sh          $s5, 0x42($v1)
    ctx->pc = 0x1621a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621ac: 0x8476004c  lh          $s6, 0x4C($v1)
    ctx->pc = 0x1621acu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1621b0: 0x85754510  lh          $s5, 0x4510($t3)
    ctx->pc = 0x1621b0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 17680)));
    // 0x1621b4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621b8: 0xa475004c  sh          $s5, 0x4C($v1)
    ctx->pc = 0x1621b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 76), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621bc: 0x8476004e  lh          $s6, 0x4E($v1)
    ctx->pc = 0x1621bcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 78)));
    // 0x1621c0: 0x85554508  lh          $s5, 0x4508($t2)
    ctx->pc = 0x1621c0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 17672)));
    // 0x1621c4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621c8: 0xa475004e  sh          $s5, 0x4E($v1)
    ctx->pc = 0x1621c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 78), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621cc: 0x84760058  lh          $s6, 0x58($v1)
    ctx->pc = 0x1621ccu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1621d0: 0x85354510  lh          $s5, 0x4510($t1)
    ctx->pc = 0x1621d0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 17680)));
    // 0x1621d4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621d8: 0xa4750058  sh          $s5, 0x58($v1)
    ctx->pc = 0x1621d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621dc: 0x8476005a  lh          $s6, 0x5A($v1)
    ctx->pc = 0x1621dcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 90)));
    // 0x1621e0: 0x85154508  lh          $s5, 0x4508($t0)
    ctx->pc = 0x1621e0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 17672)));
    // 0x1621e4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621e8: 0xa475005a  sh          $s5, 0x5A($v1)
    ctx->pc = 0x1621e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 90), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621ec: 0x84760064  lh          $s6, 0x64($v1)
    ctx->pc = 0x1621ecu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1621f0: 0x84f54510  lh          $s5, 0x4510($a3)
    ctx->pc = 0x1621f0u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 17680)));
    // 0x1621f4: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x1621f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1621f8: 0xa4750064  sh          $s5, 0x64($v1)
    ctx->pc = 0x1621f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 21));
    // 0x1621fc: 0x84760066  lh          $s6, 0x66($v1)
    ctx->pc = 0x1621fcu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 102)));
    // 0x162200: 0x84d54508  lh          $s5, 0x4508($a2)
    ctx->pc = 0x162200u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 17672)));
    // 0x162204: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162204u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162208: 0xa4750066  sh          $s5, 0x66($v1)
    ctx->pc = 0x162208u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 102), (uint16_t)GPR_U32(ctx, 21));
    // 0x16220c: 0x84760070  lh          $s6, 0x70($v1)
    ctx->pc = 0x16220cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x162210: 0x84b54510  lh          $s5, 0x4510($a1)
    ctx->pc = 0x162210u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 17680)));
    // 0x162214: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162214u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162218: 0xa4750070  sh          $s5, 0x70($v1)
    ctx->pc = 0x162218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 112), (uint16_t)GPR_U32(ctx, 21));
    // 0x16221c: 0x84760072  lh          $s6, 0x72($v1)
    ctx->pc = 0x16221cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x162220: 0x86f54508  lh          $s5, 0x4508($s7)
    ctx->pc = 0x162220u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 17672)));
    // 0x162224: 0x2d5a821  addu        $s5, $s6, $s5
    ctx->pc = 0x162224u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x162228: 0xa4750072  sh          $s5, 0x72($v1)
    ctx->pc = 0x162228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 114), (uint16_t)GPR_U32(ctx, 21));
    // 0x16222c: 0x1680ffbd  bnez        $s4, . + 4 + (-0x43 << 2)
    ctx->pc = 0x16222Cu;
    {
        const bool branch_taken_0x16222c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x162230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16222Cu;
            // 0x162230: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16222c) {
            ctx->pc = 0x162124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162124;
        }
    }
    ctx->pc = 0x162234u;
    // 0x162234: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x162234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x162238: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x162238u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x16223c: 0x84664510  lh          $a2, 0x4510($v1)
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17680)));
    // 0x162240: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x162240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162244: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x162244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x162248: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x162248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16224c: 0x714021  addu        $t0, $v1, $s1
    ctx->pc = 0x16224cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x162250: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x162250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x162254: 0x8507001c  lh          $a3, 0x1C($t0)
    ctx->pc = 0x162254u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x162258: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x162258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x16225c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x16225cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x162260: 0xa506001c  sh          $a2, 0x1C($t0)
    ctx->pc = 0x162260u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x162264: 0x84a54508  lh          $a1, 0x4508($a1)
    ctx->pc = 0x162264u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 17672)));
    // 0x162268: 0x8506001e  lh          $a2, 0x1E($t0)
    ctx->pc = 0x162268u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
    // 0x16226c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x16226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x162270: 0xa505001e  sh          $a1, 0x1E($t0)
    ctx->pc = 0x162270u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x162274: 0x84844510  lh          $a0, 0x4510($a0)
    ctx->pc = 0x162274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 17680)));
    // 0x162278: 0x85050028  lh          $a1, 0x28($t0)
    ctx->pc = 0x162278u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x16227c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16227cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x162280: 0xa5040028  sh          $a0, 0x28($t0)
    ctx->pc = 0x162280u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x162284: 0x84634508  lh          $v1, 0x4508($v1)
    ctx->pc = 0x162284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 17672)));
    // 0x162288: 0x8504002a  lh          $a0, 0x2A($t0)
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 42)));
    // 0x16228c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x162290: 0xa503002a  sh          $v1, 0x2A($t0)
    ctx->pc = 0x162290u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x162294: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x162294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x162298: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x162298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x16229c: 0x54600046  bnel        $v1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x16229Cu;
    {
        const bool branch_taken_0x16229c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16229c) {
            ctx->pc = 0x1622A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16229Cu;
            // 0x1622a0: 0x8e040498  lw          $a0, 0x498($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1623B8u;
            goto label_1623b8;
        }
    }
    ctx->pc = 0x1622A4u;
    // 0x1622a4: 0x86260012  lh          $a2, 0x12($s1)
    ctx->pc = 0x1622a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1622a8: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x1622a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1622ac: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1622b0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1622b4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1622b8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1622b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1622bc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1622bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1622c0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1622c4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1622c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1622c8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1622c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1622cc: 0xa4a4001c  sh          $a0, 0x1C($a1)
    ctx->pc = 0x1622ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 4));
    // 0x1622d0: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1622d4: 0xa4a4001e  sh          $a0, 0x1E($a1)
    ctx->pc = 0x1622d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 4));
    // 0x1622d8: 0x96040274  lhu         $a0, 0x274($s0)
    ctx->pc = 0x1622d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1622dc: 0xa4a40020  sh          $a0, 0x20($a1)
    ctx->pc = 0x1622dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x1622e0: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x1622e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1622e4: 0xa0a40022  sb          $a0, 0x22($a1)
    ctx->pc = 0x1622e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 34), (uint8_t)GPR_U32(ctx, 4));
    // 0x1622e8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x1622e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1622ec: 0x14670015  bne         $v1, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1622ECu;
    {
        const bool branch_taken_0x1622ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1622F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1622ECu;
            // 0x1622f0: 0xaca40018  sw          $a0, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622ec) {
            ctx->pc = 0x162344u;
            goto label_162344;
        }
    }
    ctx->pc = 0x1622F4u;
    // 0x1622f4: 0x262601bc  addiu       $a2, $s1, 0x1BC
    ctx->pc = 0x1622f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x1622f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1622f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1622fc:
    // 0x1622fc: 0xa4c50020  sh          $a1, 0x20($a2)
    ctx->pc = 0x1622fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x162300: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x162300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x162304: 0xa4c5002c  sh          $a1, 0x2C($a2)
    ctx->pc = 0x162304u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x162308: 0x28e40043  slti        $a0, $a3, 0x43
    ctx->pc = 0x162308u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)67) ? 1 : 0);
    // 0x16230c: 0xa4c50038  sh          $a1, 0x38($a2)
    ctx->pc = 0x16230cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x162310: 0xa4c50044  sh          $a1, 0x44($a2)
    ctx->pc = 0x162310u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 68), (uint16_t)GPR_U32(ctx, 5));
    // 0x162314: 0xa4c50050  sh          $a1, 0x50($a2)
    ctx->pc = 0x162314u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x162318: 0xa4c5005c  sh          $a1, 0x5C($a2)
    ctx->pc = 0x162318u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x16231c: 0xa4c50068  sh          $a1, 0x68($a2)
    ctx->pc = 0x16231cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x162320: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x162320u;
    {
        const bool branch_taken_0x162320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162320u;
            // 0x162324: 0x24c60054  addiu       $a2, $a2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162320) {
            ctx->pc = 0x1622FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1622fc;
        }
    }
    ctx->pc = 0x162328u;
    // 0x162328: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x162328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x16232c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x16232cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x162330: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x162330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x162334: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x162334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x162338: 0xa4850020  sh          $a1, 0x20($a0)
    ctx->pc = 0x162338u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x16233c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x16233Cu;
    {
        const bool branch_taken_0x16233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16233Cu;
            // 0x162340: 0xa485002c  sh          $a1, 0x2C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16233c) {
            ctx->pc = 0x1623A4u;
            goto label_1623a4;
        }
    }
    ctx->pc = 0x162344u;
label_162344:
    // 0x162344: 0x2864004a  slti        $a0, $v1, 0x4A
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x162348: 0x54800017  bnel        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x162348u;
    {
        const bool branch_taken_0x162348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x162348) {
            ctx->pc = 0x16234Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162348u;
            // 0x16234c: 0xa6230012  sh          $v1, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1623A8u;
            goto label_1623a8;
        }
    }
    ctx->pc = 0x162350u;
    // 0x162350: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x162350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162354: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162358: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x162358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16235c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x16235cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_162360:
    // 0x162360: 0xa4e50020  sh          $a1, 0x20($a3)
    ctx->pc = 0x162360u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x162364: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x162364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x162368: 0xa4e5002c  sh          $a1, 0x2C($a3)
    ctx->pc = 0x162368u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x16236c: 0x28c4001e  slti        $a0, $a2, 0x1E
    ctx->pc = 0x16236cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x162370: 0xa4e50038  sh          $a1, 0x38($a3)
    ctx->pc = 0x162370u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x162374: 0xa4e50044  sh          $a1, 0x44($a3)
    ctx->pc = 0x162374u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 68), (uint16_t)GPR_U32(ctx, 5));
    // 0x162378: 0xa4e50050  sh          $a1, 0x50($a3)
    ctx->pc = 0x162378u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 80), (uint16_t)GPR_U32(ctx, 5));
    // 0x16237c: 0xa4e5005c  sh          $a1, 0x5C($a3)
    ctx->pc = 0x16237cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x162380: 0xa4e50068  sh          $a1, 0x68($a3)
    ctx->pc = 0x162380u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x162384: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x162384u;
    {
        const bool branch_taken_0x162384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162384u;
            // 0x162388: 0x24e70054  addiu       $a3, $a3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162384) {
            ctx->pc = 0x162360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_162360;
        }
    }
    ctx->pc = 0x16238Cu;
    // 0x16238c: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x16238cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x162390: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x162390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x162394: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x162394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x162398: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x162398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x16239c: 0xa4850020  sh          $a1, 0x20($a0)
    ctx->pc = 0x16239cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1623a0: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x1623a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
label_1623a4:
    // 0x1623a4: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x1623a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_1623a8:
    // 0x1623a8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1623a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1623ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1623acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1623b0: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x1623b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1623b4: 0x8e040498  lw          $a0, 0x498($s0)
    ctx->pc = 0x1623b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_1623b8:
    // 0x1623b8: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1623b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1623bc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1623BCu;
    {
        const bool branch_taken_0x1623bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1623bc) {
            ctx->pc = 0x1623C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1623BCu;
            // 0x1623c0: 0x8e030270  lw          $v1, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1623D8u;
            goto label_1623d8;
        }
    }
    ctx->pc = 0x1623C4u;
    // 0x1623c4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1623c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1623c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1623c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1623cc: 0x1060014d  beqz        $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x1623CCu;
    {
        const bool branch_taken_0x1623cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623cc) {
            ctx->pc = 0x162904u;
            goto label_162904;
        }
    }
    ctx->pc = 0x1623D4u;
    // 0x1623d4: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x1623d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1623d8:
    // 0x1623d8: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x1623d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1623dc: 0x14600149  bnez        $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x1623DCu;
    {
        const bool branch_taken_0x1623dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1623dc) {
            ctx->pc = 0x162904u;
            goto label_162904;
        }
    }
    ctx->pc = 0x1623E4u;
    // 0x1623e4: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1623e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1623e8: 0x5460013e  bnel        $v1, $zero, . + 4 + (0x13E << 2)
    ctx->pc = 0x1623E8u;
    {
        const bool branch_taken_0x1623e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1623e8) {
            ctx->pc = 0x1623ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1623E8u;
            // 0x1623ec: 0x96230008  lhu         $v1, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1628E4u;
            goto label_1628e4;
        }
    }
    ctx->pc = 0x1623F0u;
    // 0x1623f0: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x1623f0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1623f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1623f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1623f8: 0x50830032  beql        $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1623F8u;
    {
        const bool branch_taken_0x1623f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1623f8) {
            ctx->pc = 0x1623FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1623F8u;
            // 0x1623fc: 0x96230014  lhu         $v1, 0x14($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1624C4u;
            goto label_1624c4;
        }
    }
    ctx->pc = 0x162400u;
    // 0x162400: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x162400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162404: 0x50830026  beql        $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x162404u;
    {
        const bool branch_taken_0x162404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x162404) {
            ctx->pc = 0x162408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162404u;
            // 0x162408: 0x8fa800ac  lw          $t0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1624A0u;
            goto label_1624a0;
        }
    }
    ctx->pc = 0x16240Cu;
    // 0x16240c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162410: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x162410u;
    {
        const bool branch_taken_0x162410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x162410) {
            ctx->pc = 0x162414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162410u;
            // 0x162414: 0x8fa800ac  lw          $t0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16247Cu;
            goto label_16247c;
        }
    }
    ctx->pc = 0x162418u;
    // 0x162418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x162418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16241c: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16241Cu;
    {
        const bool branch_taken_0x16241c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16241c) {
            ctx->pc = 0x162420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16241Cu;
            // 0x162420: 0x8fa800ac  lw          $t0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162458u;
            goto label_162458;
        }
    }
    ctx->pc = 0x162424u;
    // 0x162424: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x162424u;
    {
        const bool branch_taken_0x162424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x162424) {
            ctx->pc = 0x162428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162424u;
            // 0x162428: 0x8fa800ac  lw          $t0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162434u;
            goto label_162434;
        }
    }
    ctx->pc = 0x16242Cu;
    // 0x16242c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16242Cu;
    {
        const bool branch_taken_0x16242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16242c) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x162434u;
label_162434:
    // 0x162434: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x162438: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x162438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x16243c: 0x24842940  addiu       $a0, $a0, 0x2940
    ctx->pc = 0x16243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10560));
    // 0x162440: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x162440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x162444: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x162448: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x162448u;
    SET_GPR_U32(ctx, 31, 0x162450u);
    ctx->pc = 0x16244Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162448u;
            // 0x16244c: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162450u; }
        if (ctx->pc != 0x162450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162450u; }
        if (ctx->pc != 0x162450u) { return; }
    }
    ctx->pc = 0x162450u;
label_162450:
    // 0x162450: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x162450u;
    {
        const bool branch_taken_0x162450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162450u;
            // 0x162454: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162450) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x162458u;
label_162458:
    // 0x162458: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x162458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x16245c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x16245cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x162460: 0x24842a30  addiu       $a0, $a0, 0x2A30
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
    // 0x162464: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x162464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x162468: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x162468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x16246c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x16246Cu;
    SET_GPR_U32(ctx, 31, 0x162474u);
    ctx->pc = 0x162470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16246Cu;
            // 0x162470: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162474u; }
        if (ctx->pc != 0x162474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162474u; }
        if (ctx->pc != 0x162474u) { return; }
    }
    ctx->pc = 0x162474u;
label_162474:
    // 0x162474: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162474u;
    {
        const bool branch_taken_0x162474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162474u;
            // 0x162478: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162474) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x16247Cu;
label_16247c:
    // 0x16247c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x16247cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x162480: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x162484: 0x24842b30  addiu       $a0, $a0, 0x2B30
    ctx->pc = 0x162484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11056));
    // 0x162488: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x162488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x16248c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x162490: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x162490u;
    SET_GPR_U32(ctx, 31, 0x162498u);
    ctx->pc = 0x162494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162490u;
            // 0x162494: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162498u; }
        if (ctx->pc != 0x162498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162498u; }
        if (ctx->pc != 0x162498u) { return; }
    }
    ctx->pc = 0x162498u;
label_162498:
    // 0x162498: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x162498u;
    {
        const bool branch_taken_0x162498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16249Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162498u;
            // 0x16249c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162498) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x1624A0u;
label_1624a0:
    // 0x1624a0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x1624a4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1624a8: 0x24842c20  addiu       $a0, $a0, 0x2C20
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11296));
    // 0x1624ac: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x1624acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x1624b0: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1624b4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1624B4u;
    SET_GPR_U32(ctx, 31, 0x1624BCu);
    ctx->pc = 0x1624B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624B4u;
            // 0x1624b8: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624BCu; }
        if (ctx->pc != 0x1624BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624BCu; }
        if (ctx->pc != 0x1624BCu) { return; }
    }
    ctx->pc = 0x1624BCu;
label_1624bc:
    // 0x1624bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1624BCu;
    {
        const bool branch_taken_0x1624bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1624C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1624BCu;
            // 0x1624c0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624bc) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x1624C4u;
label_1624c4:
    // 0x1624c4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1624c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1624c8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1624C8u;
    {
        const bool branch_taken_0x1624c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624c8) {
            ctx->pc = 0x1624F4u;
            goto label_1624f4;
        }
    }
    ctx->pc = 0x1624D0u;
    // 0x1624d0: 0x8fa800ac  lw          $t0, 0xAC($sp)
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1624d4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x1624d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x1624d8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1624d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1624dc: 0x24842de0  addiu       $a0, $a0, 0x2DE0
    ctx->pc = 0x1624dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
    // 0x1624e0: 0x24a5d420  addiu       $a1, $a1, -0x2BE0
    ctx->pc = 0x1624e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956064));
    // 0x1624e4: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x1624e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1624e8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1624E8u;
    SET_GPR_U32(ctx, 31, 0x1624F0u);
    ctx->pc = 0x1624ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1624E8u;
            // 0x1624ec: 0x2407060c  addiu       $a3, $zero, 0x60C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624F0u; }
        if (ctx->pc != 0x1624F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1624F0u; }
        if (ctx->pc != 0x1624F0u) { return; }
    }
    ctx->pc = 0x1624F0u;
label_1624f0:
    // 0x1624f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1624f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1624f4:
    // 0x1624f4: 0x13c000fa  beqz        $fp, . + 4 + (0xFA << 2)
    ctx->pc = 0x1624F4u;
    {
        const bool branch_taken_0x1624f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624f4) {
            ctx->pc = 0x1628E0u;
            goto label_1628e0;
        }
    }
    ctx->pc = 0x1624FCu;
    // 0x1624fc: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x1624fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x162500: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x162500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x162504: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162508: 0xa6230014  sh          $v1, 0x14($s1)
    ctx->pc = 0x162508u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x16250c: 0x8fd20010  lw          $s2, 0x10($fp)
    ctx->pc = 0x16250cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x162510: 0xae5e05dc  sw          $fp, 0x5DC($s2)
    ctx->pc = 0x162510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1500), GPR_U32(ctx, 30));
    // 0x162514: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x162514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162518: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x162518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x16251c: 0x960500ea  lhu         $a1, 0xEA($s0)
    ctx->pc = 0x16251cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 234)));
    // 0x162520: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x162520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x162524: 0xc062734  jal         func_189CD0
    ctx->pc = 0x162524u;
    SET_GPR_U32(ctx, 31, 0x16252Cu);
    ctx->pc = 0x162528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162524u;
            // 0x162528: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189CD0u;
    if (runtime->hasFunction(0x189CD0u)) {
        auto targetFn = runtime->lookupFunction(0x189CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16252Cu; }
        if (ctx->pc != 0x16252Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189CD0_0x189cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16252Cu; }
        if (ctx->pc != 0x16252Cu) { return; }
    }
    ctx->pc = 0x16252Cu;
label_16252c:
    // 0x16252c: 0x26530268  addiu       $s3, $s2, 0x268
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 616));
    // 0x162530: 0xc057b5c  jal         func_15ED70
    ctx->pc = 0x162530u;
    SET_GPR_U32(ctx, 31, 0x162538u);
    ctx->pc = 0x162534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162530u;
            // 0x162534: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ED70u;
    if (runtime->hasFunction(0x15ED70u)) {
        auto targetFn = runtime->lookupFunction(0x15ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162538u; }
        if (ctx->pc != 0x162538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ED70_0x15ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162538u; }
        if (ctx->pc != 0x162538u) { return; }
    }
    ctx->pc = 0x162538u;
label_162538:
    // 0x162538: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16253c:
    // 0x16253c: 0x2062821  addu        $a1, $s0, $a2
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x162540: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x162540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x162544: 0x90a3027e  lbu         $v1, 0x27E($a1)
    ctx->pc = 0x162544u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 638)));
    // 0x162548: 0x24c60005  addiu       $a2, $a2, 0x5
    ctx->pc = 0x162548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x16254c: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x16254cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x162550: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x162550u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x162554: 0x90a3027f  lbu         $v1, 0x27F($a1)
    ctx->pc = 0x162554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 639)));
    // 0x162558: 0xa0830017  sb          $v1, 0x17($a0)
    ctx->pc = 0x162558u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 3));
    // 0x16255c: 0x90a30280  lbu         $v1, 0x280($a1)
    ctx->pc = 0x16255cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 640)));
    // 0x162560: 0xa0830018  sb          $v1, 0x18($a0)
    ctx->pc = 0x162560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x162564: 0x90a30281  lbu         $v1, 0x281($a1)
    ctx->pc = 0x162564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 641)));
    // 0x162568: 0xa0830019  sb          $v1, 0x19($a0)
    ctx->pc = 0x162568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x16256c: 0x90a30282  lbu         $v1, 0x282($a1)
    ctx->pc = 0x16256cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 642)));
    // 0x162570: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x162570u;
    {
        const bool branch_taken_0x162570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162570u;
            // 0x162574: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162570) {
            ctx->pc = 0x16253Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16253c;
        }
    }
    ctx->pc = 0x162578u;
    // 0x162578: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x162578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16257c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x16257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x162580: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x162580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x162584: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x162584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x162588: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x162588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16258c: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x16258cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x162590: 0x9204008c  lbu         $a0, 0x8C($s0)
    ctx->pc = 0x162590u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x162594: 0xa244008c  sb          $a0, 0x8C($s2)
    ctx->pc = 0x162594u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 4));
    // 0x162598: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x16259c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x16259cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1625a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1625a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1625a4: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x1625a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x1625a8: 0xae4300e4  sw          $v1, 0xE4($s2)
    ctx->pc = 0x1625a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 3));
    // 0x1625ac: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1625acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1625b0: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1625b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1625b4: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1625b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1625b8: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1625b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1625bc: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1625bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1625c0: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1625c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x1625c4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1625c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1625c8: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1625C8u;
    {
        const bool branch_taken_0x1625c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1625c8) {
            ctx->pc = 0x1625CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1625C8u;
            // 0x1625cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162610u;
            goto label_162610;
        }
    }
    ctx->pc = 0x1625D0u;
    // 0x1625d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1625d4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1625D4u;
    {
        const bool branch_taken_0x1625d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1625d4) {
            ctx->pc = 0x1625D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1625D4u;
            // 0x1625d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162608u;
            goto label_162608;
        }
    }
    ctx->pc = 0x1625DCu;
    // 0x1625dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1625dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1625e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1625E0u;
    {
        const bool branch_taken_0x1625e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1625e0) {
            ctx->pc = 0x162604u;
            goto label_162604;
        }
    }
    ctx->pc = 0x1625E8u;
    // 0x1625e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1625e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1625ec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1625ECu;
    {
        const bool branch_taken_0x1625ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1625ec) {
            ctx->pc = 0x162604u;
            goto label_162604;
        }
    }
    ctx->pc = 0x1625F4u;
    // 0x1625f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1625F4u;
    {
        const bool branch_taken_0x1625f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1625f4) {
            ctx->pc = 0x162604u;
            goto label_162604;
        }
    }
    ctx->pc = 0x1625FCu;
    // 0x1625fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1625FCu;
    {
        const bool branch_taken_0x1625fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1625FCu;
            // 0x162600: 0x8e4400dc  lw          $a0, 0xDC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625fc) {
            ctx->pc = 0x162618u;
            goto label_162618;
        }
    }
    ctx->pc = 0x162604u;
label_162604:
    // 0x162604: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x162604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_162608:
    // 0x162608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162608u;
    {
        const bool branch_taken_0x162608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162608u;
            // 0x16260c: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162608) {
            ctx->pc = 0x162614u;
            goto label_162614;
        }
    }
    ctx->pc = 0x162610u;
label_162610:
    // 0x162610: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x162610u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_162614:
    // 0x162614: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x162614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_162618:
    // 0x162618: 0xc04be70  jal         func_12F9C0
    ctx->pc = 0x162618u;
    SET_GPR_U32(ctx, 31, 0x162620u);
    ctx->pc = 0x16261Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162618u;
            // 0x16261c: 0x92450008  lbu         $a1, 0x8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F9C0u;
    if (runtime->hasFunction(0x12F9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12F9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162620u; }
        if (ctx->pc != 0x162620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012F9C0_0x12f9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162620u; }
        if (ctx->pc != 0x162620u) { return; }
    }
    ctx->pc = 0x162620u;
label_162620:
    // 0x162620: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x162620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x162624: 0x2646009c  addiu       $a2, $s2, 0x9C
    ctx->pc = 0x162624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x162628: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x162628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x16262c: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x16262cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x162630: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x162630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x162634: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x162634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x162638: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x162638u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x16263c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x16263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x162640: 0xc0c1424  jal         func_305090
    ctx->pc = 0x162640u;
    SET_GPR_U32(ctx, 31, 0x162648u);
    ctx->pc = 0x162644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162640u;
            // 0x162644: 0x2607009c  addiu       $a3, $s0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305090u;
    if (runtime->hasFunction(0x305090u)) {
        auto targetFn = runtime->lookupFunction(0x305090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162648u; }
        if (ctx->pc != 0x162648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305090_0x305090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162648u; }
        if (ctx->pc != 0x162648u) { return; }
    }
    ctx->pc = 0x162648u;
label_162648:
    // 0x162648: 0x2644009c  addiu       $a0, $s2, 0x9C
    ctx->pc = 0x162648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 156));
    // 0x16264c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16264cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x162650: 0xc0c1418  jal         func_305060
    ctx->pc = 0x162650u;
    SET_GPR_U32(ctx, 31, 0x162658u);
    ctx->pc = 0x162654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162650u;
            // 0x162654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162658u; }
        if (ctx->pc != 0x162658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162658u; }
        if (ctx->pc != 0x162658u) { return; }
    }
    ctx->pc = 0x162658u;
label_162658:
    // 0x162658: 0x92030298  lbu         $v1, 0x298($s0)
    ctx->pc = 0x162658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x16265c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16265cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162660: 0xa2430298  sb          $v1, 0x298($s2)
    ctx->pc = 0x162660u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 664), (uint8_t)GPR_U32(ctx, 3));
    // 0x162664: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x162664u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x162668: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162668u;
    {
        const bool branch_taken_0x162668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x162668) {
            ctx->pc = 0x16266Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162668u;
            // 0x16266c: 0x9623000e  lhu         $v1, 0xE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162680u;
            goto label_162680;
        }
    }
    ctx->pc = 0x162670u;
    // 0x162670: 0x92420298  lbu         $v0, 0x298($s2)
    ctx->pc = 0x162670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 664)));
    // 0x162674: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x162674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x162678: 0xa2420298  sb          $v0, 0x298($s2)
    ctx->pc = 0x162678u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 664), (uint8_t)GPR_U32(ctx, 2));
    // 0x16267c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x16267cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_162680:
    // 0x162680: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162684: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x162684u;
    {
        const bool branch_taken_0x162684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x162684) {
            ctx->pc = 0x162688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162684u;
            // 0x162688: 0x2644028c  addiu       $a0, $s2, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1626C8u;
            goto label_1626c8;
        }
    }
    ctx->pc = 0x16268Cu;
    // 0x16268c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162690: 0x50650009  beql        $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162690u;
    {
        const bool branch_taken_0x162690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x162690) {
            ctx->pc = 0x162694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162690u;
            // 0x162694: 0x2644028c  addiu       $a0, $s2, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1626B8u;
            goto label_1626b8;
        }
    }
    ctx->pc = 0x162698u;
    // 0x162698: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x162698u;
    {
        const bool branch_taken_0x162698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162698) {
            ctx->pc = 0x16269Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162698u;
            // 0x16269c: 0x2644028c  addiu       $a0, $s2, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 652));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1626A8u;
            goto label_1626a8;
        }
    }
    ctx->pc = 0x1626A0u;
    // 0x1626a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1626A0u;
    {
        const bool branch_taken_0x1626a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1626A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1626A0u;
            // 0x1626a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1626a0) {
            ctx->pc = 0x1626D8u;
            goto label_1626d8;
        }
    }
    ctx->pc = 0x1626A8u;
label_1626a8:
    // 0x1626a8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1626A8u;
    SET_GPR_U32(ctx, 31, 0x1626B0u);
    ctx->pc = 0x1626ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626A8u;
            // 0x1626ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626B0u; }
        if (ctx->pc != 0x1626B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626B0u; }
        if (ctx->pc != 0x1626B0u) { return; }
    }
    ctx->pc = 0x1626B0u;
label_1626b0:
    // 0x1626b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1626B0u;
    {
        const bool branch_taken_0x1626b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626b0) {
            ctx->pc = 0x1626D4u;
            goto label_1626d4;
        }
    }
    ctx->pc = 0x1626B8u;
label_1626b8:
    // 0x1626b8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1626B8u;
    SET_GPR_U32(ctx, 31, 0x1626C0u);
    ctx->pc = 0x1626BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626B8u;
            // 0x1626bc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626C0u; }
        if (ctx->pc != 0x1626C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626C0u; }
        if (ctx->pc != 0x1626C0u) { return; }
    }
    ctx->pc = 0x1626C0u;
label_1626c0:
    // 0x1626c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1626C0u;
    {
        const bool branch_taken_0x1626c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626c0) {
            ctx->pc = 0x1626D4u;
            goto label_1626d4;
        }
    }
    ctx->pc = 0x1626C8u;
label_1626c8:
    // 0x1626c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1626cc: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1626CCu;
    SET_GPR_U32(ctx, 31, 0x1626D4u);
    ctx->pc = 0x1626D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1626CCu;
            // 0x1626d0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (runtime->hasFunction(0x12EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D4u; }
        if (ctx->pc != 0x1626D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFA0_0x12efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626D4u; }
        if (ctx->pc != 0x1626D4u) { return; }
    }
    ctx->pc = 0x1626D4u;
label_1626d4:
    // 0x1626d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1626d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1626d8:
    // 0x1626d8: 0xc064fa8  jal         func_193EA0
    ctx->pc = 0x1626D8u;
    SET_GPR_U32(ctx, 31, 0x1626E0u);
    ctx->pc = 0x193EA0u;
    if (runtime->hasFunction(0x193EA0u)) {
        auto targetFn = runtime->lookupFunction(0x193EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626E0u; }
        if (ctx->pc != 0x1626E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193EA0_0x193ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1626E0u; }
        if (ctx->pc != 0x1626E0u) { return; }
    }
    ctx->pc = 0x1626E0u;
label_1626e0:
    // 0x1626e0: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1626e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1626e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1626e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1626e8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1626E8u;
    {
        const bool branch_taken_0x1626e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1626e8) {
            ctx->pc = 0x1626ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1626E8u;
            // 0x1626ec: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1627D0u;
            goto label_1627d0;
        }
    }
    ctx->pc = 0x1626F0u;
    // 0x1626f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1626f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1626f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1626f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1626f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1626fc:
    // 0x1626fc: 0x90c30318  lbu         $v1, 0x318($a2)
    ctx->pc = 0x1626fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 792)));
    // 0x162700: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x162700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x162704: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x162704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x162708: 0xa0a30318  sb          $v1, 0x318($a1)
    ctx->pc = 0x162708u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 792), (uint8_t)GPR_U32(ctx, 3));
    // 0x16270c: 0x90c30319  lbu         $v1, 0x319($a2)
    ctx->pc = 0x16270cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 793)));
    // 0x162710: 0xa0a30319  sb          $v1, 0x319($a1)
    ctx->pc = 0x162710u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 793), (uint8_t)GPR_U32(ctx, 3));
    // 0x162714: 0x90c3031a  lbu         $v1, 0x31A($a2)
    ctx->pc = 0x162714u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 794)));
    // 0x162718: 0xa0a3031a  sb          $v1, 0x31A($a1)
    ctx->pc = 0x162718u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 794), (uint8_t)GPR_U32(ctx, 3));
    // 0x16271c: 0x90c30319  lbu         $v1, 0x319($a2)
    ctx->pc = 0x16271cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 793)));
    // 0x162720: 0xa0a30319  sb          $v1, 0x319($a1)
    ctx->pc = 0x162720u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 793), (uint8_t)GPR_U32(ctx, 3));
    // 0x162724: 0x84c30314  lh          $v1, 0x314($a2)
    ctx->pc = 0x162724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 788)));
    // 0x162728: 0xa4a30314  sh          $v1, 0x314($a1)
    ctx->pc = 0x162728u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 788), (uint16_t)GPR_U32(ctx, 3));
    // 0x16272c: 0x84c30316  lh          $v1, 0x316($a2)
    ctx->pc = 0x16272cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 790)));
    // 0x162730: 0xa4a30316  sh          $v1, 0x316($a1)
    ctx->pc = 0x162730u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 790), (uint16_t)GPR_U32(ctx, 3));
    // 0x162734: 0x90c3031b  lbu         $v1, 0x31B($a2)
    ctx->pc = 0x162734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 795)));
    // 0x162738: 0xa0a3031b  sb          $v1, 0x31B($a1)
    ctx->pc = 0x162738u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 795), (uint8_t)GPR_U32(ctx, 3));
    // 0x16273c: 0x90c3031c  lbu         $v1, 0x31C($a2)
    ctx->pc = 0x16273cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 796)));
    // 0x162740: 0xa0a3031c  sb          $v1, 0x31C($a1)
    ctx->pc = 0x162740u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 796), (uint8_t)GPR_U32(ctx, 3));
    // 0x162744: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x162744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x162748: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x162748u;
    {
        const bool branch_taken_0x162748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16274Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162748u;
            // 0x16274c: 0x24a5000a  addiu       $a1, $a1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162748) {
            ctx->pc = 0x1626FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1626fc;
        }
    }
    ctx->pc = 0x162750u;
    // 0x162750: 0x9262001d  lbu         $v0, 0x1D($s3)
    ctx->pc = 0x162750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 29)));
    // 0x162754: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x162754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x162758: 0xa242039e  sb          $v0, 0x39E($s2)
    ctx->pc = 0x162758u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 926), (uint8_t)GPR_U32(ctx, 2));
    // 0x16275c: 0x9263001b  lbu         $v1, 0x1B($s3)
    ctx->pc = 0x16275cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x162760: 0x9242039e  lbu         $v0, 0x39E($s2)
    ctx->pc = 0x162760u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 926)));
    // 0x162764: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x162764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x162768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x162768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16276c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x162770: 0xa242039e  sb          $v0, 0x39E($s2)
    ctx->pc = 0x162770u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 926), (uint8_t)GPR_U32(ctx, 2));
    // 0x162774: 0x9262001b  lbu         $v0, 0x1B($s3)
    ctx->pc = 0x162774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x162778: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x162778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16277c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x16277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x162780: 0xa24203a1  sb          $v0, 0x3A1($s2)
    ctx->pc = 0x162780u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 2));
    // 0x162784: 0x9263001e  lbu         $v1, 0x1E($s3)
    ctx->pc = 0x162784u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x162788: 0x924203a1  lbu         $v0, 0x3A1($s2)
    ctx->pc = 0x162788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 929)));
    // 0x16278c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x16278cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x162790: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x162790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x162794: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x162794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x162798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16279c: 0xa24203a1  sb          $v0, 0x3A1($s2)
    ctx->pc = 0x16279cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 929), (uint8_t)GPR_U32(ctx, 2));
    // 0x1627a0: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x1627a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1627a4: 0xa24203a0  sb          $v0, 0x3A0($s2)
    ctx->pc = 0x1627a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 928), (uint8_t)GPR_U32(ctx, 2));
    // 0x1627a8: 0x9262001b  lbu         $v0, 0x1B($s3)
    ctx->pc = 0x1627a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 27)));
    // 0x1627ac: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1627acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1627b0: 0xa24203a2  sb          $v0, 0x3A2($s2)
    ctx->pc = 0x1627b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 930), (uint8_t)GPR_U32(ctx, 2));
    // 0x1627b4: 0x964203a4  lhu         $v0, 0x3A4($s2)
    ctx->pc = 0x1627b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 932)));
    // 0x1627b8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1627b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1627bc: 0xa64203a4  sh          $v0, 0x3A4($s2)
    ctx->pc = 0x1627bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 932), (uint16_t)GPR_U32(ctx, 2));
    // 0x1627c0: 0x9242039f  lbu         $v0, 0x39F($s2)
    ctx->pc = 0x1627c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 927)));
    // 0x1627c4: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x1627c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x1627c8: 0xa242039f  sb          $v0, 0x39F($s2)
    ctx->pc = 0x1627c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 927), (uint8_t)GPR_U32(ctx, 2));
    // 0x1627cc: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x1627ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_1627d0:
    // 0x1627d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1627d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627d4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1627d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627d8: 0xa6420266  sh          $v0, 0x266($s2)
    ctx->pc = 0x1627d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 614), (uint16_t)GPR_U32(ctx, 2));
label_1627dc:
    // 0x1627dc: 0x2684029c  addiu       $a0, $s4, 0x29C
    ctx->pc = 0x1627dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 668));
    // 0x1627e0: 0xc05cee4  jal         func_173B90
    ctx->pc = 0x1627E0u;
    SET_GPR_U32(ctx, 31, 0x1627E8u);
    ctx->pc = 0x1627E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1627E0u;
            // 0x1627e4: 0x2605029c  addiu       $a1, $s0, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173B90u;
    if (runtime->hasFunction(0x173B90u)) {
        auto targetFn = runtime->lookupFunction(0x173B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627E8u; }
        if (ctx->pc != 0x1627E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173B90_0x173b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1627E8u; }
        if (ctx->pc != 0x1627E8u) { return; }
    }
    ctx->pc = 0x1627E8u;
label_1627e8:
    // 0x1627e8: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x1627e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1627ec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1627ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1627f0: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1627F0u;
    {
        const bool branch_taken_0x1627f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1627f0) {
            ctx->pc = 0x1628B0u;
            goto label_1628b0;
        }
    }
    ctx->pc = 0x1627F8u;
    // 0x1627f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1627f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1627fc: 0x10a40024  beq         $a1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1627FCu;
    {
        const bool branch_taken_0x1627fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1627fc) {
            ctx->pc = 0x162890u;
            goto label_162890;
        }
    }
    ctx->pc = 0x162804u;
    // 0x162804: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162808: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x162808u;
    {
        const bool branch_taken_0x162808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x162808) {
            ctx->pc = 0x162870u;
            goto label_162870;
        }
    }
    ctx->pc = 0x162810u;
    // 0x162810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x162810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162814: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x162814u;
    {
        const bool branch_taken_0x162814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x162814) {
            ctx->pc = 0x162850u;
            goto label_162850;
        }
    }
    ctx->pc = 0x16281Cu;
    // 0x16281c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16281Cu;
    {
        const bool branch_taken_0x16281c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16281c) {
            ctx->pc = 0x162830u;
            goto label_162830;
        }
    }
    ctx->pc = 0x162824u;
    // 0x162824: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x162824u;
    {
        const bool branch_taken_0x162824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162824) {
            ctx->pc = 0x1628C8u;
            goto label_1628c8;
        }
    }
    ctx->pc = 0x16282Cu;
    // 0x16282c: 0x0  nop
    ctx->pc = 0x16282cu;
    // NOP
label_162830:
    // 0x162830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162834: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16283c: 0xc058070  jal         func_1601C0
    ctx->pc = 0x16283Cu;
    SET_GPR_U32(ctx, 31, 0x162844u);
    ctx->pc = 0x162840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16283Cu;
            // 0x162840: 0x268802b4  addiu       $t0, $s4, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162844u; }
        if (ctx->pc != 0x162844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162844u; }
        if (ctx->pc != 0x162844u) { return; }
    }
    ctx->pc = 0x162844u;
label_162844:
    // 0x162844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x162844u;
    {
        const bool branch_taken_0x162844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162844) {
            ctx->pc = 0x1628C8u;
            goto label_1628c8;
        }
    }
    ctx->pc = 0x16284Cu;
    // 0x16284c: 0x0  nop
    ctx->pc = 0x16284cu;
    // NOP
label_162850:
    // 0x162850: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x162850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16285c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16285cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162860: 0xc058070  jal         func_1601C0
    ctx->pc = 0x162860u;
    SET_GPR_U32(ctx, 31, 0x162868u);
    ctx->pc = 0x162864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162860u;
            // 0x162864: 0x268802b4  addiu       $t0, $s4, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162868u; }
        if (ctx->pc != 0x162868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162868u; }
        if (ctx->pc != 0x162868u) { return; }
    }
    ctx->pc = 0x162868u;
label_162868:
    // 0x162868: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x162868u;
    {
        const bool branch_taken_0x162868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162868) {
            ctx->pc = 0x1628C8u;
            goto label_1628c8;
        }
    }
    ctx->pc = 0x162870u;
label_162870:
    // 0x162870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162878: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x162878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16287c: 0xc058070  jal         func_1601C0
    ctx->pc = 0x16287Cu;
    SET_GPR_U32(ctx, 31, 0x162884u);
    ctx->pc = 0x162880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16287Cu;
            // 0x162880: 0x268802b4  addiu       $t0, $s4, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162884u; }
        if (ctx->pc != 0x162884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162884u; }
        if (ctx->pc != 0x162884u) { return; }
    }
    ctx->pc = 0x162884u;
label_162884:
    // 0x162884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x162884u;
    {
        const bool branch_taken_0x162884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162884) {
            ctx->pc = 0x1628C8u;
            goto label_1628c8;
        }
    }
    ctx->pc = 0x16288Cu;
    // 0x16288c: 0x0  nop
    ctx->pc = 0x16288cu;
    // NOP
label_162890:
    // 0x162890: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x162894: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x162894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x162898: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x162898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16289c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16289cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628a0: 0xc058070  jal         func_1601C0
    ctx->pc = 0x1628A0u;
    SET_GPR_U32(ctx, 31, 0x1628A8u);
    ctx->pc = 0x1628A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628A0u;
            // 0x1628a4: 0x268802b4  addiu       $t0, $s4, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628A8u; }
        if (ctx->pc != 0x1628A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628A8u; }
        if (ctx->pc != 0x1628A8u) { return; }
    }
    ctx->pc = 0x1628A8u;
label_1628a8:
    // 0x1628a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1628A8u;
    {
        const bool branch_taken_0x1628a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628a8) {
            ctx->pc = 0x1628C8u;
            goto label_1628c8;
        }
    }
    ctx->pc = 0x1628B0u;
label_1628b0:
    // 0x1628b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1628b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1628b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1628bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628c0: 0xc058070  jal         func_1601C0
    ctx->pc = 0x1628C0u;
    SET_GPR_U32(ctx, 31, 0x1628C8u);
    ctx->pc = 0x1628C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1628C0u;
            // 0x1628c4: 0x268802b4  addiu       $t0, $s4, 0x2B4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1601C0u;
    if (runtime->hasFunction(0x1601C0u)) {
        auto targetFn = runtime->lookupFunction(0x1601C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628C8u; }
        if (ctx->pc != 0x1628C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001601C0_0x1601c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628C8u; }
        if (ctx->pc != 0x1628C8u) { return; }
    }
    ctx->pc = 0x1628C8u;
label_1628c8:
    // 0x1628c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1628c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1628cc: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1628ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1628d0: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1628d4: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1628D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1628D4u;
            // 0x1628d8: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x1627DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1627dc;
        }
    }
    ctx->pc = 0x1628DCu;
    // 0x1628dc: 0xa6400608  sh          $zero, 0x608($s2)
    ctx->pc = 0x1628dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1544), (uint16_t)GPR_U32(ctx, 0));
label_1628e0:
    // 0x1628e0: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1628e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_1628e4:
    // 0x1628e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1628e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1628e8: 0xa6230008  sh          $v1, 0x8($s1)
    ctx->pc = 0x1628e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1628ec: 0x96240008  lhu         $a0, 0x8($s1)
    ctx->pc = 0x1628ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1628f0: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1628f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1628f4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1628f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1628f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1628F8u;
    {
        const bool branch_taken_0x1628f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1628f8) {
            ctx->pc = 0x162904u;
            goto label_162904;
        }
    }
    ctx->pc = 0x162900u;
    // 0x162900: 0xa6200008  sh          $zero, 0x8($s1)
    ctx->pc = 0x162900u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 0));
label_162904:
    // 0x162904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x162904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_162908:
    // 0x162908: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x162908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16290c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16290cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x162910: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x162910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x162914: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x162914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162918: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x162918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16291c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16291cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162920: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16292c: 0x3e00008  jr          $ra
    ctx->pc = 0x16292Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16292Cu;
            // 0x162930: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162934u;
    // 0x162934: 0x0  nop
    ctx->pc = 0x162934u;
    // NOP
    // 0x162938: 0x0  nop
    ctx->pc = 0x162938u;
    // NOP
    // 0x16293c: 0x0  nop
    ctx->pc = 0x16293cu;
    // NOP
label_162940:
    // 0x162940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16294c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16294cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x162950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162954: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x162954u;
    SET_GPR_U32(ctx, 31, 0x16295Cu);
    ctx->pc = 0x162958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162954u;
            // 0x162958: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (runtime->hasFunction(0x1559F0u)) {
        auto targetFn = runtime->lookupFunction(0x1559F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16295Cu; }
        if (ctx->pc != 0x16295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001559F0_0x1559f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16295Cu; }
        if (ctx->pc != 0x16295Cu) { return; }
    }
    ctx->pc = 0x16295Cu;
label_16295c:
    // 0x16295c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16295cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162960: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x162960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162968: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162968u;
    {
        const bool branch_taken_0x162968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162968) {
            ctx->pc = 0x16296Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162968u;
            // 0x16296c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162980u;
            goto label_162980;
        }
    }
    ctx->pc = 0x162970u;
    // 0x162970: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162970u;
    SET_GPR_U32(ctx, 31, 0x162978u);
    ctx->pc = 0x162974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162970u;
            // 0x162974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162978u; }
        if (ctx->pc != 0x162978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162978u; }
        if (ctx->pc != 0x162978u) { return; }
    }
    ctx->pc = 0x162978u;
label_162978:
    // 0x162978: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x162978u;
    {
        const bool branch_taken_0x162978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16297Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162978u;
            // 0x16297c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162978) {
            ctx->pc = 0x162A10u;
            goto label_162a10;
        }
    }
    ctx->pc = 0x162980u;
label_162980:
    // 0x162980: 0x96220266  lhu         $v0, 0x266($s1)
    ctx->pc = 0x162980u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162984: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162984u;
    {
        const bool branch_taken_0x162984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162984) {
            ctx->pc = 0x162988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162984u;
            // 0x162988: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16299Cu;
            goto label_16299c;
        }
    }
    ctx->pc = 0x16298Cu;
    // 0x16298c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x16298Cu;
    SET_GPR_U32(ctx, 31, 0x162994u);
    ctx->pc = 0x162990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16298Cu;
            // 0x162990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162994u; }
        if (ctx->pc != 0x162994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162994u; }
        if (ctx->pc != 0x162994u) { return; }
    }
    ctx->pc = 0x162994u;
label_162994:
    // 0x162994: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x162994u;
    {
        const bool branch_taken_0x162994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162994) {
            ctx->pc = 0x162A0Cu;
            goto label_162a0c;
        }
    }
    ctx->pc = 0x16299Cu;
label_16299c:
    // 0x16299c: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x16299Cu;
    SET_GPR_U32(ctx, 31, 0x1629A4u);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629A4u; }
        if (ctx->pc != 0x1629A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629A4u; }
        if (ctx->pc != 0x1629A4u) { return; }
    }
    ctx->pc = 0x1629A4u;
label_1629a4:
    // 0x1629a4: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x1629a8: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x1629a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x1629ac: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1629ACu;
    {
        const bool branch_taken_0x1629ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1629ac) {
            ctx->pc = 0x1629B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1629ACu;
            // 0x1629b0: 0xa22002ae  sb          $zero, 0x2AE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1629DCu;
            goto label_1629dc;
        }
    }
    ctx->pc = 0x1629B4u;
    // 0x1629b4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1629b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1629b8: 0x96230266  lhu         $v1, 0x266($s1)
    ctx->pc = 0x1629b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x1629bc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1629bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1629c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1629c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1629c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1629c8: 0xa6220266  sh          $v0, 0x266($s1)
    ctx->pc = 0x1629c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x1629cc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1629ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1629d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1629d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1629d4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1629d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1629d8: 0xa22002ae  sb          $zero, 0x2AE($s1)
    ctx->pc = 0x1629d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
label_1629dc:
    // 0x1629dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1629dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629e0: 0xa22002d6  sb          $zero, 0x2D6($s1)
    ctx->pc = 0x1629e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x1629e4: 0xc054d48  jal         func_153520
    ctx->pc = 0x1629E4u;
    SET_GPR_U32(ctx, 31, 0x1629ECu);
    ctx->pc = 0x1629E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629E4u;
            // 0x1629e8: 0xa22002fe  sb          $zero, 0x2FE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 766), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (runtime->hasFunction(0x153520u)) {
        auto targetFn = runtime->lookupFunction(0x153520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629ECu; }
        if (ctx->pc != 0x1629ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153520_0x153520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629ECu; }
        if (ctx->pc != 0x1629ECu) { return; }
    }
    ctx->pc = 0x1629ECu;
label_1629ec:
    // 0x1629ec: 0xc05ce48  jal         func_173920
    ctx->pc = 0x1629ECu;
    SET_GPR_U32(ctx, 31, 0x1629F4u);
    ctx->pc = 0x1629F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1629ECu;
            // 0x1629f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629F4u; }
        if (ctx->pc != 0x1629F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173920_0x173920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1629F4u; }
        if (ctx->pc != 0x1629F4u) { return; }
    }
    ctx->pc = 0x1629F4u;
label_1629f4:
    // 0x1629f4: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x1629f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1629f8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1629f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1629fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1629FCu;
    {
        const bool branch_taken_0x1629fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1629fc) {
            ctx->pc = 0x162A0Cu;
            goto label_162a0c;
        }
    }
    ctx->pc = 0x162A04u;
    // 0x162a04: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x162A04u;
    SET_GPR_U32(ctx, 31, 0x162A0Cu);
    ctx->pc = 0x162A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A04u;
            // 0x162a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (runtime->hasFunction(0x193DE0u)) {
        auto targetFn = runtime->lookupFunction(0x193DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A0Cu; }
        if (ctx->pc != 0x162A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193DE0_0x193de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A0Cu; }
        if (ctx->pc != 0x162A0Cu) { return; }
    }
    ctx->pc = 0x162A0Cu;
label_162a0c:
    // 0x162a0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162a10:
    // 0x162a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162a18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x162A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A1Cu;
            // 0x162a20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162A24u;
    // 0x162a24: 0x0  nop
    ctx->pc = 0x162a24u;
    // NOP
    // 0x162a28: 0x0  nop
    ctx->pc = 0x162a28u;
    // NOP
    // 0x162a2c: 0x0  nop
    ctx->pc = 0x162a2cu;
    // NOP
label_162a30:
    // 0x162a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162a34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162a38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162a3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x162a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a44: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x162A44u;
    SET_GPR_U32(ctx, 31, 0x162A4Cu);
    ctx->pc = 0x162A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A44u;
            // 0x162a48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (runtime->hasFunction(0x1559F0u)) {
        auto targetFn = runtime->lookupFunction(0x1559F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A4Cu; }
        if (ctx->pc != 0x162A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001559F0_0x1559f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A4Cu; }
        if (ctx->pc != 0x162A4Cu) { return; }
    }
    ctx->pc = 0x162A4Cu;
label_162a4c:
    // 0x162a4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a50: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x162a50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162a54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162a58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162A58u;
    {
        const bool branch_taken_0x162a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a58) {
            ctx->pc = 0x162A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A58u;
            // 0x162a5c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162A70u;
            goto label_162a70;
        }
    }
    ctx->pc = 0x162A60u;
    // 0x162a60: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162A60u;
    SET_GPR_U32(ctx, 31, 0x162A68u);
    ctx->pc = 0x162A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A60u;
            // 0x162a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A68u; }
        if (ctx->pc != 0x162A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A68u; }
        if (ctx->pc != 0x162A68u) { return; }
    }
    ctx->pc = 0x162A68u;
label_162a68:
    // 0x162a68: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x162A68u;
    {
        const bool branch_taken_0x162a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162A68u;
            // 0x162a6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162a68) {
            ctx->pc = 0x162B10u;
            goto label_162b10;
        }
    }
    ctx->pc = 0x162A70u;
label_162a70:
    // 0x162a70: 0x96220266  lhu         $v0, 0x266($s1)
    ctx->pc = 0x162a70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162a74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162A74u;
    {
        const bool branch_taken_0x162a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162a74) {
            ctx->pc = 0x162A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A74u;
            // 0x162a78: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162A8Cu;
            goto label_162a8c;
        }
    }
    ctx->pc = 0x162A7Cu;
    // 0x162a7c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162A7Cu;
    SET_GPR_U32(ctx, 31, 0x162A84u);
    ctx->pc = 0x162A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162A7Cu;
            // 0x162a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A84u; }
        if (ctx->pc != 0x162A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A84u; }
        if (ctx->pc != 0x162A84u) { return; }
    }
    ctx->pc = 0x162A84u;
label_162a84:
    // 0x162a84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x162A84u;
    {
        const bool branch_taken_0x162a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a84) {
            ctx->pc = 0x162B0Cu;
            goto label_162b0c;
        }
    }
    ctx->pc = 0x162A8Cu;
label_162a8c:
    // 0x162a8c: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x162A8Cu;
    SET_GPR_U32(ctx, 31, 0x162A94u);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A94u; }
        if (ctx->pc != 0x162A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162A94u; }
        if (ctx->pc != 0x162A94u) { return; }
    }
    ctx->pc = 0x162A94u;
label_162a94:
    // 0x162a94: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x162a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x162a98: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x162a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x162a9c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x162A9Cu;
    {
        const bool branch_taken_0x162a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162a9c) {
            ctx->pc = 0x162AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162A9Cu;
            // 0x162aa0: 0xa22002ae  sb          $zero, 0x2AE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162ACCu;
            goto label_162acc;
        }
    }
    ctx->pc = 0x162AA4u;
    // 0x162aa4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x162aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x162aa8: 0x96230266  lhu         $v1, 0x266($s1)
    ctx->pc = 0x162aa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162aac: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x162aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x162ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ab4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x162ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162ab8: 0xa6220266  sh          $v0, 0x266($s1)
    ctx->pc = 0x162ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x162abc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x162abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162ac0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162ac4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x162ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x162ac8: 0xa22002ae  sb          $zero, 0x2AE($s1)
    ctx->pc = 0x162ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
label_162acc:
    // 0x162acc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ad0: 0xa22002d6  sb          $zero, 0x2D6($s1)
    ctx->pc = 0x162ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x162ad4: 0xc054d48  jal         func_153520
    ctx->pc = 0x162AD4u;
    SET_GPR_U32(ctx, 31, 0x162ADCu);
    ctx->pc = 0x162AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162AD4u;
            // 0x162ad8: 0xa22002fe  sb          $zero, 0x2FE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 766), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (runtime->hasFunction(0x153520u)) {
        auto targetFn = runtime->lookupFunction(0x153520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162ADCu; }
        if (ctx->pc != 0x162ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153520_0x153520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162ADCu; }
        if (ctx->pc != 0x162ADCu) { return; }
    }
    ctx->pc = 0x162ADCu;
label_162adc:
    // 0x162adc: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x162adcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x162ae0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x162ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x162ae4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162AE4u;
    {
        const bool branch_taken_0x162ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ae4) {
            ctx->pc = 0x162B0Cu;
            goto label_162b0c;
        }
    }
    ctx->pc = 0x162AECu;
    // 0x162aec: 0xc05ce48  jal         func_173920
    ctx->pc = 0x162AECu;
    SET_GPR_U32(ctx, 31, 0x162AF4u);
    ctx->pc = 0x162AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162AECu;
            // 0x162af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AF4u; }
        if (ctx->pc != 0x162AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173920_0x173920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162AF4u; }
        if (ctx->pc != 0x162AF4u) { return; }
    }
    ctx->pc = 0x162AF4u;
label_162af4:
    // 0x162af4: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x162af4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162af8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x162af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x162afc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162AFCu;
    {
        const bool branch_taken_0x162afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162afc) {
            ctx->pc = 0x162B0Cu;
            goto label_162b0c;
        }
    }
    ctx->pc = 0x162B04u;
    // 0x162b04: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x162B04u;
    SET_GPR_U32(ctx, 31, 0x162B0Cu);
    ctx->pc = 0x162B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B04u;
            // 0x162b08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (runtime->hasFunction(0x193DE0u)) {
        auto targetFn = runtime->lookupFunction(0x193DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B0Cu; }
        if (ctx->pc != 0x162B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193DE0_0x193de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B0Cu; }
        if (ctx->pc != 0x162B0Cu) { return; }
    }
    ctx->pc = 0x162B0Cu;
label_162b0c:
    // 0x162b0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162b10:
    // 0x162b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x162B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B1Cu;
            // 0x162b20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162B24u;
    // 0x162b24: 0x0  nop
    ctx->pc = 0x162b24u;
    // NOP
    // 0x162b28: 0x0  nop
    ctx->pc = 0x162b28u;
    // NOP
    // 0x162b2c: 0x0  nop
    ctx->pc = 0x162b2cu;
    // NOP
label_162b30:
    // 0x162b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162b34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162b38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162b3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162b40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x162b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b44: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x162B44u;
    SET_GPR_U32(ctx, 31, 0x162B4Cu);
    ctx->pc = 0x162B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B44u;
            // 0x162b48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (runtime->hasFunction(0x1559F0u)) {
        auto targetFn = runtime->lookupFunction(0x1559F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B4Cu; }
        if (ctx->pc != 0x162B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001559F0_0x1559f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B4Cu; }
        if (ctx->pc != 0x162B4Cu) { return; }
    }
    ctx->pc = 0x162B4Cu;
label_162b4c:
    // 0x162b4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b50: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x162b50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162b54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162b58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162B58u;
    {
        const bool branch_taken_0x162b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b58) {
            ctx->pc = 0x162B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162B58u;
            // 0x162b5c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162B70u;
            goto label_162b70;
        }
    }
    ctx->pc = 0x162B60u;
    // 0x162b60: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162B60u;
    SET_GPR_U32(ctx, 31, 0x162B68u);
    ctx->pc = 0x162B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B60u;
            // 0x162b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B68u; }
        if (ctx->pc != 0x162B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B68u; }
        if (ctx->pc != 0x162B68u) { return; }
    }
    ctx->pc = 0x162B68u;
label_162b68:
    // 0x162b68: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x162B68u;
    {
        const bool branch_taken_0x162b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162B68u;
            // 0x162b6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b68) {
            ctx->pc = 0x162C04u;
            goto label_162c04;
        }
    }
    ctx->pc = 0x162B70u;
label_162b70:
    // 0x162b70: 0xa22002ae  sb          $zero, 0x2AE($s1)
    ctx->pc = 0x162b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
    // 0x162b74: 0xa22002d6  sb          $zero, 0x2D6($s1)
    ctx->pc = 0x162b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x162b78: 0xa22002fe  sb          $zero, 0x2FE($s1)
    ctx->pc = 0x162b78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 766), (uint8_t)GPR_U32(ctx, 0));
    // 0x162b7c: 0x96220266  lhu         $v0, 0x266($s1)
    ctx->pc = 0x162b7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162b80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162B80u;
    {
        const bool branch_taken_0x162b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162b80) {
            ctx->pc = 0x162B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162B80u;
            // 0x162b84: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162B98u;
            goto label_162b98;
        }
    }
    ctx->pc = 0x162B88u;
    // 0x162b88: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162B88u;
    SET_GPR_U32(ctx, 31, 0x162B90u);
    ctx->pc = 0x162B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162B88u;
            // 0x162b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B90u; }
        if (ctx->pc != 0x162B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162B90u; }
        if (ctx->pc != 0x162B90u) { return; }
    }
    ctx->pc = 0x162B90u;
label_162b90:
    // 0x162b90: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x162B90u;
    {
        const bool branch_taken_0x162b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b90) {
            ctx->pc = 0x162C00u;
            goto label_162c00;
        }
    }
    ctx->pc = 0x162B98u;
label_162b98:
    // 0x162b98: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x162B98u;
    SET_GPR_U32(ctx, 31, 0x162BA0u);
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BA0u; }
        if (ctx->pc != 0x162BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BA0u; }
        if (ctx->pc != 0x162BA0u) { return; }
    }
    ctx->pc = 0x162BA0u;
label_162ba0:
    // 0x162ba0: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x162ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x162ba4: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x162ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x162ba8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x162BA8u;
    {
        const bool branch_taken_0x162ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ba8) {
            ctx->pc = 0x162BACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162BA8u;
            // 0x162bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162BD8u;
            goto label_162bd8;
        }
    }
    ctx->pc = 0x162BB0u;
    // 0x162bb0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x162bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x162bb4: 0x96230266  lhu         $v1, 0x266($s1)
    ctx->pc = 0x162bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162bb8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x162bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x162bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162bc0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x162bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162bc4: 0xa6220266  sh          $v0, 0x266($s1)
    ctx->pc = 0x162bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x162bc8: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x162bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162bcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162bd0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x162bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x162bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162bd8:
    // 0x162bd8: 0xc054d48  jal         func_153520
    ctx->pc = 0x162BD8u;
    SET_GPR_U32(ctx, 31, 0x162BE0u);
    ctx->pc = 0x153520u;
    if (runtime->hasFunction(0x153520u)) {
        auto targetFn = runtime->lookupFunction(0x153520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE0u; }
        if (ctx->pc != 0x162BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153520_0x153520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE0u; }
        if (ctx->pc != 0x162BE0u) { return; }
    }
    ctx->pc = 0x162BE0u;
label_162be0:
    // 0x162be0: 0xc05ce48  jal         func_173920
    ctx->pc = 0x162BE0u;
    SET_GPR_U32(ctx, 31, 0x162BE8u);
    ctx->pc = 0x162BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BE0u;
            // 0x162be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE8u; }
        if (ctx->pc != 0x162BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173920_0x173920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162BE8u; }
        if (ctx->pc != 0x162BE8u) { return; }
    }
    ctx->pc = 0x162BE8u;
label_162be8:
    // 0x162be8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x162be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162bec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x162becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x162bf0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162BF0u;
    {
        const bool branch_taken_0x162bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162bf0) {
            ctx->pc = 0x162C00u;
            goto label_162c00;
        }
    }
    ctx->pc = 0x162BF8u;
    // 0x162bf8: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x162BF8u;
    SET_GPR_U32(ctx, 31, 0x162C00u);
    ctx->pc = 0x162BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162BF8u;
            // 0x162bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (runtime->hasFunction(0x193DE0u)) {
        auto targetFn = runtime->lookupFunction(0x193DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C00u; }
        if (ctx->pc != 0x162C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193DE0_0x193de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C00u; }
        if (ctx->pc != 0x162C00u) { return; }
    }
    ctx->pc = 0x162C00u;
label_162c00:
    // 0x162c00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162c04:
    // 0x162c04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162c0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c10: 0x3e00008  jr          $ra
    ctx->pc = 0x162C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C10u;
            // 0x162c14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162C18u;
    // 0x162c18: 0x0  nop
    ctx->pc = 0x162c18u;
    // NOP
    // 0x162c1c: 0x0  nop
    ctx->pc = 0x162c1cu;
    // NOP
label_162c20:
    // 0x162c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x162c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x162c24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x162c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x162c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162c30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x162c30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c34: 0xc05567c  jal         func_1559F0
    ctx->pc = 0x162C34u;
    SET_GPR_U32(ctx, 31, 0x162C3Cu);
    ctx->pc = 0x162C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C34u;
            // 0x162c38: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1559F0u;
    if (runtime->hasFunction(0x1559F0u)) {
        auto targetFn = runtime->lookupFunction(0x1559F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C3Cu; }
        if (ctx->pc != 0x162C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001559F0_0x1559f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C3Cu; }
        if (ctx->pc != 0x162C3Cu) { return; }
    }
    ctx->pc = 0x162C3Cu;
label_162c3c:
    // 0x162c3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c40: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x162c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x162c44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x162c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x162c48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C48u;
    {
        const bool branch_taken_0x162c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c48) {
            ctx->pc = 0x162C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162C48u;
            // 0x162c4c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162C60u;
            goto label_162c60;
        }
    }
    ctx->pc = 0x162C50u;
    // 0x162c50: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162C50u;
    SET_GPR_U32(ctx, 31, 0x162C58u);
    ctx->pc = 0x162C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C50u;
            // 0x162c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C58u; }
        if (ctx->pc != 0x162C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C58u; }
        if (ctx->pc != 0x162C58u) { return; }
    }
    ctx->pc = 0x162C58u;
label_162c58:
    // 0x162c58: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x162C58u;
    {
        const bool branch_taken_0x162c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162C58u;
            // 0x162c5c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162c58) {
            ctx->pc = 0x162D14u;
            goto label_162d14;
        }
    }
    ctx->pc = 0x162C60u;
label_162c60:
    // 0x162c60: 0x96220266  lhu         $v0, 0x266($s1)
    ctx->pc = 0x162c60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162c64: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x162C64u;
    {
        const bool branch_taken_0x162c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c64) {
            ctx->pc = 0x162C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162C64u;
            // 0x162c68: 0xa22002ae  sb          $zero, 0x2AE($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 686), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162C7Cu;
            goto label_162c7c;
        }
    }
    ctx->pc = 0x162C6Cu;
    // 0x162c6c: 0xc055728  jal         func_155CA0
    ctx->pc = 0x162C6Cu;
    SET_GPR_U32(ctx, 31, 0x162C74u);
    ctx->pc = 0x162C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C6Cu;
            // 0x162c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C74u; }
        if (ctx->pc != 0x162C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C74u; }
        if (ctx->pc != 0x162C74u) { return; }
    }
    ctx->pc = 0x162C74u;
label_162c74:
    // 0x162c74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x162C74u;
    {
        const bool branch_taken_0x162c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162c74) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162C7Cu;
label_162c7c:
    // 0x162c7c: 0xa22002d6  sb          $zero, 0x2D6($s1)
    ctx->pc = 0x162c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x162c80: 0xa22002fe  sb          $zero, 0x2FE($s1)
    ctx->pc = 0x162c80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 766), (uint8_t)GPR_U32(ctx, 0));
    // 0x162c84: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x162C84u;
    SET_GPR_U32(ctx, 31, 0x162C8Cu);
    ctx->pc = 0x162C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C84u;
            // 0x162c88: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (runtime->hasFunction(0x189FE0u)) {
        auto targetFn = runtime->lookupFunction(0x189FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C8Cu; }
        if (ctx->pc != 0x162C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189FE0_0x189fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C8Cu; }
        if (ctx->pc != 0x162C8Cu) { return; }
    }
    ctx->pc = 0x162C8Cu;
label_162c8c:
    // 0x162c8c: 0x8c420270  lw          $v0, 0x270($v0)
    ctx->pc = 0x162c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x162c90: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x162c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x162c94: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x162C94u;
    {
        const bool branch_taken_0x162c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162c94) {
            ctx->pc = 0x162C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162C94u;
            // 0x162c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x162CE8u;
            goto label_162ce8;
        }
    }
    ctx->pc = 0x162C9Cu;
    // 0x162c9c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x162ca0: 0x96230266  lhu         $v1, 0x266($s1)
    ctx->pc = 0x162ca0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 614)));
    // 0x162ca4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x162ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x162ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162cac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x162cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x162cb0: 0xa6220266  sh          $v0, 0x266($s1)
    ctx->pc = 0x162cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 614), (uint16_t)GPR_U32(ctx, 2));
    // 0x162cb4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x162cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162cb8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x162cb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162cbc: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x162cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x162cc0: 0x922202b8  lbu         $v0, 0x2B8($s1)
    ctx->pc = 0x162cc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 696)));
    // 0x162cc4: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x162cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x162cc8: 0xa22202b8  sb          $v0, 0x2B8($s1)
    ctx->pc = 0x162cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 696), (uint8_t)GPR_U32(ctx, 2));
    // 0x162ccc: 0x922202e0  lbu         $v0, 0x2E0($s1)
    ctx->pc = 0x162cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x162cd0: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x162cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x162cd4: 0xa22202e0  sb          $v0, 0x2E0($s1)
    ctx->pc = 0x162cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 736), (uint8_t)GPR_U32(ctx, 2));
    // 0x162cd8: 0x92220308  lbu         $v0, 0x308($s1)
    ctx->pc = 0x162cd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 776)));
    // 0x162cdc: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x162ce0: 0xa2220308  sb          $v0, 0x308($s1)
    ctx->pc = 0x162ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 776), (uint8_t)GPR_U32(ctx, 2));
    // 0x162ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162ce8:
    // 0x162ce8: 0xc054d48  jal         func_153520
    ctx->pc = 0x162CE8u;
    SET_GPR_U32(ctx, 31, 0x162CF0u);
    ctx->pc = 0x153520u;
    if (runtime->hasFunction(0x153520u)) {
        auto targetFn = runtime->lookupFunction(0x153520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF0u; }
        if (ctx->pc != 0x162CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153520_0x153520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF0u; }
        if (ctx->pc != 0x162CF0u) { return; }
    }
    ctx->pc = 0x162CF0u;
label_162cf0:
    // 0x162cf0: 0xc05ce48  jal         func_173920
    ctx->pc = 0x162CF0u;
    SET_GPR_U32(ctx, 31, 0x162CF8u);
    ctx->pc = 0x162CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162CF0u;
            // 0x162cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173920u;
    if (runtime->hasFunction(0x173920u)) {
        auto targetFn = runtime->lookupFunction(0x173920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF8u; }
        if (ctx->pc != 0x162CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173920_0x173920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162CF8u; }
        if (ctx->pc != 0x162CF8u) { return; }
    }
    ctx->pc = 0x162CF8u;
label_162cf8:
    // 0x162cf8: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x162cf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x162cfc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x162cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x162d00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162D00u;
    {
        const bool branch_taken_0x162d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d00) {
            ctx->pc = 0x162D10u;
            goto label_162d10;
        }
    }
    ctx->pc = 0x162D08u;
    // 0x162d08: 0xc064f78  jal         func_193DE0
    ctx->pc = 0x162D08u;
    SET_GPR_U32(ctx, 31, 0x162D10u);
    ctx->pc = 0x162D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162D08u;
            // 0x162d0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193DE0u;
    if (runtime->hasFunction(0x193DE0u)) {
        auto targetFn = runtime->lookupFunction(0x193DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D10u; }
        if (ctx->pc != 0x162D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193DE0_0x193de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162D10u; }
        if (ctx->pc != 0x162D10u) { return; }
    }
    ctx->pc = 0x162D10u;
label_162d10:
    // 0x162d10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x162d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_162d14:
    // 0x162d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162d18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162d1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162d20: 0x3e00008  jr          $ra
    ctx->pc = 0x162D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162D20u;
            // 0x162d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162D28u;
    // 0x162d28: 0x0  nop
    ctx->pc = 0x162d28u;
    // NOP
    // 0x162d2c: 0x0  nop
    ctx->pc = 0x162d2cu;
    // NOP
    ctx->pc = 0x162d30u;
}
