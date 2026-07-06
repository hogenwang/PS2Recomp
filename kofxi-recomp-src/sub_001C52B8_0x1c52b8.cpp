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

// Function: sub_001C52B8
// Address: 0x1c52b8 - 0x1c5458
void sub_001C52B8_0x1c52b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C52B8_0x1c52b8");
#endif

    switch (ctx->pc) {
        case 0x1c5320u: goto label_1c5320;
        case 0x1c53c0u: goto label_1c53c0;
        default: break;
    }

    ctx->pc = 0x1c52b8u;

    // 0x1c52b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c52b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c52bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c52bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c52c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c52c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c52c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c52c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c52c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c52ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c52d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c52d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c52d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c52d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c52d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52dc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c52dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c52e0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x1c52e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c52e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c52e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c52e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c52ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c52ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c52f0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c52f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c52f4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c52f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c52f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c52fc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1c52fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c5300: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C5300u;
    {
        const bool branch_taken_0x1c5300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5300u;
        // 0x1c5304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5300) {
            ctx->pc = 0x1C53F8u;
            goto label_1c53f8;
        }
    }
    ctx->pc = 0x1C5308u;
    // 0x1c5308: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1c5308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x1c530c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5310: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c5310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c5314: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x1c5314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c5318: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x1c5318u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c531c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c531cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1c5320:
    // 0x1c5320: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1c5324: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5324u;
    {
        const bool branch_taken_0x1c5324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C5328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5324u;
        // 0x1c5328: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5324) {
            ctx->pc = 0x1C5338u;
            goto label_1c5338;
        }
    }
    ctx->pc = 0x1C532Cu;
    // 0x1c532c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c5330: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1c5330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c5334: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1c5334u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5338:
    // 0x1c5338: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1c5338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1c533c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1c533cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1c5340: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5340u;
    {
        const bool branch_taken_0x1c5340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1c5340) {
            ctx->pc = 0x1C5344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5340u;
            // 0x1c5344: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C535Cu;
            goto label_1c535c;
        }
    }
    ctx->pc = 0x1C5348u;
    // 0x1c5348: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5348u;
    {
        const bool branch_taken_0x1c5348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x1c5348) {
            ctx->pc = 0x1C534Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5348u;
            // 0x1c534c: 0x80820001  lb          $v0, 0x1($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C535Cu;
            goto label_1c535c;
        }
    }
    ctx->pc = 0x1C5350u;
    // 0x1c5350: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C5350u;
    {
        const bool branch_taken_0x1c5350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5350u;
        // 0x1c5354: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5350) {
            ctx->pc = 0x1C53E0u;
            goto label_1c53e0;
        }
    }
    ctx->pc = 0x1C5358u;
    // 0x1c5358: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1c5358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1c535c:
    // 0x1c535c: 0x50570006  beql        $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C535Cu;
    {
        const bool branch_taken_0x1c535c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1c535c) {
            ctx->pc = 0x1C5360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C535Cu;
            // 0x1c5360: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5378u;
            goto label_1c5378;
        }
    }
    ctx->pc = 0x1C5364u;
    // 0x1c5364: 0x50560004  beql        $v0, $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5364u;
    {
        const bool branch_taken_0x1c5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x1c5364) {
            ctx->pc = 0x1C5368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5364u;
            // 0x1c5368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5378u;
            goto label_1c5378;
        }
    }
    ctx->pc = 0x1C536Cu;
    // 0x1c536c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C536Cu;
    {
        const bool branch_taken_0x1c536c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C536Cu;
        // 0x1c5370: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c536c) {
            ctx->pc = 0x1C5380u;
            goto label_1c5380;
        }
    }
    ctx->pc = 0x1C5374u;
    // 0x1c5374: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c5374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c5378:
    // 0x1c5378: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x1c5378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1c537c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1c5380:
    // 0x1c5380: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1c5380u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5384: 0x10770003  beq         $v1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5384u;
    {
        const bool branch_taken_0x1c5384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x1C5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5384u;
        // 0x1c5388: 0x2458823  subu        $s1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5384) {
            ctx->pc = 0x1C5394u;
            goto label_1c5394;
        }
    }
    ctx->pc = 0x1C538Cu;
    // 0x1c538c: 0x54760003  bnel        $v1, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C538Cu;
    {
        const bool branch_taken_0x1c538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c538c) {
            ctx->pc = 0x1C5390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C538Cu;
            // 0x1c5390: 0x3d41018  mult        $v0, $fp, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C539Cu;
            goto label_1c539c;
        }
    }
    ctx->pc = 0x1C5394u;
label_1c5394:
    // 0x1c5394: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1c5394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5398: 0x3d41018  mult        $v0, $fp, $s4
    ctx->pc = 0x1c5398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1c539c:
    // 0x1c539c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c53a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c53a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53a4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1c53a8: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1c53ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c53acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53b0: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x1c53b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c53b4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1c53b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c53b8: 0xc049c48  jal         func_127120
    ctx->pc = 0x1C53B8u;
    SET_GPR_U32(ctx, 31, 0x1C53C0u);
    ctx->pc = 0x1C53BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53B8u;
    // 0x1c53bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1C53B8u, 0x1C53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53C0u;
label_1c53c0:
    // 0x1c53c0: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x1c53c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1c53c4: 0x80c2ffff  lb          $v0, -0x1($a2)
    ctx->pc = 0x1c53c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x1c53c8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C53C8u;
    {
        const bool branch_taken_0x1c53c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c53c8) {
            ctx->pc = 0x1C53CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C53C8u;
            // 0x1c53cc: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C53D0u;
            goto label_1c53d0;
        }
    }
    ctx->pc = 0x1C53D0u;
label_1c53d0:
    // 0x1c53d0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c53d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c53d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c53d8: 0x12950007  beq         $s4, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C53D8u;
    {
        const bool branch_taken_0x1c53d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C53DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C53D8u;
        // 0x1c53dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c53d8) {
            ctx->pc = 0x1C53F8u;
            goto label_1c53f8;
        }
    }
    ctx->pc = 0x1C53E0u;
label_1c53e0:
    // 0x1c53e0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1c53e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53e4: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1c53e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1c53e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c53e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53ec: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1c53ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c53f0: 0x5460ffcb  bnel        $v1, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1C53F0u;
    {
        const bool branch_taken_0x1c53f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c53f0) {
            ctx->pc = 0x1C53F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C53F0u;
            // 0x1c53f4: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5320u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5320;
        }
    }
    ctx->pc = 0x1C53F8u;
label_1c53f8:
    // 0x1c53f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c53fc: 0x2442ef50  addiu       $v0, $v0, -0x10B0
    ctx->pc = 0x1c53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x1c5400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c5400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c5404: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5404u;
    {
        const bool branch_taken_0x1c5404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5404) {
            ctx->pc = 0x1C5408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5404u;
            // 0x1c5408: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5424u;
            goto label_1c5424;
        }
    }
    ctx->pc = 0x1C540Cu;
    // 0x1c540c: 0xac5e000c  sw          $fp, 0xC($v0)
    ctx->pc = 0x1c540cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 30));
    // 0x1c5410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c5410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5414: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x1c5414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x1c5418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c5418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c541c: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x1c541cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x1c5420: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c5420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c5424:
    // 0x1c5424: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5428: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c5428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c542c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c542cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5430: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c5430u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5434: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c5434u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5438: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c5438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c543c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c543cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c5440: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c5440u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c5444: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c5444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c5448: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c5448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c544c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C544Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C544Cu;
        // 0x1c5450: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C544Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5454u;
    // 0x1c5454: 0x0  nop
    ctx->pc = 0x1c5454u;
    // NOP
}
