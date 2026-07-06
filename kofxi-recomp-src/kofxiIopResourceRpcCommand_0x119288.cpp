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

// Function: kofxiIopResourceRpcCommand
// Address: 0x119288 - 0x1198c8
void kofxiIopResourceRpcCommand_0x119288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiIopResourceRpcCommand_0x119288");
#endif

    switch (ctx->pc) {
        case 0x1192f0u: goto label_1192f0;
        case 0x119470u: goto label_119470;
        case 0x119508u: goto label_119508;
        case 0x1195bcu: goto label_1195bc;
        case 0x119610u: goto label_119610;
        case 0x119658u: goto label_119658;
        case 0x119750u: goto label_119750;
        case 0x119850u: goto label_119850;
        default: break;
    }

    ctx->pc = 0x119288u;

    // 0x119288: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x119288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x11928c: 0x3c0d0041  lui         $t5, 0x41
    ctx->pc = 0x11928cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65 << 16));
    // 0x119290: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x119290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x119294: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x119294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x119298: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x119298u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11929c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x11929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1192a0: 0x2602d7c0  addiu       $v0, $s0, -0x2840
    ctx->pc = 0x1192a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956992));
    // 0x1192a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1192a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1192a8: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x1192a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    // 0x1192ac: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1192acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192b0: 0xffa600d0  sd          $a2, 0xD0($sp)
    ctx->pc = 0x1192b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 6));
    // 0x1192b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1192b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1192b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1192bc: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x1192bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1192c0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1192c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1192c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1192c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192c8: 0xffa700d8  sd          $a3, 0xD8($sp)
    ctx->pc = 0x1192c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 7));
    // 0x1192cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1192ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1192d0: 0xffa800e0  sd          $t0, 0xE0($sp)
    ctx->pc = 0x1192d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 8));
    // 0x1192d4: 0xffa900e8  sd          $t1, 0xE8($sp)
    ctx->pc = 0x1192d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 9));
    // 0x1192d8: 0xffaa00f0  sd          $t2, 0xF0($sp)
    ctx->pc = 0x1192d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 10));
    // 0x1192dc: 0xffab00f8  sd          $t3, 0xF8($sp)
    ctx->pc = 0x1192dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 11));
    // 0x1192e0: 0xae02d7c0  sw          $v0, -0x2840($s0)
    ctx->pc = 0x1192e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956992), GPR_U32(ctx, 2));
    // 0x1192e4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1192e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1192e8: 0x8c71fff8  lw          $s1, -0x8($v1)
    ctx->pc = 0x1192e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1192ec: 0x0  nop
    ctx->pc = 0x1192ecu;
    // NOP
label_1192f0:
    // 0x1192f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1192f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1192f8: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1192fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x119300: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x119304: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x119304u;
    {
        const bool branch_taken_0x119304 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x119304) {
            ctx->pc = 0x1192F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1192f0;
        }
    }
    ctx->pc = 0x11930Cu;
    // 0x11930c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11930Cu;
    {
        const bool branch_taken_0x11930c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x119310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11930Cu;
        // 0x119310: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11930c) {
            ctx->pc = 0x119320u;
            goto label_119320;
        }
    }
    ctx->pc = 0x119314u;
    // 0x119314: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x119318: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x119318u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11931c: 0x8c529d78  lw          $s2, -0x6288($v0)
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942072)));
label_119320:
    // 0x119320: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
    // 0x119324: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x119324u;
    {
        const bool branch_taken_0x119324 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x119328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119324u;
        // 0x119328: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119324) {
            ctx->pc = 0x11938Cu;
            goto label_11938c;
        }
    }
    ctx->pc = 0x11932Cu;
    // 0x11932c: 0x2583d7c0  addiu       $v1, $t4, -0x2840
    ctx->pc = 0x11932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x119330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x119330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x119334: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x119334u;
    {
        const bool branch_taken_0x119334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119334u;
        // 0x119338: 0x8c65000c  lw          $a1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119334) {
            ctx->pc = 0x119364u;
            goto label_119364;
        }
    }
    ctx->pc = 0x11933Cu;
    // 0x11933c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11933cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x119340: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x119340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x119344: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x119344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x119348: 0x8c549d90  lw          $s4, -0x6270($v0)
    ctx->pc = 0x119348u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942096)));
    // 0x11934c: 0xac439d90  sw          $v1, -0x6270($v0)
    ctx->pc = 0x11934cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942096), GPR_U32(ctx, 3));
    // 0x119350: 0xac859d9c  sw          $a1, -0x6264($a0)
    ctx->pc = 0x119350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942108), GPR_U32(ctx, 5));
    // 0x119354: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x119354u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119358: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11935c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11935Cu;
    {
        const bool branch_taken_0x11935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11935Cu;
        // 0x119360: 0xac439da8  sw          $v1, -0x6258($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11935c) {
            ctx->pc = 0x1193C4u;
            goto label_1193c4;
        }
    }
    ctx->pc = 0x119364u;
label_119364:
    // 0x119364: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x119368: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x119368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11936c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11936cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x119370: 0x8c549d94  lw          $s4, -0x626C($v0)
    ctx->pc = 0x119370u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942100)));
    // 0x119374: 0xac439d94  sw          $v1, -0x626C($v0)
    ctx->pc = 0x119374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942100), GPR_U32(ctx, 3));
    // 0x119378: 0xac859da0  sw          $a1, -0x6260($a0)
    ctx->pc = 0x119378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942112), GPR_U32(ctx, 5));
    // 0x11937c: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x11937cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119380: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x119384: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x119384u;
    {
        const bool branch_taken_0x119384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119384u;
        // 0x119388: 0xac439dac  sw          $v1, -0x6254($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119384) {
            ctx->pc = 0x1193C4u;
            goto label_1193c4;
        }
    }
    ctx->pc = 0x11938Cu;
label_11938c:
    // 0x11938c: 0x34028170  ori         $v0, $zero, 0x8170
    ctx->pc = 0x11938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
    // 0x119390: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x119390u;
    {
        const bool branch_taken_0x119390 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x119394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119390u;
        // 0x119394: 0x34028130  ori         $v0, $zero, 0x8130 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119390) {
            ctx->pc = 0x1193C8u;
            goto label_1193c8;
        }
    }
    ctx->pc = 0x119398u;
    // 0x119398: 0x2583d7c0  addiu       $v1, $t4, -0x2840
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x11939c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1193a0: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1193a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1193a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1193a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1193a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1193a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1193ac: 0x8c949d98  lw          $s4, -0x6268($a0)
    ctx->pc = 0x1193acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942104)));
    // 0x1193b0: 0xac829d98  sw          $v0, -0x6268($a0)
    ctx->pc = 0x1193b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942104), GPR_U32(ctx, 2));
    // 0x1193b4: 0xaca69da4  sw          $a2, -0x625C($a1)
    ctx->pc = 0x1193b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942116), GPR_U32(ctx, 6));
    // 0x1193b8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1193b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193bc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1193bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1193c0: 0xac439db0  sw          $v1, -0x6250($v0)
    ctx->pc = 0x1193c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942128), GPR_U32(ctx, 3));
label_1193c4:
    // 0x1193c4: 0x34028130  ori         $v0, $zero, 0x8130
    ctx->pc = 0x1193c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
label_1193c8:
    // 0x1193c8: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1193C8u;
    {
        const bool branch_taken_0x1193c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1193CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193C8u;
        // 0x1193cc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193c8) {
            ctx->pc = 0x1193E4u;
            goto label_1193e4;
        }
    }
    ctx->pc = 0x1193D0u;
    // 0x1193d0: 0x340281a0  ori         $v0, $zero, 0x81A0
    ctx->pc = 0x1193d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33184);
    // 0x1193d4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1193D4u;
    {
        const bool branch_taken_0x1193d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1193D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193D4u;
        // 0x1193d8: 0x340281b0  ori         $v0, $zero, 0x81B0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33200);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193d4) {
            ctx->pc = 0x1193E4u;
            goto label_1193e4;
        }
    }
    ctx->pc = 0x1193DCu;
    // 0x1193dc: 0x16220011  bne         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1193DCu;
    {
        const bool branch_taken_0x1193dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1193E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193DCu;
        // 0x1193e0: 0x34028140  ori         $v0, $zero, 0x8140 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33088);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193dc) {
            ctx->pc = 0x119424u;
            goto label_119424;
        }
    }
    ctx->pc = 0x1193E4u;
label_1193e4:
    // 0x1193e4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193E4u;
    {
        const bool branch_taken_0x1193e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193E4u;
        // 0x1193e8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193e4) {
            ctx->pc = 0x1193F8u;
            goto label_1193f8;
        }
    }
    ctx->pc = 0x1193ECu;
    // 0x1193ec: 0x8c439d7c  lw          $v1, -0x6284($v0)
    ctx->pc = 0x1193ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942076)));
    // 0x1193f0: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x1193f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193f4: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1193f8:
    // 0x1193f8: 0x2589d7c0  addiu       $t1, $t4, -0x2840
    ctx->pc = 0x1193f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x1193fc: 0x8d82d7c0  lw          $v0, -0x2840($t4)
    ctx->pc = 0x1193fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294956992)));
    // 0x119400: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x119400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x119404: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x119404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119408: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x119408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x11940c: 0x25a4d800  addiu       $a0, $t5, -0x2800
    ctx->pc = 0x11940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957056));
    // 0x119410: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x119410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x119414: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x119414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x119418: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x119418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11941c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x11941Cu;
    {
        const bool branch_taken_0x11941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11941Cu;
        // 0x119420: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11941c) {
            ctx->pc = 0x1195B4u;
            goto label_1195b4;
        }
    }
    ctx->pc = 0x119424u;
label_119424:
    // 0x119424: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x119424u;
    {
        const bool branch_taken_0x119424 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x119428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119424u;
        // 0x119428: 0x340281c0  ori         $v0, $zero, 0x81C0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33216);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119424) {
            ctx->pc = 0x119488u;
            goto label_119488;
        }
    }
    ctx->pc = 0x11942Cu;
    // 0x11942c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11942Cu;
    {
        const bool branch_taken_0x11942c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11942Cu;
        // 0x119430: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11942c) {
            ctx->pc = 0x119440u;
            goto label_119440;
        }
    }
    ctx->pc = 0x119434u;
    // 0x119434: 0x8c439d7c  lw          $v1, -0x6284($v0)
    ctx->pc = 0x119434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942076)));
    // 0x119438: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x119438u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11943c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x11943cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_119440:
    // 0x119440: 0x2587d7c0  addiu       $a3, $t4, -0x2840
    ctx->pc = 0x119440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x119444: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x119444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119448: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x119448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x11944c: 0x25a4d800  addiu       $a0, $t5, -0x2800
    ctx->pc = 0x11944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957056));
    // 0x119450: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x119450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x119454: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x119454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x119458: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x119458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11945c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x119460: 0x34a58140  ori         $a1, $a1, 0x8140
    ctx->pc = 0x119460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33088);
    // 0x119464: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x119464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x119468: 0xc04434c  jal         func_110D30
    ctx->pc = 0x119468u;
    SET_GPR_U32(ctx, 31, 0x119470u);
    ctx->pc = 0x11946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119468u;
    // 0x11946c: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x119468u, 0x119470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119470u;
label_119470:
    // 0x119470: 0x12400059  beqz        $s2, . + 4 + (0x59 << 2)
    ctx->pc = 0x119470u;
    {
        const bool branch_taken_0x119470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119470u;
        // 0x119474: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119470) {
            ctx->pc = 0x1195D8u;
            goto label_1195d8;
        }
    }
    ctx->pc = 0x119478u;
    // 0x119478: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x119478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11947c: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x11947cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119480: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x119480u;
    {
        const bool branch_taken_0x119480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119480u;
        // 0x119484: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119480) {
            ctx->pc = 0x1195D8u;
            goto label_1195d8;
        }
    }
    ctx->pc = 0x119488u;
label_119488:
    // 0x119488: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119488u;
    {
        const bool branch_taken_0x119488 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119488u;
        // 0x11948c: 0x340281d0  ori         $v0, $zero, 0x81D0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119488) {
            ctx->pc = 0x119498u;
            goto label_119498;
        }
    }
    ctx->pc = 0x119490u;
    // 0x119490: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x119490u;
    {
        const bool branch_taken_0x119490 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x119490) {
            ctx->pc = 0x11952Cu;
            goto label_11952c;
        }
    }
    ctx->pc = 0x119498u;
label_119498:
    // 0x119498: 0x2590d7c0  addiu       $s0, $t4, -0x2840
    ctx->pc = 0x119498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x11949c: 0x340381d0  ori         $v1, $zero, 0x81D0
    ctx->pc = 0x11949cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33232);
    // 0x1194a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1194a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1194a4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1194a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1194a8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1194A8u;
    {
        const bool branch_taken_0x1194a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1194ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194A8u;
        // 0x1194ac: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194a8) {
            ctx->pc = 0x1194B8u;
            goto label_1194b8;
        }
    }
    ctx->pc = 0x1194B0u;
    // 0x1194b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1194b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1194b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1194b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1194b8:
    // 0x1194b8: 0x8e09000c  lw          $t1, 0xC($s0)
    ctx->pc = 0x1194b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1194bc: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1194BCu;
    {
        const bool branch_taken_0x1194bc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1194C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194BCu;
        // 0x1194c0: 0x8e0a0010  lw          $t2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194bc) {
            ctx->pc = 0x1194CCu;
            goto label_1194cc;
        }
    }
    ctx->pc = 0x1194C4u;
    // 0x1194c4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1194c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1194c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1194c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1194cc:
    // 0x1194cc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1194CCu;
    {
        const bool branch_taken_0x1194cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194CCu;
        // 0x1194d0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194cc) {
            ctx->pc = 0x1194E0u;
            goto label_1194e0;
        }
    }
    ctx->pc = 0x1194D4u;
    // 0x1194d4: 0x8c439d7c  lw          $v1, -0x6284($v0)
    ctx->pc = 0x1194d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942076)));
    // 0x1194d8: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x1194d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194dc: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x1194dcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1194e0:
    // 0x1194e0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1194e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1194e4: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1194e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1194e8: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1194e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1194ec: 0x25a4d800  addiu       $a0, $t5, -0x2800
    ctx->pc = 0x1194ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957056));
    // 0x1194f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1194f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1194f4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1194f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1194f8: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x1194f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1194fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1194fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119500: 0xc04434c  jal         func_110D30
    ctx->pc = 0x119500u;
    SET_GPR_U32(ctx, 31, 0x119508u);
    ctx->pc = 0x119504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119500u;
    // 0x119504: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x119500u, 0x119508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119508u;
label_119508:
    // 0x119508: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x119508u;
    {
        const bool branch_taken_0x119508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x119508) {
            ctx->pc = 0x11950Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119508u;
            // 0x11950c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11951Cu;
            goto label_11951c;
        }
    }
    ctx->pc = 0x119510u;
    // 0x119510: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x119510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119514: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x119514u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119518: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x119518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_11951c:
    // 0x11951c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x11951Cu;
    {
        const bool branch_taken_0x11951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11951c) {
            ctx->pc = 0x119520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11951Cu;
            // 0x119520: 0x34028160  ori         $v0, $zero, 0x8160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1195D8u;
            goto label_1195d8;
        }
    }
    ctx->pc = 0x119524u;
    // 0x119524: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x119524u;
    {
        const bool branch_taken_0x119524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119524u;
        // 0x119528: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119524) {
            ctx->pc = 0x1195D0u;
            goto label_1195d0;
        }
    }
    ctx->pc = 0x11952Cu;
label_11952c:
    // 0x11952c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x119530: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x119530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x119534: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x119534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x119538: 0x2c4200f1  sltiu       $v0, $v0, 0xF1
    ctx->pc = 0x119538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)241) ? 1 : 0);
    // 0x11953c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11953Cu;
    {
        const bool branch_taken_0x11953c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11953c) {
            ctx->pc = 0x11957Cu;
            goto label_11957c;
        }
    }
    ctx->pc = 0x119544u;
    // 0x119544: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x119544u;
    {
        const bool branch_taken_0x119544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119544u;
        // 0x119548: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119544) {
            ctx->pc = 0x119558u;
            goto label_119558;
        }
    }
    ctx->pc = 0x11954Cu;
    // 0x11954c: 0x8c439d7c  lw          $v1, -0x6284($v0)
    ctx->pc = 0x11954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942076)));
    // 0x119550: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x119550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119554: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x119554u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_119558:
    // 0x119558: 0x2582d7c0  addiu       $v0, $t4, -0x2840
    ctx->pc = 0x119558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x11955c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x11955cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119560: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x119560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x119564: 0x25a4d800  addiu       $a0, $t5, -0x2800
    ctx->pc = 0x119564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957056));
    // 0x119568: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x119568u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11956c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x11956cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119570: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x119570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x119574: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x119574u;
    {
        const bool branch_taken_0x119574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119574u;
        // 0x119578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119574) {
            ctx->pc = 0x1195B0u;
            goto label_1195b0;
        }
    }
    ctx->pc = 0x11957Cu;
label_11957c:
    // 0x11957c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11957Cu;
    {
        const bool branch_taken_0x11957c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x119580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11957Cu;
        // 0x119580: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11957c) {
            ctx->pc = 0x119590u;
            goto label_119590;
        }
    }
    ctx->pc = 0x119584u;
    // 0x119584: 0x8c439d7c  lw          $v1, -0x6284($v0)
    ctx->pc = 0x119584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942076)));
    // 0x119588: 0x380982d  daddu       $s3, $gp, $zero
    ctx->pc = 0x119588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11958c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x11958cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_119590:
    // 0x119590: 0x2582d7c0  addiu       $v0, $t4, -0x2840
    ctx->pc = 0x119590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294956992));
    // 0x119594: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x119594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119598: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x119598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11959c: 0x25a4d800  addiu       $a0, $t5, -0x2800
    ctx->pc = 0x11959cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294957056));
    // 0x1195a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1195a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1195a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1195a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195a8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1195ac: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1195acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1195b0:
    // 0x1195b0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1195b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1195b4:
    // 0x1195b4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1195B4u;
    SET_GPR_U32(ctx, 31, 0x1195BCu);
    ctx->pc = 0x1195B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195B4u;
    // 0x1195b8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1195B4u, 0x1195BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195BCu;
label_1195bc:
    // 0x1195bc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1195BCu;
    {
        const bool branch_taken_0x1195bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195BCu;
        // 0x1195c0: 0x8e02d7c0  lw          $v0, -0x2840($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195bc) {
            ctx->pc = 0x1195D0u;
            goto label_1195d0;
        }
    }
    ctx->pc = 0x1195C4u;
    // 0x1195c4: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x1195c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195c8: 0x260e02d  daddu       $gp, $s3, $zero
    ctx->pc = 0x1195c8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195cc: 0x8e02d7c0  lw          $v0, -0x2840($s0)
    ctx->pc = 0x1195ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956992)));
label_1195d0:
    // 0x1195d0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1195d4: 0x34028160  ori         $v0, $zero, 0x8160
    ctx->pc = 0x1195d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33120);
label_1195d8:
    // 0x1195d8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1195D8u;
    {
        const bool branch_taken_0x1195d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1195DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195D8u;
        // 0x1195dc: 0x34028170  ori         $v0, $zero, 0x8170 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33136);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195d8) {
            ctx->pc = 0x1195E8u;
            goto label_1195e8;
        }
    }
    ctx->pc = 0x1195E0u;
    // 0x1195e0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1195E0u;
    {
        const bool branch_taken_0x1195e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1195E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195E0u;
        // 0x1195e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195e0) {
            ctx->pc = 0x1195F0u;
            goto label_1195f0;
        }
    }
    ctx->pc = 0x1195E8u;
label_1195e8:
    // 0x1195e8: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x1195e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x1195ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1195ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1195f0:
    // 0x1195f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1195f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1195f4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1195f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1195f8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1195f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1195fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1195fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119600: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x119600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119604: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x119604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119608: 0x3e00008  jr          $ra
    ctx->pc = 0x119608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119608u;
        // 0x11960c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119610u;
label_119610:
    // 0x119610: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x119610u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x119614: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x119614u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x119618: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x119618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11961c: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x11961cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x119620: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x119620u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x119624: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x119624u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x119628: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x119628u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11962c: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x11962Cu;
    {
        const bool branch_taken_0x11962c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x119630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11962Cu;
        // 0x119630: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11962c) {
            ctx->pc = 0x11963Cu;
            goto label_11963c;
        }
    }
    ctx->pc = 0x119634u;
    // 0x119634: 0x3e00008  jr          $ra
    ctx->pc = 0x119634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119634u;
        // 0x119638: 0xc5e0abac  lwc1        $f0, -0x5454($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294945708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11963Cu;
label_11963c:
    // 0x11963c: 0x5a10008  bgez        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11963Cu;
    {
        const bool branch_taken_0x11963c = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x119640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11963Cu;
        // 0x119640: 0x3c0e004a  lui         $t6, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11963c) {
            ctx->pc = 0x119660u;
            goto label_119660;
        }
    }
    ctx->pc = 0x119644u;
    // 0x119644: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x119644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x119648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x119648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11964c: 0x0  nop
    ctx->pc = 0x11964cu;
    // NOP
    // 0x119650: 0x0  nop
    ctx->pc = 0x119650u;
    // NOP
    // 0x119654: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x119654u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_119658:
    // 0x119658: 0x3e00008  jr          $ra
    ctx->pc = 0x119658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119660u;
label_119660:
    // 0x119660: 0x1aa5824  and         $t3, $t5, $t2
    ctx->pc = 0x119660u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
    // 0x119664: 0xd65c3  sra         $t4, $t5, 23
    ctx->pc = 0x119664u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 13), 23));
    // 0x119668: 0x35cefb20  ori         $t6, $t6, 0xFB20
    ctx->pc = 0x119668u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)64288);
    // 0x11966c: 0x16e7021  addu        $t6, $t3, $t6
    ctx->pc = 0x11966cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x119670: 0x3c0d0080  lui         $t5, 0x80
    ctx->pc = 0x119670u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)128 << 16));
    // 0x119674: 0x1cd4824  and         $t1, $t6, $t5
    ctx->pc = 0x119674u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x119678: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x119678u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x11967c: 0x12f7826  xor         $t7, $t1, $t7
    ctx->pc = 0x11967cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x119680: 0x256e000f  addiu       $t6, $t3, 0xF
    ctx->pc = 0x119680u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 15));
    // 0x119684: 0x16f6825  or          $t5, $t3, $t7
    ctx->pc = 0x119684u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x119688: 0x1ca7024  and         $t6, $t6, $t2
    ctx->pc = 0x119688u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 10));
    // 0x11968c: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x11968cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119690: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x119690u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119694: 0x25efabb0  addiu       $t7, $t7, -0x5450
    ctx->pc = 0x119694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945712));
    // 0x119698: 0x258cff81  addiu       $t4, $t4, -0x7F
    ctx->pc = 0x119698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967169));
    // 0x11969c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1196a0: 0x29ce0010  slti        $t6, $t6, 0x10
    ctx->pc = 0x1196a0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1196a4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1196a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1196a8: 0x97dc3  sra         $t7, $t1, 23
    ctx->pc = 0x1196a8u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 9), 23));
    // 0x1196ac: 0x11c0002b  beqz        $t6, . + 4 + (0x2B << 2)
    ctx->pc = 0x1196ACu;
    {
        const bool branch_taken_0x1196ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196ACu;
        // 0x1196b0: 0x18f6021  addu        $t4, $t4, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196ac) {
            ctx->pc = 0x11975Cu;
            goto label_11975c;
        }
    }
    ctx->pc = 0x1196B4u;
    // 0x1196b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1196b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1196b8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1196b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1196bc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1196BCu;
    {
        const bool branch_taken_0x1196bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1196C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196BCu;
        // 0x1196c0: 0x3c0d003e  lui         $t5, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196bc) {
            ctx->pc = 0x1196F4u;
            goto label_1196f4;
        }
    }
    ctx->pc = 0x1196C4u;
    // 0x1196c4: 0x1180ffe4  beqz        $t4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1196C4u;
    {
        const bool branch_taken_0x1196c4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196C4u;
        // 0x1196c8: 0x3c0d003e  lui         $t5, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196c4) {
            ctx->pc = 0x119658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119658;
        }
    }
    ctx->pc = 0x1196CCu;
    // 0x1196cc: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x1196ccu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1196d0: 0x25adabb4  addiu       $t5, $t5, -0x544C
    ctx->pc = 0x1196d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945716));
    // 0x1196d4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1196d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1196d8: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1196d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x1196dc: 0x25efabb8  addiu       $t7, $t7, -0x5448
    ctx->pc = 0x1196dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945720));
    // 0x1196e0: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x1196e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1196e4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1196e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1196e8: 0x4600301a  mula.s      $f6, $f0
    ctx->pc = 0x1196e8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x1196ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1196ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196ECu;
        // 0x1196f0: 0x4601301c  madd.s      $f0, $f6, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196F4u;
label_1196f4:
    // 0x1196f4: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x1196f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1196f8: 0x25adabbc  addiu       $t5, $t5, -0x5444
    ctx->pc = 0x1196f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945724));
    // 0x1196fc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1196fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119700: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x119700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119704: 0x25efabc0  addiu       $t7, $t7, -0x5440
    ctx->pc = 0x119704u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945728));
    // 0x119708: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x119708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11970c: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x11970cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x119710: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x119710u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x119714: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x119714u;
    {
        const bool branch_taken_0x119714 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x119718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119714u;
        // 0x119718: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119714) {
            ctx->pc = 0x119724u;
            goto label_119724;
        }
    }
    ctx->pc = 0x11971Cu;
    // 0x11971c: 0x3e00008  jr          $ra
    ctx->pc = 0x11971Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11971Cu;
        // 0x119720: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11971Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119724u;
label_119724:
    // 0x119724: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x119724u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119728: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119728u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x11972c: 0x25adabb8  addiu       $t5, $t5, -0x5448
    ctx->pc = 0x11972cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945720));
    // 0x119730: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119730u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119734: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x119734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x119738: 0x25efabb4  addiu       $t7, $t7, -0x544C
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945716));
    // 0x11973c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119740: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119744: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x119744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x119748: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x119748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x11974c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x11974cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_119750:
    // 0x119750: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x119750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x119754: 0x3e00008  jr          $ra
    ctx->pc = 0x119754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119754u;
        // 0x119758: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11975Cu;
label_11975c:
    // 0x11975c: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119760: 0x448c3000  mtc1        $t4, $f6
    ctx->pc = 0x119760u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x119764: 0x25adabc4  addiu       $t5, $t5, -0x543C
    ctx->pc = 0x119764u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945732));
    // 0x119768: 0x3c0effcf  lui         $t6, 0xFFCF
    ctx->pc = 0x119768u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65487 << 16));
    // 0x11976c: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x11976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119770: 0x3c0f0035  lui         $t7, 0x35
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)53 << 16));
    // 0x119774: 0x35ce5c30  ori         $t6, $t6, 0x5C30
    ctx->pc = 0x119774u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)23600);
    // 0x119778: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x119778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x11977c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11977cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x119780: 0x35efc288  ori         $t7, $t7, 0xC288
    ctx->pc = 0x119780u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)49800);
    // 0x119784: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x119788: 0x16e4821  addu        $t1, $t3, $t6
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x11978c: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x11978cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x119790: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119790u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119794: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119794u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119798: 0x25adabcc  addiu       $t5, $t5, -0x5434
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945740));
    // 0x11979c: 0x0  nop
    ctx->pc = 0x11979cu;
    // NOP
    // 0x1197a0: 0x0  nop
    ctx->pc = 0x1197a0u;
    // NOP
    // 0x1197a4: 0x460061c3  div.s       $f7, $f12, $f0
    ctx->pc = 0x1197a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[7] = ctx->f[12] / ctx->f[0];
    // 0x1197a8: 0x25efabc8  addiu       $t7, $t7, -0x5438
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945736));
    // 0x1197ac: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x1197acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1197b0: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x1197b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x1197b4: 0x25adabd4  addiu       $t5, $t5, -0x542C
    ctx->pc = 0x1197b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945748));
    // 0x1197b8: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x1197b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1197bc: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x1197c0: 0x46073942  mul.s       $f5, $f7, $f7
    ctx->pc = 0x1197c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1197c4: 0x25adabdc  addiu       $t5, $t5, -0x5424
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945756));
    // 0x1197c8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1197c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1197cc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1197d0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x1197d0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1197d4: 0x25efabd0  addiu       $t7, $t7, -0x5430
    ctx->pc = 0x1197d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945744));
    // 0x1197d8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1197d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1197dc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1197dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1197e0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1197e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1197e4: 0x25efabd8  addiu       $t7, $t7, -0x5428
    ctx->pc = 0x1197e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945752));
    // 0x1197e8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1197e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1197ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1197ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1197f0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1197f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1197f4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1197f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1197f8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1197f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1197fc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1197fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x119800: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119800u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119804: 0xc5a30000  lwc1        $f3, 0x0($t5)
    ctx->pc = 0x119804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x119808: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11980c: 0x25efabe0  addiu       $t7, $t7, -0x5420
    ctx->pc = 0x11980cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945760));
    // 0x119810: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x119810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x119814: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x119814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x119818: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x119818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11981c: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x11981cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[4], ctx->f[1]));
    // 0x119820: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x119820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x119824: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x119824u;
    {
        const bool branch_taken_0x119824 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x119828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119824u;
        // 0x119828: 0x4600289c  madd.s      $f2, $f5, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119824) {
            ctx->pc = 0x119888u;
            goto label_119888;
        }
    }
    ctx->pc = 0x11982Cu;
    // 0x11982c: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x11982cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119830: 0x25adabc0  addiu       $t5, $t5, -0x5440
    ctx->pc = 0x119830u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945728));
    // 0x119834: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x119834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x119838: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x119838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11983c: 0x15800006  bnez        $t4, . + 4 + (0x6 << 2)
    ctx->pc = 0x11983Cu;
    {
        const bool branch_taken_0x11983c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x119840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11983Cu;
        // 0x119840: 0x460c00c2  mul.s       $f3, $f0, $f12 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11983c) {
            ctx->pc = 0x119858u;
            goto label_119858;
        }
    }
    ctx->pc = 0x119844u;
    // 0x119844: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x119844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x119848: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x119848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x11984c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x11984cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_119850:
    // 0x119850: 0x3e00008  jr          $ra
    ctx->pc = 0x119850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119850u;
        // 0x119854: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119858u;
label_119858:
    // 0x119858: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x119858u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x11985c: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x11985cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x119860: 0x25adabb8  addiu       $t5, $t5, -0x5448
    ctx->pc = 0x119860u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945720));
    // 0x119864: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x119864u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x119868: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x119868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11986c: 0x25efabb4  addiu       $t7, $t7, -0x544C
    ctx->pc = 0x11986cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945716));
    // 0x119870: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x119870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x119874: 0x4602381a  mula.s      $f7, $f2
    ctx->pc = 0x119874u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x119878: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x119878u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[0]));
    // 0x11987c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x11987cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x119880: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x119880u;
    {
        const bool branch_taken_0x119880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119880u;
        // 0x119884: 0x46001801  sub.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119880) {
            ctx->pc = 0x119750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119750;
        }
    }
    ctx->pc = 0x119888u;
label_119888:
    // 0x119888: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x119888u;
    {
        const bool branch_taken_0x119888 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x11988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119888u;
        // 0x11988c: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119888) {
            ctx->pc = 0x119898u;
            goto label_119898;
        }
    }
    ctx->pc = 0x119890u;
    // 0x119890: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x119890u;
    {
        const bool branch_taken_0x119890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119890u;
        // 0x119894: 0x46003802  mul.s       $f0, $f7, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119890) {
            ctx->pc = 0x119850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119850;
        }
    }
    ctx->pc = 0x119898u;
label_119898:
    // 0x119898: 0x3c0d003e  lui         $t5, 0x3E
    ctx->pc = 0x119898u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)62 << 16));
    // 0x11989c: 0x25adabb8  addiu       $t5, $t5, -0x5448
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294945720));
    // 0x1198a0: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x1198a4: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x1198a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1198a8: 0x25efabb4  addiu       $t7, $t7, -0x544C
    ctx->pc = 0x1198a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945716));
    // 0x1198ac: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x1198acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[7], ctx->f[0]));
    // 0x1198b0: 0x4601301d  msub.s      $f0, $f6, $f1
    ctx->pc = 0x1198b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[6], ctx->f[1]));
    // 0x1198b4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1198b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1198b8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x1198b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x1198bc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1198bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1198c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1198C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1198C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198C0u;
        // 0x1198c4: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1198C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1198C8u;
}
