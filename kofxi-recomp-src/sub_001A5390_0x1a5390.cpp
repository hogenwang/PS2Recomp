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

// Function: sub_001A5390
// Address: 0x1a5390 - 0x1a54f0
void sub_001A5390_0x1a5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5390_0x1a5390");
#endif

    switch (ctx->pc) {
        case 0x1a53b4u: goto label_1a53b4;
        default: break;
    }

    ctx->pc = 0x1a5390u;

    // 0x1a5390: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a5390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5394: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a5398: 0x2463b8a4  addiu       $v1, $v1, -0x475C
    ctx->pc = 0x1a5398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949028));
    // 0x1a539c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a539cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a53a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a53a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a53a8: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1A53A8u;
    {
        const bool branch_taken_0x1a53a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a53a8) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A53B0u;
    // 0x1a53b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a53b4:
    // 0x1a53b4: 0x54650047  bnel        $v1, $a1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1A53B4u;
    {
        const bool branch_taken_0x1a53b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a53b4) {
            ctx->pc = 0x1A53B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A53B4u;
            // 0x1a53b8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A54D4u;
            goto label_1a54d4;
        }
    }
    ctx->pc = 0x1A53BCu;
    // 0x1a53bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a53bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a53c0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1a53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1a53c4: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x1a53c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a53c8: 0x1100002e  beqz        $t0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A53C8u;
    {
        const bool branch_taken_0x1a53c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53c8) {
            ctx->pc = 0x1A5484u;
            goto label_1a5484;
        }
    }
    ctx->pc = 0x1A53D0u;
    // 0x1a53d0: 0x8d05000c  lw          $a1, 0xC($t0)
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1a53d4: 0x54a6001d  bnel        $a1, $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A53D4u;
    {
        const bool branch_taken_0x1a53d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a53d4) {
            ctx->pc = 0x1A53D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A53D4u;
            // 0x1a53d8: 0x8c880008  lw          $t0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A544Cu;
            goto label_1a544c;
        }
    }
    ctx->pc = 0x1A53DCu;
    // 0x1a53dc: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x1a53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1a53e0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1a53e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a53e4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a53e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a53e8: 0xad050010  sw          $a1, 0x10($t0)
    ctx->pc = 0x1a53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 5));
    // 0x1a53ec: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1a53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a53f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A53F0u;
    {
        const bool branch_taken_0x1a53f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53F0u;
        // 0x1a53f4: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53f0) {
            ctx->pc = 0x1A53FCu;
            goto label_1a53fc;
        }
    }
    ctx->pc = 0x1A53F8u;
    // 0x1a53f8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1a53f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_1a53fc:
    // 0x1a53fc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a53fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a5400: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1a5400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a5404: 0x30e6003f  andi        $a2, $a3, 0x3F
    ctx->pc = 0x1a5404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x1a5408: 0x50c0001e  beql        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A5408u;
    {
        const bool branch_taken_0x1a5408 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5408) {
            ctx->pc = 0x1A540Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5408u;
            // 0x1a540c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5484u;
            goto label_1a5484;
        }
    }
    ctx->pc = 0x1A5410u;
    // 0x1a5410: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a5414: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1a5414u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5418: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x1a5418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a541c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1a541cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a5420: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1a5420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a5424: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1a5424u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5428: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1a5428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1a542c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a542cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5430: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x1a5430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a5434: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a5438: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x1a5438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x1a543c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5440: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5440u;
    {
        const bool branch_taken_0x1a5440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5440) {
            ctx->pc = 0x1A5484u;
            goto label_1a5484;
        }
    }
    ctx->pc = 0x1A5448u;
    // 0x1a5448: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a544c:
    // 0x1a544c: 0x3106003f  andi        $a2, $t0, 0x3F
    ctx->pc = 0x1a544cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)63);
    // 0x1a5450: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5450u;
    {
        const bool branch_taken_0x1a5450 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5450) {
            ctx->pc = 0x1A5484u;
            goto label_1a5484;
        }
    }
    ctx->pc = 0x1A5458u;
    // 0x1a5458: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1a5458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a545c: 0xa63823  subu        $a3, $a1, $a2
    ctx->pc = 0x1a545cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1a5460: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x1a5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1a5464: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1a5464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1a5468: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1a5468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a546c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1a546cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1a5470: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1a5470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1a5474: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1a5474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5478: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x1a5478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a547c: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1a547cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1a5480: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1a5480u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_1a5484:
    // 0x1a5484: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A5484u;
    {
        const bool branch_taken_0x1a5484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5484) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A548Cu;
    // 0x1a548c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1a548cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a5490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a5490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5494: 0x14c50012  bne         $a2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A5494u;
    {
        const bool branch_taken_0x1a5494 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1a5494) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A549Cu;
    // 0x1a549c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x1a549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a54a0: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a54a4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1a54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a54a8: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1a54a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1a54ac: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1a54acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a54b0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1a54b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1a54b4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a54b8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A54B8u;
    {
        const bool branch_taken_0x1a54b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a54b8) {
            ctx->pc = 0x1A54BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A54B8u;
            // 0x1a54bc: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A54C8u;
            goto label_1a54c8;
        }
    }
    ctx->pc = 0x1A54C0u;
    // 0x1a54c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1a54c4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1a54c8:
    // 0x1a54c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A54C8u;
    {
        const bool branch_taken_0x1a54c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a54c8) {
            ctx->pc = 0x1A54E0u;
            goto label_1a54e0;
        }
    }
    ctx->pc = 0x1A54D0u;
    // 0x1a54d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1a54d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a54d4:
    // 0x1a54d4: 0x5480ffb7  bnel        $a0, $zero, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1A54D4u;
    {
        const bool branch_taken_0x1a54d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a54d4) {
            ctx->pc = 0x1A54D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A54D4u;
            // 0x1a54d8: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A53B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a53b4;
        }
    }
    ctx->pc = 0x1A54DCu;
    // 0x1a54dc: 0x0  nop
    ctx->pc = 0x1a54dcu;
    // NOP
label_1a54e0:
    // 0x1a54e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54E8u;
    // 0x1a54e8: 0x0  nop
    ctx->pc = 0x1a54e8u;
    // NOP
    // 0x1a54ec: 0x0  nop
    ctx->pc = 0x1a54ecu;
    // NOP
}
