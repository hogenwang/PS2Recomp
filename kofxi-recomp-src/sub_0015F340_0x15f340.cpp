#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F340
// Address: 0x15f340 - 0x15f6d0
void sub_0015F340_0x15f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F340_0x15f340");
#endif

    switch (ctx->pc) {
        case 0x15f378u: goto label_15f378;
        case 0x15f380u: goto label_15f380;
        case 0x15f3d4u: goto label_15f3d4;
        case 0x15f4b0u: goto label_15f4b0;
        case 0x15f548u: goto label_15f548;
        case 0x15f568u: goto label_15f568;
        case 0x15f570u: goto label_15f570;
        case 0x15f5d8u: goto label_15f5d8;
        case 0x15f5e8u: goto label_15f5e8;
        default: break;
    }

    ctx->pc = 0x15f340u;

    // 0x15f340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15f344: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x15f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x15f348: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15f34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15f354: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15f354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15f35c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15f35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15f364: 0x26710268  addiu       $s1, $s3, 0x268
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 616));
    // 0x15f368: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x15f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x15f36c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f370: 0xc057b80  jal         func_15EE00
    ctx->pc = 0x15F370u;
    SET_GPR_U32(ctx, 31, 0x15F378u);
    ctx->pc = 0x15F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F370u;
            // 0x15f374: 0xac820270  sw          $v0, 0x270($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EE00u;
    if (runtime->hasFunction(0x15EE00u)) {
        auto targetFn = runtime->lookupFunction(0x15EE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F378u; }
        if (ctx->pc != 0x15F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE00_0x15ee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F378u; }
        if (ctx->pc != 0x15F378u) { return; }
    }
    ctx->pc = 0x15F378u;
label_15f378:
    // 0x15f378: 0xc057bb8  jal         func_15EEE0
    ctx->pc = 0x15F378u;
    SET_GPR_U32(ctx, 31, 0x15F380u);
    ctx->pc = 0x15F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F378u;
            // 0x15f37c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EEE0u;
    if (runtime->hasFunction(0x15EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F380u; }
        if (ctx->pc != 0x15F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EEE0_0x15eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F380u; }
        if (ctx->pc != 0x15F380u) { return; }
    }
    ctx->pc = 0x15F380u;
label_15f380:
    // 0x15f380: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x15f380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15f384: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x15f384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x15f388: 0x34429200  ori         $v0, $v0, 0x9200
    ctx->pc = 0x15f388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37376);
    // 0x15f38c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f390: 0x544000af  bnel        $v0, $zero, . + 4 + (0xAF << 2)
    ctx->pc = 0x15F390u;
    {
        const bool branch_taken_0x15f390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f390) {
            ctx->pc = 0x15F394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F390u;
            // 0x15f394: 0x9624000e  lhu         $a0, 0xE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F650u;
            goto label_15f650;
        }
    }
    ctx->pc = 0x15F398u;
    // 0x15f398: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x15f39c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f3a0: 0x544000a7  bnel        $v0, $zero, . + 4 + (0xA7 << 2)
    ctx->pc = 0x15F3A0u;
    {
        const bool branch_taken_0x15f3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3a0) {
            ctx->pc = 0x15F3A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3A0u;
            // 0x15f3a4: 0x3c02ffdf  lui         $v0, 0xFFDF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F640u;
            goto label_15f640;
        }
    }
    ctx->pc = 0x15F3A8u;
    // 0x15f3a8: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x15f3a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x15f3ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f3b0: 0x30630072  andi        $v1, $v1, 0x72
    ctx->pc = 0x15f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)114);
    // 0x15f3b4: 0xa2230019  sb          $v1, 0x19($s1)
    ctx->pc = 0x15f3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f3b8: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x15f3b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15f3bc: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x15F3BCu;
    {
        const bool branch_taken_0x15f3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3BCu;
            // 0x15f3c0: 0x26700314  addiu       $s0, $s3, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f3bc) {
            ctx->pc = 0x15F454u;
            goto label_15f454;
        }
    }
    ctx->pc = 0x15F3C4u;
    // 0x15f3c4: 0x966400ea  lhu         $a0, 0xEA($s3)
    ctx->pc = 0x15f3c4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
    // 0x15f3c8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x15f3c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15f3cc: 0xc0638d8  jal         func_18E360
    ctx->pc = 0x15F3CCu;
    SET_GPR_U32(ctx, 31, 0x15F3D4u);
    ctx->pc = 0x15F3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3CCu;
            // 0x15f3d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E360u;
    if (runtime->hasFunction(0x18E360u)) {
        auto targetFn = runtime->lookupFunction(0x18E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3D4u; }
        if (ctx->pc != 0x15F3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018E360_0x18e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F3D4u; }
        if (ctx->pc != 0x15F3D4u) { return; }
    }
    ctx->pc = 0x15F3D4u;
label_15f3d4:
    // 0x15f3d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F3D4u;
    {
        const bool branch_taken_0x15f3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f3d4) {
            ctx->pc = 0x15F3D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F3D4u;
            // 0x15f3d8: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F3E8u;
            goto label_15f3e8;
        }
    }
    ctx->pc = 0x15F3DCu;
    // 0x15f3dc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x15f3e0: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
    // 0x15f3e4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x15f3e4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15f3e8:
    // 0x15f3e8: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x15f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x15f3ec: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x15f3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f3f0: 0xa204002e  sb          $a0, 0x2E($s0)
    ctx->pc = 0x15f3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 4));
    // 0x15f3f4: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x15f3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f3f8: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x15f3f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x15f3fc: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f400: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15f400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15f404: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15f408: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x15f408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x15f40c: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x15f40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x15f410: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15f410u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x15f414: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x15f414u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x15f418: 0xa6040028  sh          $a0, 0x28($s0)
    ctx->pc = 0x15f418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x15f41c: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x15f41cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f420: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x15f420u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15f424: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15f424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15f428: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x15f428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f42c: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x15f42cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x15f430: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15f430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15f434: 0xa603002a  sh          $v1, 0x2A($s0)
    ctx->pc = 0x15f434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f438: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x15f438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15f43c: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x15f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15f440: 0xa202002f  sb          $v0, 0x2F($s0)
    ctx->pc = 0x15f440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f444: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x15f444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x15f448: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x15f448u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15f44c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15F44Cu;
    {
        const bool branch_taken_0x15f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F44Cu;
            // 0x15f450: 0xa2020031  sb          $v0, 0x31($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f44c) {
            ctx->pc = 0x15F484u;
            goto label_15f484;
        }
    }
    ctx->pc = 0x15F454u;
label_15f454:
    // 0x15f454: 0x82020031  lb          $v0, 0x31($s0)
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x15f458: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15F458u;
    {
        const bool branch_taken_0x15f458 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15f458) {
            ctx->pc = 0x15F45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F458u;
            // 0x15f45c: 0x92230014  lbu         $v1, 0x14($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F488u;
            goto label_15f488;
        }
    }
    ctx->pc = 0x15F460u;
    // 0x15f460: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x15f460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15f464: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x15F464u;
    {
        const bool branch_taken_0x15f464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f464) {
            ctx->pc = 0x15F484u;
            goto label_15f484;
        }
    }
    ctx->pc = 0x15F46Cu;
    // 0x15f46c: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x15f46cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x15f470: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x15f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x15f474: 0xa222001d  sb          $v0, 0x1D($s1)
    ctx->pc = 0x15f474u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f478: 0x9202008a  lbu         $v0, 0x8A($s0)
    ctx->pc = 0x15f478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 138)));
    // 0x15f47c: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x15f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x15f480: 0xa202008a  sb          $v0, 0x8A($s0)
    ctx->pc = 0x15f480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 2));
label_15f484:
    // 0x15f484: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x15f484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_15f488:
    // 0x15f488: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x15f488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x15f48c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15f48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f490: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x15F490u;
    {
        const bool branch_taken_0x15f490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f490) {
            ctx->pc = 0x15F494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F490u;
            // 0x15f494: 0x96230020  lhu         $v1, 0x20($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F574u;
            goto label_15f574;
        }
    }
    ctx->pc = 0x15F498u;
    // 0x15f498: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15f49c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15f4a0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x15F4A0u;
    {
        const bool branch_taken_0x15f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4a0) {
            ctx->pc = 0x15F4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4A0u;
            // 0x15f4a4: 0xa2200014  sb          $zero, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F508u;
            goto label_15f508;
        }
    }
    ctx->pc = 0x15F4A8u;
    // 0x15f4a8: 0xc064fa4  jal         func_193E90
    ctx->pc = 0x15F4A8u;
    SET_GPR_U32(ctx, 31, 0x15F4B0u);
    ctx->pc = 0x15F4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4A8u;
            // 0x15f4ac: 0x26640314  addiu       $a0, $s3, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193E90u;
    if (runtime->hasFunction(0x193E90u)) {
        auto targetFn = runtime->lookupFunction(0x193E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4B0u; }
        if (ctx->pc != 0x15F4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E90_0x193e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4B0u; }
        if (ctx->pc != 0x15F4B0u) { return; }
    }
    ctx->pc = 0x15F4B0u;
label_15f4b0:
    // 0x15f4b0: 0xa2200014  sb          $zero, 0x14($s1)
    ctx->pc = 0x15f4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f4b4: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x15f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f4b8: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x15f4b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15f4bc: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x15f4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x15f4c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F4C0u;
    {
        const bool branch_taken_0x15f4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4c0) {
            ctx->pc = 0x15F4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4C0u;
            // 0x15f4c4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F4DCu;
            goto label_15f4dc;
        }
    }
    ctx->pc = 0x15F4C8u;
    // 0x15f4c8: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x15f4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f4cc: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x15f4ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x15f4d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15f4d4: 0xa2220013  sb          $v0, 0x13($s1)
    ctx->pc = 0x15f4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f4d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15f4dc:
    // 0x15f4dc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x15f4e0: 0x3c02ff81  lui         $v0, 0xFF81
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65409 << 16));
    // 0x15f4e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f4e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15f4ec: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x15f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x15f4f0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x15f4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x15f4f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x15f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x15f4f8: 0x8e630494  lw          $v1, 0x494($s3)
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x15f4fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f500: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15F500u;
    {
        const bool branch_taken_0x15f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F500u;
            // 0x15f504: 0xae620494  sw          $v0, 0x494($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f500) {
            ctx->pc = 0x15F534u;
            goto label_15f534;
        }
    }
    ctx->pc = 0x15F508u;
label_15f508:
    // 0x15f508: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x15f508u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x15f50c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15f510: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x15f510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f514: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x15f514u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15f518: 0x3042c000  andi        $v0, $v0, 0xC000
    ctx->pc = 0x15f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49152);
    // 0x15f51c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F51Cu;
    {
        const bool branch_taken_0x15f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f51c) {
            ctx->pc = 0x15F520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F51Cu;
            // 0x15f520: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F538u;
            goto label_15f538;
        }
    }
    ctx->pc = 0x15F524u;
    // 0x15f524: 0xa2200012  sb          $zero, 0x12($s1)
    ctx->pc = 0x15f524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x15f528: 0x92220013  lbu         $v0, 0x13($s1)
    ctx->pc = 0x15f528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x15f52c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15f530: 0xa2220013  sb          $v0, 0x13($s1)
    ctx->pc = 0x15f530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 2));
label_15f534:
    // 0x15f534: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15f538:
    // 0x15f538: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x15f538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x15f53c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x15f540: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x15F540u;
    SET_GPR_U32(ctx, 31, 0x15F548u);
    ctx->pc = 0x15F544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F540u;
            // 0x15f544: 0x966400ea  lhu         $a0, 0xEA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F548u; }
        if (ctx->pc != 0x15F548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D7C0_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F548u; }
        if (ctx->pc != 0x15F548u) { return; }
    }
    ctx->pc = 0x15F548u;
label_15f548:
    // 0x15f548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15f548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f54c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x15f54cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f554: 0x2666029c  addiu       $a2, $s3, 0x29C
    ctx->pc = 0x15f554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 668));
    // 0x15f558: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15f558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f55c: 0x26680314  addiu       $t0, $s3, 0x314
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
    // 0x15f560: 0xc057db4  jal         func_15F6D0
    ctx->pc = 0x15F560u;
    SET_GPR_U32(ctx, 31, 0x15F568u);
    ctx->pc = 0x15F564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F560u;
            // 0x15f564: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F6D0u;
    if (runtime->hasFunction(0x15F6D0u)) {
        auto targetFn = runtime->lookupFunction(0x15F6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F568u; }
        if (ctx->pc != 0x15F568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F6D0_0x15f6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F568u; }
        if (ctx->pc != 0x15F568u) { return; }
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0xc064fa0  jal         func_193E80
    ctx->pc = 0x15F568u;
    SET_GPR_U32(ctx, 31, 0x15F570u);
    ctx->pc = 0x15F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F568u;
            // 0x15f56c: 0x26640314  addiu       $a0, $s3, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 788));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193E80u;
    if (runtime->hasFunction(0x193E80u)) {
        auto targetFn = runtime->lookupFunction(0x193E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F570u; }
        if (ctx->pc != 0x15F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E80_0x193e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F570u; }
        if (ctx->pc != 0x15F570u) { return; }
    }
    ctx->pc = 0x15F570u;
label_15f570:
    // 0x15f570: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x15f570u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_15f574:
    // 0x15f574: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15f578: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15F578u;
    {
        const bool branch_taken_0x15f578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15f578) {
            ctx->pc = 0x15F57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F578u;
            // 0x15f57c: 0x9223001b  lbu         $v1, 0x1B($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F5ACu;
            goto label_15f5ac;
        }
    }
    ctx->pc = 0x15F580u;
    // 0x15f580: 0xa6220020  sh          $v0, 0x20($s1)
    ctx->pc = 0x15f580u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x15f584: 0x9222001d  lbu         $v0, 0x1D($s1)
    ctx->pc = 0x15f584u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x15f588: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x15f588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x15f58c: 0xa222001d  sb          $v0, 0x1D($s1)
    ctx->pc = 0x15f58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f590: 0x9223001d  lbu         $v1, 0x1D($s1)
    ctx->pc = 0x15f590u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 29)));
    // 0x15f594: 0x9202008a  lbu         $v0, 0x8A($s0)
    ctx->pc = 0x15f594u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 138)));
    // 0x15f598: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15f598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x15f59c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15f59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15f5a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15f5a4: 0xa202008a  sb          $v0, 0x8A($s0)
    ctx->pc = 0x15f5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f5a8: 0x9223001b  lbu         $v1, 0x1B($s1)
    ctx->pc = 0x15f5a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
label_15f5ac:
    // 0x15f5ac: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x15f5acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x15f5b0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x15f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x15f5b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15f5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15f5b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x15F5B8u;
    {
        const bool branch_taken_0x15f5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5b8) {
            ctx->pc = 0x15F5BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5B8u;
            // 0x15f5bc: 0x9222001b  lbu         $v0, 0x1B($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F5ECu;
            goto label_15f5ec;
        }
    }
    ctx->pc = 0x15F5C0u;
    // 0x15f5c0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x15f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x15f5c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F5C4u;
    {
        const bool branch_taken_0x15f5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5c4) {
            ctx->pc = 0x15F5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5C4u;
            // 0x15f5c8: 0x8e6400dc  lw          $a0, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F5E0u;
            goto label_15f5e0;
        }
    }
    ctx->pc = 0x15F5CCu;
    // 0x15f5cc: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x15f5d0: 0xc04bf7c  jal         func_12FDF0
    ctx->pc = 0x15F5D0u;
    SET_GPR_U32(ctx, 31, 0x15F5D8u);
    ctx->pc = 0x15F5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5D0u;
            // 0x15f5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FDF0u;
    if (runtime->hasFunction(0x12FDF0u)) {
        auto targetFn = runtime->lookupFunction(0x12FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5D8u; }
        if (ctx->pc != 0x15F5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FDF0_0x12fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5D8u; }
        if (ctx->pc != 0x15F5D8u) { return; }
    }
    ctx->pc = 0x15F5D8u;
label_15f5d8:
    // 0x15f5d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F5D8u;
    {
        const bool branch_taken_0x15f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5d8) {
            ctx->pc = 0x15F5E8u;
            goto label_15f5e8;
        }
    }
    ctx->pc = 0x15F5E0u;
label_15f5e0:
    // 0x15f5e0: 0xc04bf7c  jal         func_12FDF0
    ctx->pc = 0x15F5E0u;
    SET_GPR_U32(ctx, 31, 0x15F5E8u);
    ctx->pc = 0x15F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5E0u;
            // 0x15f5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FDF0u;
    if (runtime->hasFunction(0x12FDF0u)) {
        auto targetFn = runtime->lookupFunction(0x12FDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5E8u; }
        if (ctx->pc != 0x15F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FDF0_0x12fdf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F5E8u; }
        if (ctx->pc != 0x15F5E8u) { return; }
    }
    ctx->pc = 0x15F5E8u;
label_15f5e8:
    // 0x15f5e8: 0x9222001b  lbu         $v0, 0x1B($s1)
    ctx->pc = 0x15f5e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
label_15f5ec:
    // 0x15f5ec: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x15f5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x15f5f0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x15f5f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15f5f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x15f5f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F5F8u;
    {
        const bool branch_taken_0x15f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5f8) {
            ctx->pc = 0x15F5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F5F8u;
            // 0x15f5fc: 0x92220014  lbu         $v0, 0x14($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F610u;
            goto label_15f610;
        }
    }
    ctx->pc = 0x15F600u;
    // 0x15f600: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x15f600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f604: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x15f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x15f608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F608u;
    {
        const bool branch_taken_0x15f608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F608u;
            // 0x15f60c: 0xa2220014  sb          $v0, 0x14($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f608) {
            ctx->pc = 0x15F618u;
            goto label_15f618;
        }
    }
    ctx->pc = 0x15F610u;
label_15f610:
    // 0x15f610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15f614: 0xa2220014  sb          $v0, 0x14($s1)
    ctx->pc = 0x15f614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 2));
label_15f618:
    // 0x15f618: 0x8e630494  lw          $v1, 0x494($s3)
    ctx->pc = 0x15f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
    // 0x15f61c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x15f620: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f624: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F624u;
    {
        const bool branch_taken_0x15f624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f624) {
            ctx->pc = 0x15F64Cu;
            goto label_15f64c;
        }
    }
    ctx->pc = 0x15F62Cu;
    // 0x15f62c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x15f62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15f630: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x15f634: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15f634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15f638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15F638u;
    {
        const bool branch_taken_0x15f638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F638u;
            // 0x15f63c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f638) {
            ctx->pc = 0x15F64Cu;
            goto label_15f64c;
        }
    }
    ctx->pc = 0x15F640u;
label_15f640:
    // 0x15f640: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15f640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15f644: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15f648: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15f648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_15f64c:
    // 0x15f64c: 0x9624000e  lhu         $a0, 0xE($s1)
    ctx->pc = 0x15f64cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_15f650:
    // 0x15f650: 0x3082c000  andi        $v0, $a0, 0xC000
    ctx->pc = 0x15f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x15f654: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15F654u;
    {
        const bool branch_taken_0x15f654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f654) {
            ctx->pc = 0x15F658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F654u;
            // 0x15f658: 0x9622000e  lhu         $v0, 0xE($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F6A0u;
            goto label_15f6a0;
        }
    }
    ctx->pc = 0x15F65Cu;
    // 0x15f65c: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x15f65cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x15f660: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x15f660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x15f664: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x15f664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15f668: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15F668u;
    {
        const bool branch_taken_0x15f668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f668) {
            ctx->pc = 0x15F69Cu;
            goto label_15f69c;
        }
    }
    ctx->pc = 0x15F670u;
    // 0x15f670: 0x34830080  ori         $v1, $a0, 0x80
    ctx->pc = 0x15f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x15f674: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x15f674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x15f678: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x15f678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x15f67c: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x15f67cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x15f680: 0x3063c000  andi        $v1, $v1, 0xC000
    ctx->pc = 0x15f680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49152);
    // 0x15f684: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F684u;
    {
        const bool branch_taken_0x15f684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f684) {
            ctx->pc = 0x15F688u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F684u;
            // 0x15f688: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F6ACu;
            goto label_15f6ac;
        }
    }
    ctx->pc = 0x15F68Cu;
    // 0x15f68c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x15f690: 0x34420880  ori         $v0, $v0, 0x880
    ctx->pc = 0x15f690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2176);
    // 0x15f694: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15F694u;
    {
        const bool branch_taken_0x15f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F694u;
            // 0x15f698: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f694) {
            ctx->pc = 0x15F6A8u;
            goto label_15f6a8;
        }
    }
    ctx->pc = 0x15F69Cu;
label_15f69c:
    // 0x15f69c: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x15f69cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_15f6a0:
    // 0x15f6a0: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x15f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x15f6a4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x15f6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
label_15f6a8:
    // 0x15f6a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15f6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f6ac:
    // 0x15f6ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f6acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f6b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f6b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f6bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x15F6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F6C0u;
            // 0x15f6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F6C8u;
    // 0x15f6c8: 0x0  nop
    ctx->pc = 0x15f6c8u;
    // NOP
    // 0x15f6cc: 0x0  nop
    ctx->pc = 0x15f6ccu;
    // NOP
    ctx->pc = 0x15f6d0u;
}
