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

// Function: sub_002E5380
// Address: 0x2e5380 - 0x2e5738
void sub_002E5380_0x2e5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5380_0x2e5380");
#endif

    switch (ctx->pc) {
        case 0x2e53a4u: goto label_2e53a4;
        case 0x2e53c0u: goto label_2e53c0;
        case 0x2e53d0u: goto label_2e53d0;
        case 0x2e53f8u: goto label_2e53f8;
        case 0x2e54c4u: goto label_2e54c4;
        case 0x2e54ecu: goto label_2e54ec;
        case 0x2e55a8u: goto label_2e55a8;
        case 0x2e55b0u: goto label_2e55b0;
        case 0x2e55e8u: goto label_2e55e8;
        case 0x2e55f8u: goto label_2e55f8;
        case 0x2e5600u: goto label_2e5600;
        case 0x2e561cu: goto label_2e561c;
        case 0x2e5630u: goto label_2e5630;
        case 0x2e5674u: goto label_2e5674;
        case 0x2e5694u: goto label_2e5694;
        case 0x2e569cu: goto label_2e569c;
        case 0x2e56e0u: goto label_2e56e0;
        case 0x2e56ecu: goto label_2e56ec;
        case 0x2e571cu: goto label_2e571c;
        case 0x2e5724u: goto label_2e5724;
        default: break;
    }

    ctx->pc = 0x2e5380u;

    // 0x2e5380: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e5384: 0x3c0201ca  lui         $v0, 0x1CA
    ctx->pc = 0x2e5384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)458 << 16));
    // 0x2e5388: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e5388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e538c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2e538cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2e5390: 0x8c534dc0  lw          $s3, 0x4DC0($v0)
    ctx->pc = 0x2e5390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19904)));
    // 0x2e5394: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2e5394u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5398: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e5398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e539c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2e539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2e53a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e53a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2e53a4:
    // 0x2e53a4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e53a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e53ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e53acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e53b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e53b4: 0x1260005a  beqz        $s3, . + 4 + (0x5A << 2)
    ctx->pc = 0x2E53B4u;
    {
        const bool branch_taken_0x2e53b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53B4u;
        // 0x2e53b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53b4) {
            ctx->pc = 0x2E5520u;
            goto label_2e5520;
        }
    }
    ctx->pc = 0x2E53BCu;
    // 0x2e53bc: 0x26740004  addiu       $s4, $s3, 0x4
    ctx->pc = 0x2e53bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2e53c0:
    // 0x2e53c0: 0x26640208  addiu       $a0, $s3, 0x208
    ctx->pc = 0x2e53c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 520));
    // 0x2e53c4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e53c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53c8: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E53C8u;
    SET_GPR_U32(ctx, 31, 0x2E53D0u);
    ctx->pc = 0x2E53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53C8u;
    // 0x2e53cc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E53C8u, 0x2E53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53D0u;
label_2e53d0:
    // 0x2e53d0: 0x54400051  bnel        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x2E53D0u;
    {
        const bool branch_taken_0x2e53d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e53d0) {
            ctx->pc = 0x2E53D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E53D0u;
            // 0x2e53d4: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5518u;
            goto label_2e5518;
        }
    }
    ctx->pc = 0x2E53D8u;
    // 0x2e53d8: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2e53d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2e53dc: 0x8ee2e3d0  lw          $v0, -0x1C30($s7)
    ctx->pc = 0x2e53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
    // 0x2e53e0: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2E53E0u;
    {
        const bool branch_taken_0x2e53e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E53E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53E0u;
        // 0x2e53e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53e0) {
            ctx->pc = 0x2E5514u;
            goto label_2e5514;
        }
    }
    ctx->pc = 0x2E53E8u;
    // 0x2e53e8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2e53e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e53ec: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2e53ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2e53f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e53f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53f4: 0x0  nop
    ctx->pc = 0x2e53f4u;
    // NOP
label_2e53f8:
    // 0x2e53f8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e53fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5400: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5400u;
    {
        const bool branch_taken_0x2e5400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5400u;
        // 0x2e5404: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5400) {
            ctx->pc = 0x2E5458u;
            goto label_2e5458;
        }
    }
    ctx->pc = 0x2E5408u;
    // 0x2e5408: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5408u;
    {
        const bool branch_taken_0x2e5408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5408) {
            ctx->pc = 0x2E5420u;
            goto label_2e5420;
        }
    }
    ctx->pc = 0x2E5410u;
    // 0x2e5410: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5410u;
    {
        const bool branch_taken_0x2e5410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5410u;
        // 0x2e5414: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5410) {
            ctx->pc = 0x2E5438u;
            goto label_2e5438;
        }
    }
    ctx->pc = 0x2E5418u;
    // 0x2e5418: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2E5418u;
    {
        const bool branch_taken_0x2e5418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5418u;
        // 0x2e541c: 0x3403af20  ori         $v1, $zero, 0xAF20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5418) {
            ctx->pc = 0x2E5504u;
            goto label_2e5504;
        }
    }
    ctx->pc = 0x2E5420u;
label_2e5420:
    // 0x2e5420: 0x1096001a  beq         $a0, $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E5420u;
    {
        const bool branch_taken_0x2e5420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x2E5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5420u;
        // 0x2e5424: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5420) {
            ctx->pc = 0x2E548Cu;
            goto label_2e548c;
        }
    }
    ctx->pc = 0x2E5428u;
    // 0x2e5428: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E5428u;
    {
        const bool branch_taken_0x2e5428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5428u;
        // 0x2e542c: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5428) {
            ctx->pc = 0x2E5458u;
            goto label_2e5458;
        }
    }
    ctx->pc = 0x2E5430u;
    // 0x2e5430: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2E5430u;
    {
        const bool branch_taken_0x2e5430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5430u;
        // 0x2e5434: 0x3403af20  ori         $v1, $zero, 0xAF20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5430) {
            ctx->pc = 0x2E5504u;
            goto label_2e5504;
        }
    }
    ctx->pc = 0x2E5438u;
label_2e5438:
    // 0x2e5438: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2e5438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e543c: 0x8e02e3d4  lw          $v0, -0x1C2C($s0)
    ctx->pc = 0x2e543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
    // 0x2e5440: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5444: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5448: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E5448u;
    {
        const bool branch_taken_0x2e5448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5448u;
        // 0x2e544c: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5448) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E5450u;
    // 0x2e5450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5450u;
    {
        const bool branch_taken_0x2e5450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5450u;
        // 0x2e5454: 0x8e02e3d4  lw          $v0, -0x1C2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5450) {
            ctx->pc = 0x2E5460u;
            goto label_2e5460;
        }
    }
    ctx->pc = 0x2E5458u;
label_2e5458:
    // 0x2e5458: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2e5458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2e545c: 0x8e02e3d4  lw          $v0, -0x1C2C($s0)
    ctx->pc = 0x2e545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
label_2e5460:
    // 0x2e5460: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e5460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5464: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e5464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5468: 0x5044000f  beql        $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5468u;
    {
        const bool branch_taken_0x2e5468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e5468) {
            ctx->pc = 0x2E546Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5468u;
            // 0x2e546c: 0x8e03e3d4  lw          $v1, -0x1C2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E54A8u;
            goto label_2e54a8;
        }
    }
    ctx->pc = 0x2E5470u;
    // 0x2e5470: 0x14560023  bne         $v0, $s6, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E5470u;
    {
        const bool branch_taken_0x2e5470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2E5474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5470u;
        // 0x2e5474: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5470) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E5478u;
    // 0x2e5478: 0x90626a10  lbu         $v0, 0x6A10($v1)
    ctx->pc = 0x2e5478u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 27152)));
    // 0x2e547c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E547Cu;
    {
        const bool branch_taken_0x2e547c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E547Cu;
        // 0x2e5480: 0x8e03e3d4  lw          $v1, -0x1C2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e547c) {
            ctx->pc = 0x2E54A8u;
            goto label_2e54a8;
        }
    }
    ctx->pc = 0x2E5484u;
    // 0x2e5484: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E5484u;
    {
        const bool branch_taken_0x2e5484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5484u;
        // 0x2e5488: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5484) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E548Cu;
label_2e548c:
    // 0x2e548c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2e548cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5490: 0x8e02e3d4  lw          $v0, -0x1C2C($s0)
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
    // 0x2e5494: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e5494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5498: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e5498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e549c: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E549Cu;
    {
        const bool branch_taken_0x2e549c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E549Cu;
        // 0x2e54a0: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e549c) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E54A4u;
    // 0x2e54a4: 0x8e03e3d4  lw          $v1, -0x1C2C($s0)
    ctx->pc = 0x2e54a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
label_2e54a8:
    // 0x2e54a8: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2e54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e54ac: 0x90820104  lbu         $v0, 0x104($a0)
    ctx->pc = 0x2e54acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2e54b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E54B0u;
    {
        const bool branch_taken_0x2e54b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54B0u;
        // 0x2e54b4: 0x24840104  addiu       $a0, $a0, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54b0) {
            ctx->pc = 0x2E54D0u;
            goto label_2e54d0;
        }
    }
    ctx->pc = 0x2E54B8u;
    // 0x2e54b8: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x2e54b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2e54bc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E54BCu;
    SET_GPR_U32(ctx, 31, 0x2E54C4u);
    ctx->pc = 0x2E54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54BCu;
    // 0x2e54c0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E54BCu, 0x2E54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54C4u;
label_2e54c4:
    // 0x2e54c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E54C4u;
    {
        const bool branch_taken_0x2e54c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54C4u;
        // 0x2e54c8: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54c4) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E54CCu;
    // 0x2e54cc: 0x8e03e3d4  lw          $v1, -0x1C2C($s0)
    ctx->pc = 0x2e54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
label_2e54d0:
    // 0x2e54d0: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x2e54d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2e54d4: 0x90820204  lbu         $v0, 0x204($a0)
    ctx->pc = 0x2e54d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x2e54d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E54D8u;
    {
        const bool branch_taken_0x2e54d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54D8u;
        // 0x2e54dc: 0x24840204  addiu       $a0, $a0, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54d8) {
            ctx->pc = 0x2E54F8u;
            goto label_2e54f8;
        }
    }
    ctx->pc = 0x2E54E0u;
    // 0x2e54e0: 0x26850104  addiu       $a1, $s4, 0x104
    ctx->pc = 0x2e54e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 260));
    // 0x2e54e4: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E54E4u;
    SET_GPR_U32(ctx, 31, 0x2E54ECu);
    ctx->pc = 0x2E54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54E4u;
    // 0x2e54e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E54E4u, 0x2E54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54ECu;
label_2e54ec:
    // 0x2e54ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E54ECu;
    {
        const bool branch_taken_0x2e54ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54ECu;
        // 0x2e54f0: 0x8ee2e3d0  lw          $v0, -0x1C30($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294960080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54ec) {
            ctx->pc = 0x2E5500u;
            goto label_2e5500;
        }
    }
    ctx->pc = 0x2E54F4u;
    // 0x2e54f4: 0x8e03e3d4  lw          $v1, -0x1C2C($s0)
    ctx->pc = 0x2e54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960084)));
label_2e54f8:
    // 0x2e54f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E54F8u;
    {
        const bool branch_taken_0x2e54f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54F8u;
        // 0x2e54fc: 0x711021  addu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54f8) {
            ctx->pc = 0x2E5524u;
            goto label_2e5524;
        }
    }
    ctx->pc = 0x2E5500u;
label_2e5500:
    // 0x2e5500: 0x3403af20  ori         $v1, $zero, 0xAF20
    ctx->pc = 0x2e5500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
label_2e5504:
    // 0x2e5504: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e5504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e5508: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e5508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e550c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2E550Cu;
    {
        const bool branch_taken_0x2e550c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E550Cu;
        // 0x2e5510: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e550c) {
            ctx->pc = 0x2E53F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e53f8;
        }
    }
    ctx->pc = 0x2E5514u;
label_2e5514:
    // 0x2e5514: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x2e5514u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5518:
    // 0x2e5518: 0x1660ffa9  bnez        $s3, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2E5518u;
    {
        const bool branch_taken_0x2e5518 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5518u;
        // 0x2e551c: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5518) {
            ctx->pc = 0x2E53C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e53c0;
        }
    }
    ctx->pc = 0x2E5520u;
label_2e5520:
    // 0x2e5520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5524:
    // 0x2e5524: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e5524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5528: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2e5528u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e552c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2e552cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5530: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e5530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5534: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e5534u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5538: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e5538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e553c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e553cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5540: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e5540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5544: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e5544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e554c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E554Cu;
        // 0x2e5550: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5554u;
    // 0x2e5554: 0x0  nop
    ctx->pc = 0x2e5554u;
    // NOP
    // 0x2e5558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e555c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5560: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e5560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e5564: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5568: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e5568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e556c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e5570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e5570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e5574: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5574u;
    {
        const bool branch_taken_0x2e5574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5574u;
        // 0x2e5578: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5574) {
            ctx->pc = 0x2E5590u;
            goto label_2e5590;
        }
    }
    ctx->pc = 0x2E557Cu;
    // 0x2e557c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e557cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5580: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2E5580u;
    {
        const bool branch_taken_0x2e5580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5580u;
        // 0x2e5584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5580) {
            ctx->pc = 0x2E5650u;
            goto label_2e5650;
        }
    }
    ctx->pc = 0x2E5588u;
    // 0x2e5588: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2E5588u;
    {
        const bool branch_taken_0x2e5588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5588u;
        // 0x2e558c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5588) {
            ctx->pc = 0x2E56A4u;
            goto label_2e56a4;
        }
    }
    ctx->pc = 0x2E5590u;
label_2e5590:
    // 0x2e5590: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2e5590u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2e5594: 0x8e50ea08  lw          $s0, -0x15F8($s2)
    ctx->pc = 0x2e5594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961672)));
    // 0x2e5598: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E5598u;
    {
        const bool branch_taken_0x2e5598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5598u;
        // 0x2e559c: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5598) {
            ctx->pc = 0x2E55D4u;
            goto label_2e55d4;
        }
    }
    ctx->pc = 0x2E55A0u;
    // 0x2e55a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e55a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55a4: 0x0  nop
    ctx->pc = 0x2e55a4u;
    // NOP
label_2e55a8:
    // 0x2e55a8: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x2e55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e55ac: 0x0  nop
    ctx->pc = 0x2e55acu;
    // NOP
label_2e55b0:
    // 0x2e55b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e55b4: 0x4410023  bgez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E55B4u;
    {
        const bool branch_taken_0x2e55b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E55B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55B4u;
        // 0x2e55b8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55b4) {
            ctx->pc = 0x2E5644u;
            goto label_2e5644;
        }
    }
    ctx->pc = 0x2E55BCu;
    // 0x2e55bc: 0x1880fffc  blez        $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E55BCu;
    {
        const bool branch_taken_0x2e55bc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2E55C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55BCu;
        // 0x2e55c0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55bc) {
            ctx->pc = 0x2E55B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e55b0;
        }
    }
    ctx->pc = 0x2E55C4u;
    // 0x2e55c4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2e55c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e55c8: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E55C8u;
    {
        const bool branch_taken_0x2e55c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55C8u;
        // 0x2e55cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55c8) {
            ctx->pc = 0x2E55A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e55a8;
        }
    }
    ctx->pc = 0x2E55D0u;
    // 0x2e55d0: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2e55d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_2e55d4:
    // 0x2e55d4: 0x8e64e3d4  lw          $a0, -0x1C2C($s3)
    ctx->pc = 0x2e55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960084)));
    // 0x2e55d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E55D8u;
    {
        const bool branch_taken_0x2e55d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55D8u;
        // 0x2e55dc: 0x8e50ea08  lw          $s0, -0x15F8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55d8) {
            ctx->pc = 0x2E55ECu;
            goto label_2e55ec;
        }
    }
    ctx->pc = 0x2E55E0u;
    // 0x2e55e0: 0xc098560  jal         func_261580
    ctx->pc = 0x2E55E0u;
    SET_GPR_U32(ctx, 31, 0x2E55E8u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E55E0u, 0x2E55E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E55E8u;
label_2e55e8:
    // 0x2e55e8: 0x8e50ea08  lw          $s0, -0x15F8($s2)
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294961672)));
label_2e55ec:
    // 0x2e55ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E55ECu;
    {
        const bool branch_taken_0x2e55ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55ECu;
        // 0x2e55f0: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55ec) {
            ctx->pc = 0x2E5610u;
            goto label_2e5610;
        }
    }
    ctx->pc = 0x2E55F4u;
    // 0x2e55f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e55f8:
    // 0x2e55f8: 0xc098560  jal         func_261580
    ctx->pc = 0x2E55F8u;
    SET_GPR_U32(ctx, 31, 0x2E5600u);
    ctx->pc = 0x2E55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E55F8u;
    // 0x2e55fc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E55F8u, 0x2E5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5600u;
label_2e5600:
    // 0x2e5600: 0x1600fffd  bnez        $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2E5600u;
    {
        const bool branch_taken_0x2e5600 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5600u;
        // 0x2e5604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5600) {
            ctx->pc = 0x2E55F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e55f8;
        }
    }
    ctx->pc = 0x2E5608u;
    // 0x2e5608: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5608u;
    {
        const bool branch_taken_0x2e5608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5608u;
        // 0x2e560c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5608) {
            ctx->pc = 0x2E5614u;
            goto label_2e5614;
        }
    }
    ctx->pc = 0x2E5610u;
label_2e5610:
    // 0x2e5610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5614:
    // 0x2e5614: 0xc09816c  jal         func_2605B0
    ctx->pc = 0x2E5614u;
    SET_GPR_U32(ctx, 31, 0x2E561Cu);
    ctx->pc = 0x2E5618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5614u;
    // 0x2e5618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2605B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2605B0u, 0x2E5614u, 0x2E561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E561Cu;
label_2e561c:
    // 0x2e561c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5620: 0x3404af20  ori         $a0, $zero, 0xAF20
    ctx->pc = 0x2e5620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
    // 0x2e5624: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x2e5624u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e5628: 0xc098552  jal         func_261548
    ctx->pc = 0x2E5628u;
    SET_GPR_U32(ctx, 31, 0x2E5630u);
    ctx->pc = 0x2E562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5628u;
    // 0x2e562c: 0xae43e3d0  sw          $v1, -0x1C30($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294960080), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2E5628u, 0x2E5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5630u;
label_2e5630:
    // 0x2e5630: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E5630u;
    {
        const bool branch_taken_0x2e5630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5630u;
        // 0x2e5634: 0xae62e3d4  sw          $v0, -0x1C2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294960084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5630) {
            ctx->pc = 0x2E56A0u;
            goto label_2e56a0;
        }
    }
    ctx->pc = 0x2E5638u;
    // 0x2e5638: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e5638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e563c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E563Cu;
    {
        const bool branch_taken_0x2e563c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E563Cu;
        // 0x2e5640: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e563c) {
            ctx->pc = 0x2E56A4u;
            goto label_2e56a4;
        }
    }
    ctx->pc = 0x2E5644u;
label_2e5644:
    // 0x2e5644: 0x2402ffe9  addiu       $v0, $zero, -0x17
    ctx->pc = 0x2e5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
    // 0x2e5648: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E5648u;
    {
        const bool branch_taken_0x2e5648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5648u;
        // 0x2e564c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5648) {
            ctx->pc = 0x2E56A4u;
            goto label_2e56a4;
        }
    }
    ctx->pc = 0x2E5650u;
label_2e5650:
    // 0x2e5650: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2e5650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5654: 0x3404af20  ori         $a0, $zero, 0xAF20
    ctx->pc = 0x2e5654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
    // 0x2e5658: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e5658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e565c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2e565cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2e5660: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2e5660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e5664: 0x8c62e3d4  lw          $v0, -0x1C2C($v1)
    ctx->pc = 0x2e5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960084)));
    // 0x2e5668: 0x3406af20  ori         $a2, $zero, 0xAF20
    ctx->pc = 0x2e5668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44832);
    // 0x2e566c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E566Cu;
    SET_GPR_U32(ctx, 31, 0x2E5674u);
    ctx->pc = 0x2E5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E566Cu;
    // 0x2e5670: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2E566Cu, 0x2E5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5674u;
label_2e5674:
    // 0x2e5674: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2e5674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2e5678: 0x8c62e3d0  lw          $v0, -0x1C30($v1)
    ctx->pc = 0x2e5678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x2e567c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e5680: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5680u;
    {
        const bool branch_taken_0x2e5680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e5680) {
            ctx->pc = 0x2E5684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5680u;
            // 0x2e5684: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E56A4u;
            goto label_2e56a4;
        }
    }
    ctx->pc = 0x2E5688u;
    // 0x2e5688: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e5688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e568c: 0xc0ba15a  jal         func_2E8568
    ctx->pc = 0x2E568Cu;
    SET_GPR_U32(ctx, 31, 0x2E5694u);
    ctx->pc = 0x2E8568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8568u, 0x2E568Cu, 0x2E5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5694u;
label_2e5694:
    // 0x2e5694: 0xc0ba164  jal         func_2E8590
    ctx->pc = 0x2E5694u;
    SET_GPR_U32(ctx, 31, 0x2E569Cu);
    ctx->pc = 0x2E8590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8590u, 0x2E5694u, 0x2E569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E569Cu;
label_2e569c:
    // 0x2e569c: 0x0  nop
    ctx->pc = 0x2e569cu;
    // NOP
label_2e56a0:
    // 0x2e56a0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2e56a4:
    // 0x2e56a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e56a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e56a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e56ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e56acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e56b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e56b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e56b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e56b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e56b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e56b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e56bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E56BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56BCu;
        // 0x2e56c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E56BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E56C4u;
    // 0x2e56c4: 0x0  nop
    ctx->pc = 0x2e56c4u;
    // NOP
    // 0x2e56c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e56c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e56cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e56ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e56d0: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x2e56d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x2e56d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e56d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e56d8: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2E56D8u;
    SET_GPR_U32(ctx, 31, 0x2E56E0u);
    ctx->pc = 0x2E56DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56D8u;
    // 0x2e56dc: 0x2610fd30  addiu       $s0, $s0, -0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2E56D8u, 0x2E56E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56E0u;
label_2e56e0:
    // 0x2e56e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e56e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56e4: 0xc0443dc  jal         func_110F70
    ctx->pc = 0x2E56E4u;
    SET_GPR_U32(ctx, 31, 0x2E56ECu);
    ctx->pc = 0x2E56E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56E4u;
    // 0x2e56e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F70u, 0x2E56E4u, 0x2E56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56ECu;
label_2e56ec:
    // 0x2e56ec: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2e56ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2e56f0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x2e56f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x2e56f4: 0x3c0701ca  lui         $a3, 0x1CA
    ctx->pc = 0x2e56f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)458 << 16));
    // 0x2e56f8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2e56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2e56fc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2e56fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e5700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e5704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5708: 0x24c65558  addiu       $a2, $a2, 0x5558
    ctx->pc = 0x2e5708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21848));
    // 0x2e570c: 0x24e74e00  addiu       $a3, $a3, 0x4E00
    ctx->pc = 0x2e570cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19968));
    // 0x2e5710: 0x2484fd48  addiu       $a0, $a0, -0x2B8
    ctx->pc = 0x2e5710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966600));
    // 0x2e5714: 0xc044402  jal         func_111008
    ctx->pc = 0x2E5714u;
    SET_GPR_U32(ctx, 31, 0x2E571Cu);
    ctx->pc = 0x2E5718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5714u;
    // 0x2e5718: 0x34a50f81  ori         $a1, $a1, 0xF81 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3969);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111008u, 0x2E5714u, 0x2E571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E571Cu;
label_2e571c:
    // 0x2e571c: 0xc044508  jal         func_111420
    ctx->pc = 0x2E571Cu;
    SET_GPR_U32(ctx, 31, 0x2E5724u);
    ctx->pc = 0x2E5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E571Cu;
    // 0x2e5720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111420u, 0x2E571Cu, 0x2E5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5724u;
label_2e5724:
    // 0x2e5724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e5724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e5728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e572c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e572cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5730: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5730u;
        // 0x2e5734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5738u;
}
