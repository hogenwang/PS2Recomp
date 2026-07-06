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

// Function: sub_001873F0
// Address: 0x1873f0 - 0x1876a0
void sub_001873F0_0x1873f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001873F0_0x1873f0");
#endif

    ctx->pc = 0x1873f0u;

    // 0x1873f0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1873f4: 0x90679780  lbu         $a3, -0x6880($v1)
    ctx->pc = 0x1873f4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1873f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1873f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1873fc: 0x50e30005  beql        $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1873FCu;
    {
        const bool branch_taken_0x1873fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1873fc) {
            ctx->pc = 0x187400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1873FCu;
            // 0x187400: 0x908304f0  lbu         $v1, 0x4F0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187414u;
            goto label_187414;
        }
    }
    ctx->pc = 0x187404u;
    // 0x187404: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x187404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187408: 0x14e300a1  bne         $a3, $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x187408u;
    {
        const bool branch_taken_0x187408 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x187408) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187410u;
    // 0x187410: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
label_187414:
    // 0x187414: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x187414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x187418: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x187418u;
    {
        const bool branch_taken_0x187418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187418) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187420u;
    // 0x187420: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x187420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187424: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x187424u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x187428: 0x2529db50  addiu       $t1, $t1, -0x24B0
    ctx->pc = 0x187428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957904));
    // 0x18742c: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x18742cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x187430: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x187430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x187434: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x187434u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x187438: 0x35102  srl         $t2, $v1, 4
    ctx->pc = 0x187438u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x18743c: 0x38c50001  xori        $a1, $a2, 0x1
    ctx->pc = 0x18743cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x187440: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x187440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187444: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x187444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x187448: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x187448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18744c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x18744cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187450: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x187450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187454: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x187454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x187458: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18745c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x187460: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x187460u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187464: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x187464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x187468: 0x1254021  addu        $t0, $t1, $a1
    ctx->pc = 0x187468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x18746c: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x18746cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x187470: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x187470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x187474: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x187474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x187478: 0x91080003  lbu         $t0, 0x3($t0)
    ctx->pc = 0x187478u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x18747c: 0x150a0084  bne         $t0, $t2, . + 4 + (0x84 << 2)
    ctx->pc = 0x18747Cu;
    {
        const bool branch_taken_0x18747c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x187480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18747Cu;
        // 0x187480: 0x2463014c  addiu       $v1, $v1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18747c) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187484u;
    // 0x187484: 0x3c0801d5  lui         $t0, 0x1D5
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)469 << 16));
    // 0x187488: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x18748c: 0x8d0ad918  lw          $t2, -0x26E8($t0)
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294957336)));
    // 0x187490: 0x35280100  ori         $t0, $t1, 0x100
    ctx->pc = 0x187490u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)256);
    // 0x187494: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x187494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x187498: 0x1500007d  bnez        $t0, . + 4 + (0x7D << 2)
    ctx->pc = 0x187498u;
    {
        const bool branch_taken_0x187498 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x187498) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1874A0u;
    // 0x1874a0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1874a4: 0x54e8001b  bnel        $a3, $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1874A4u;
    {
        const bool branch_taken_0x1874a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1874a4) {
            ctx->pc = 0x1874A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1874A4u;
            // 0x1874a8: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187514u;
            goto label_187514;
        }
    }
    ctx->pc = 0x1874ACu;
    // 0x1874ac: 0x3c08009d  lui         $t0, 0x9D
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)157 << 16));
    // 0x1874b0: 0x9108b245  lbu         $t0, -0x4DBB($t0)
    ctx->pc = 0x1874b0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294947397)));
    // 0x1874b4: 0x15000016  bnez        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1874B4u;
    {
        const bool branch_taken_0x1874b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1874b4) {
            ctx->pc = 0x187510u;
            goto label_187510;
        }
    }
    ctx->pc = 0x1874BCu;
    // 0x1874bc: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x1874bcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1874c0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1874c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1874c4: 0x54e60003  bnel        $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1874C4u;
    {
        const bool branch_taken_0x1874c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1874c4) {
            ctx->pc = 0x1874C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1874C4u;
            // 0x1874c8: 0x28e10070  slti        $at, $a3, 0x70 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)112) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1874D4u;
            goto label_1874d4;
        }
    }
    ctx->pc = 0x1874CCu;
    // 0x1874cc: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1874CCu;
    {
        const bool branch_taken_0x1874cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1874D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1874CCu;
        // 0x1874d0: 0xa48004a6  sh          $zero, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1874cc) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1874D4u;
label_1874d4:
    // 0x1874d4: 0x1020006e  beqz        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x1874D4u;
    {
        const bool branch_taken_0x1874d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874d4) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1874DCu;
    // 0x1874dc: 0x90a50007  lbu         $a1, 0x7($a1)
    ctx->pc = 0x1874dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1874e0: 0x1ca0006b  bgtz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1874E0u;
    {
        const bool branch_taken_0x1874e0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1874e0) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1874E8u;
    // 0x1874e8: 0x848504a6  lh          $a1, 0x4A6($a0)
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1190)));
    // 0x1874ec: 0x5ca00006  bgtzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1874ECu;
    {
        const bool branch_taken_0x1874ec = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1874ec) {
            ctx->pc = 0x1874F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1874ECu;
            // 0x1874f0: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187508u;
            goto label_187508;
        }
    }
    ctx->pc = 0x1874F4u;
    // 0x1874f4: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x1874f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1874f8: 0xa466000a  sh          $a2, 0xA($v1)
    ctx->pc = 0x1874f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x1874fc: 0xa48604a8  sh          $a2, 0x4A8($a0)
    ctx->pc = 0x1874fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 6));
    // 0x187500: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x187500u;
    {
        const bool branch_taken_0x187500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187500u;
        // 0x187504: 0xa48604b0  sh          $a2, 0x4B0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187500) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187508u;
label_187508:
    // 0x187508: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x187508u;
    {
        const bool branch_taken_0x187508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187508u;
        // 0x18750c: 0xa48304a6  sh          $v1, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187508) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187510u;
label_187510:
    // 0x187510: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x187510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_187514:
    // 0x187514: 0x54e8001c  bnel        $a3, $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x187514u;
    {
        const bool branch_taken_0x187514 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x187514) {
            ctx->pc = 0x187518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187514u;
            // 0x187518: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187588u;
            goto label_187588;
        }
    }
    ctx->pc = 0x18751Cu;
    // 0x18751c: 0x3c08009f  lui         $t0, 0x9F
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)159 << 16));
    // 0x187520: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x187520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x187524: 0x910895c0  lbu         $t0, -0x6A40($t0)
    ctx->pc = 0x187524u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294940096)));
    // 0x187528: 0x15090016  bne         $t0, $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x187528u;
    {
        const bool branch_taken_0x187528 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x187528) {
            ctx->pc = 0x187584u;
            goto label_187584;
        }
    }
    ctx->pc = 0x187530u;
    // 0x187530: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x187534: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187538: 0x54e60003  bnel        $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x187538u;
    {
        const bool branch_taken_0x187538 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x187538) {
            ctx->pc = 0x18753Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187538u;
            // 0x18753c: 0x28e10070  slti        $at, $a3, 0x70 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)112) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x187548u;
            goto label_187548;
        }
    }
    ctx->pc = 0x187540u;
    // 0x187540: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x187540u;
    {
        const bool branch_taken_0x187540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187540u;
        // 0x187544: 0xa48004a6  sh          $zero, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187540) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187548u;
label_187548:
    // 0x187548: 0x10200051  beqz        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x187548u;
    {
        const bool branch_taken_0x187548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187548) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187550u;
    // 0x187550: 0x90a50007  lbu         $a1, 0x7($a1)
    ctx->pc = 0x187550u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x187554: 0x1ca0004e  bgtz        $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x187554u;
    {
        const bool branch_taken_0x187554 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x187554) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18755Cu;
    // 0x18755c: 0x848504a6  lh          $a1, 0x4A6($a0)
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1190)));
    // 0x187560: 0x5ca00006  bgtzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187560u;
    {
        const bool branch_taken_0x187560 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x187560) {
            ctx->pc = 0x187564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187560u;
            // 0x187564: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18757Cu;
            goto label_18757c;
        }
    }
    ctx->pc = 0x187568u;
    // 0x187568: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x187568u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x18756c: 0xa466000a  sh          $a2, 0xA($v1)
    ctx->pc = 0x18756cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x187570: 0xa48604a8  sh          $a2, 0x4A8($a0)
    ctx->pc = 0x187570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 6));
    // 0x187574: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x187574u;
    {
        const bool branch_taken_0x187574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187574u;
        // 0x187578: 0xa48604b0  sh          $a2, 0x4B0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187574) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18757Cu;
label_18757c:
    // 0x18757c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18757Cu;
    {
        const bool branch_taken_0x18757c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18757Cu;
        // 0x187580: 0xa48304a6  sh          $v1, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18757c) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187584u;
label_187584:
    // 0x187584: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x187584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_187588:
    // 0x187588: 0x54e80021  bnel        $a3, $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x187588u;
    {
        const bool branch_taken_0x187588 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x187588) {
            ctx->pc = 0x18758Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187588u;
            // 0x18758c: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187610u;
            goto label_187610;
        }
    }
    ctx->pc = 0x187590u;
    // 0x187590: 0x3c0801e0  lui         $t0, 0x1E0
    ctx->pc = 0x187590u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)480 << 16));
    // 0x187594: 0x8d08bee4  lw          $t0, -0x411C($t0)
    ctx->pc = 0x187594u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950628)));
    // 0x187598: 0x31080040  andi        $t0, $t0, 0x40
    ctx->pc = 0x187598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)64);
    // 0x18759c: 0x1100001b  beqz        $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x18759Cu;
    {
        const bool branch_taken_0x18759c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x18759c) {
            ctx->pc = 0x18760Cu;
            goto label_18760c;
        }
    }
    ctx->pc = 0x1875A4u;
    // 0x1875a4: 0x3c08009f  lui         $t0, 0x9F
    ctx->pc = 0x1875a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)159 << 16));
    // 0x1875a8: 0x91089720  lbu         $t0, -0x68E0($t0)
    ctx->pc = 0x1875a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294940448)));
    // 0x1875ac: 0x39080001  xori        $t0, $t0, 0x1
    ctx->pc = 0x1875acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x1875b0: 0x14c80016  bne         $a2, $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1875B0u;
    {
        const bool branch_taken_0x1875b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x1875b0) {
            ctx->pc = 0x18760Cu;
            goto label_18760c;
        }
    }
    ctx->pc = 0x1875B8u;
    // 0x1875b8: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x1875b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1875bc: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1875bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1875c0: 0x54e60003  bnel        $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1875C0u;
    {
        const bool branch_taken_0x1875c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1875c0) {
            ctx->pc = 0x1875C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1875C0u;
            // 0x1875c4: 0x28e10070  slti        $at, $a3, 0x70 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)112) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1875D0u;
            goto label_1875d0;
        }
    }
    ctx->pc = 0x1875C8u;
    // 0x1875c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1875C8u;
    {
        const bool branch_taken_0x1875c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1875CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875C8u;
        // 0x1875cc: 0xa48004a6  sh          $zero, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875c8) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1875D0u;
label_1875d0:
    // 0x1875d0: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x1875D0u;
    {
        const bool branch_taken_0x1875d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1875d0) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1875D8u;
    // 0x1875d8: 0x90a50007  lbu         $a1, 0x7($a1)
    ctx->pc = 0x1875d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1875dc: 0x1ca0002c  bgtz        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1875DCu;
    {
        const bool branch_taken_0x1875dc = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1875dc) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x1875E4u;
    // 0x1875e4: 0x848504a6  lh          $a1, 0x4A6($a0)
    ctx->pc = 0x1875e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1190)));
    // 0x1875e8: 0x5ca00006  bgtzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1875E8u;
    {
        const bool branch_taken_0x1875e8 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1875e8) {
            ctx->pc = 0x1875ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1875E8u;
            // 0x1875ec: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187604u;
            goto label_187604;
        }
    }
    ctx->pc = 0x1875F0u;
    // 0x1875f0: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x1875f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x1875f4: 0xa466000a  sh          $a2, 0xA($v1)
    ctx->pc = 0x1875f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x1875f8: 0xa48604a8  sh          $a2, 0x4A8($a0)
    ctx->pc = 0x1875f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 6));
    // 0x1875fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1875FCu;
    {
        const bool branch_taken_0x1875fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1875FCu;
        // 0x187600: 0xa48604b0  sh          $a2, 0x4B0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1875fc) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187604u;
label_187604:
    // 0x187604: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x187604u;
    {
        const bool branch_taken_0x187604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187604u;
        // 0x187608: 0xa48304a6  sh          $v1, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187604) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18760Cu;
label_18760c:
    // 0x18760c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x18760cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_187610:
    // 0x187610: 0x14e8001f  bne         $a3, $t0, . + 4 + (0x1F << 2)
    ctx->pc = 0x187610u;
    {
        const bool branch_taken_0x187610 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x187610) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187618u;
    // 0x187618: 0x3c0701e0  lui         $a3, 0x1E0
    ctx->pc = 0x187618u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)480 << 16));
    // 0x18761c: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x18761cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x187620: 0x8ce7bee4  lw          $a3, -0x411C($a3)
    ctx->pc = 0x187620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950628)));
    // 0x187624: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x187624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x187628: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x187628u;
    {
        const bool branch_taken_0x187628 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x187628) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187630u;
    // 0x187630: 0x3c07009f  lui         $a3, 0x9F
    ctx->pc = 0x187630u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)159 << 16));
    // 0x187634: 0x90e79720  lbu         $a3, -0x68E0($a3)
    ctx->pc = 0x187634u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294940448)));
    // 0x187638: 0x14c70015  bne         $a2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x187638u;
    {
        const bool branch_taken_0x187638 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x187638) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187640u;
    // 0x187640: 0x84670008  lh          $a3, 0x8($v1)
    ctx->pc = 0x187640u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x187644: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x187644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187648: 0x54e60003  bnel        $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x187648u;
    {
        const bool branch_taken_0x187648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x187648) {
            ctx->pc = 0x18764Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187648u;
            // 0x18764c: 0x28e10070  slti        $at, $a3, 0x70 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)112) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x187658u;
            goto label_187658;
        }
    }
    ctx->pc = 0x187650u;
    // 0x187650: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x187650u;
    {
        const bool branch_taken_0x187650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187650u;
        // 0x187654: 0xa48004a6  sh          $zero, 0x4A6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187650) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187658u;
label_187658:
    // 0x187658: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x187658u;
    {
        const bool branch_taken_0x187658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187658) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x187660u;
    // 0x187660: 0x90a50007  lbu         $a1, 0x7($a1)
    ctx->pc = 0x187660u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x187664: 0x1ca0000a  bgtz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x187664u;
    {
        const bool branch_taken_0x187664 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x187664) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18766Cu;
    // 0x18766c: 0x848504a6  lh          $a1, 0x4A6($a0)
    ctx->pc = 0x18766cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1190)));
    // 0x187670: 0x5ca00006  bgtzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x187670u;
    {
        const bool branch_taken_0x187670 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x187670) {
            ctx->pc = 0x187674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187670u;
            // 0x187674: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18768Cu;
            goto label_18768c;
        }
    }
    ctx->pc = 0x187678u;
    // 0x187678: 0xa4660008  sh          $a2, 0x8($v1)
    ctx->pc = 0x187678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 6));
    // 0x18767c: 0xa466000a  sh          $a2, 0xA($v1)
    ctx->pc = 0x18767cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x187680: 0xa48604a8  sh          $a2, 0x4A8($a0)
    ctx->pc = 0x187680u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1192), (uint16_t)GPR_U32(ctx, 6));
    // 0x187684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187684u;
    {
        const bool branch_taken_0x187684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187684u;
        // 0x187688: 0xa48604b0  sh          $a2, 0x4B0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187684) {
            ctx->pc = 0x187690u;
            goto label_187690;
        }
    }
    ctx->pc = 0x18768Cu;
label_18768c:
    // 0x18768c: 0xa48304a6  sh          $v1, 0x4A6($a0)
    ctx->pc = 0x18768cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1190), (uint16_t)GPR_U32(ctx, 3));
label_187690:
    // 0x187690: 0x3e00008  jr          $ra
    ctx->pc = 0x187690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187698u;
    // 0x187698: 0x0  nop
    ctx->pc = 0x187698u;
    // NOP
    // 0x18769c: 0x0  nop
    ctx->pc = 0x18769cu;
    // NOP
}
