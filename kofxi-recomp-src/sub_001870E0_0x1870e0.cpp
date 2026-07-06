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

// Function: sub_001870E0
// Address: 0x1870e0 - 0x1873f0
void sub_001870E0_0x1870e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001870E0_0x1870e0");
#endif

    switch (ctx->pc) {
        case 0x187244u: goto label_187244;
        case 0x187390u: goto label_187390;
        case 0x187398u: goto label_187398;
        case 0x1873a4u: goto label_1873a4;
        case 0x1873ccu: goto label_1873cc;
        default: break;
    }

    ctx->pc = 0x1870e0u;

    // 0x1870e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1870e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1870e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1870e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1870e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1870ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1870ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1870f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1870f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1870f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1870f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1870f8: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x1870f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x1870fc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1870fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x187100: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x187100u;
    {
        const bool branch_taken_0x187100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187100u;
        // 0x187104: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187100) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x187108u;
    // 0x187108: 0x8e6800dc  lw          $t0, 0xDC($s3)
    ctx->pc = 0x187108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x18710c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x18710cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x187110: 0x866404a8  lh          $a0, 0x4A8($s3)
    ctx->pc = 0x187110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1192)));
    // 0x187114: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x187114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x187118: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x187118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x18711c: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x18711cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x187120: 0x3106000c  andi        $a2, $t0, 0xC
    ctx->pc = 0x187120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12);
    // 0x187124: 0x24e7db50  addiu       $a3, $a3, -0x24B0
    ctx->pc = 0x187124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957904));
    // 0x187128: 0x69082  srl         $s2, $a2, 2
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x18712c: 0xa66004a8  sh          $zero, 0x4A8($s3)
    ctx->pc = 0x18712cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1192), (uint16_t)GPR_U32(ctx, 0));
    // 0x187130: 0x31060030  andi        $a2, $t0, 0x30
    ctx->pc = 0x187130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)48);
    // 0x187134: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x187138: 0x68902  srl         $s1, $a2, 4
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x18713c: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x18713cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x187140: 0xd24021  addu        $t0, $a2, $s2
    ctx->pc = 0x187140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x187144: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x187144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x187148: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x187148u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x18714c: 0x113140  sll         $a2, $s1, 5
    ctx->pc = 0x18714cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x187150: 0x1122821  addu        $a1, $t0, $s2
    ctx->pc = 0x187150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x187154: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x187154u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x187158: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x187158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x18715c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x18715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x187160: 0x1460009b  bnez        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x187160u;
    {
        const bool branch_taken_0x187160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187160u;
        // 0x187164: 0x24b0014c  addiu       $s0, $a1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187160) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x187168u;
    // 0x187168: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x187168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18716c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18716cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187170: 0x50600098  beql        $v1, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x187170u;
    {
        const bool branch_taken_0x187170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187170) {
            ctx->pc = 0x187174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187170u;
            // 0x187174: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1873D4u;
            goto label_1873d4;
        }
    }
    ctx->pc = 0x187178u;
    // 0x187178: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18717c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187180: 0x90469780  lbu         $a2, -0x6880($v0)
    ctx->pc = 0x187180u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x187184: 0x54c5000f  bnel        $a2, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x187184u;
    {
        const bool branch_taken_0x187184 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x187184) {
            ctx->pc = 0x187188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187184u;
            // 0x187188: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1871C4u;
            goto label_1871c4;
        }
    }
    ctx->pc = 0x18718Cu;
    // 0x18718c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x187190: 0x9042b245  lbu         $v0, -0x4DBB($v0)
    ctx->pc = 0x187190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947397)));
    // 0x187194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187194u;
    {
        const bool branch_taken_0x187194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187194) {
            ctx->pc = 0x1871B0u;
            goto label_1871b0;
        }
    }
    ctx->pc = 0x18719Cu;
    // 0x18719c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1871a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1871a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1871a4: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x1871a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x1871a8: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1871A8u;
    {
        const bool branch_taken_0x1871a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1871a8) {
            ctx->pc = 0x1871C0u;
            goto label_1871c0;
        }
    }
    ctx->pc = 0x1871B0u;
label_1871b0:
    // 0x1871b0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1871B0u;
    {
        const bool branch_taken_0x1871b0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1871b0) {
            ctx->pc = 0x1871C0u;
            goto label_1871c0;
        }
    }
    ctx->pc = 0x1871B8u;
    // 0x1871b8: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1871bc: 0xa66204a6  sh          $v0, 0x4A6($s3)
    ctx->pc = 0x1871bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1190), (uint16_t)GPR_U32(ctx, 2));
label_1871c0:
    // 0x1871c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1871c4:
    // 0x1871c4: 0x54c2001d  bnel        $a2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1871C4u;
    {
        const bool branch_taken_0x1871c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1871c4) {
            ctx->pc = 0x1871C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1871C4u;
            // 0x1871c8: 0x122e3c  dsll32      $a1, $s2, 24 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18723Cu;
            goto label_18723c;
        }
    }
    ctx->pc = 0x1871CCu;
    // 0x1871cc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x1871d0: 0x8c45bee4  lw          $a1, -0x411C($v0)
    ctx->pc = 0x1871d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x1871d4: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x1871d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x1871d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1871D8u;
    {
        const bool branch_taken_0x1871d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1871d8) {
            ctx->pc = 0x1871DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1871D8u;
            // 0x1871dc: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18720Cu;
            goto label_18720c;
        }
    }
    ctx->pc = 0x1871E0u;
    // 0x1871e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1871e4: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x1871e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x1871e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1871e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1871ec: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1871ECu;
    {
        const bool branch_taken_0x1871ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1871ec) {
            ctx->pc = 0x187208u;
            goto label_187208;
        }
    }
    ctx->pc = 0x1871F4u;
    // 0x1871f4: 0x4610010  bgez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1871F4u;
    {
        const bool branch_taken_0x1871f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1871f4) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x1871FCu;
    // 0x1871fc: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1871fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x187200: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x187200u;
    {
        const bool branch_taken_0x187200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187200u;
        // 0x187204: 0xa66204a6  sh          $v0, 0x4A6($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1190), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187200) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187208u;
label_187208:
    // 0x187208: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_18720c:
    // 0x18720c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x18720cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x187210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187210u;
    {
        const bool branch_taken_0x187210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187210) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187218u;
    // 0x187218: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18721c: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x18721cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x187220: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187220u;
    {
        const bool branch_taken_0x187220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x187220) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187228u;
    // 0x187228: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187228u;
    {
        const bool branch_taken_0x187228 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187228) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187230u;
    // 0x187230: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x187230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x187234: 0xa66204a6  sh          $v0, 0x4A6($s3)
    ctx->pc = 0x187234u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1190), (uint16_t)GPR_U32(ctx, 2));
label_187238:
    // 0x187238: 0x122e3c  dsll32      $a1, $s2, 24
    ctx->pc = 0x187238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 24));
label_18723c:
    // 0x18723c: 0xc067de0  jal         func_19F780
    ctx->pc = 0x18723Cu;
    SET_GPR_U32(ctx, 31, 0x187244u);
    ctx->pc = 0x187240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18723Cu;
    // 0x187240: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F780u, 0x18723Cu, 0x187244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187244u;
label_187244:
    // 0x187244: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x187244u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x187248: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x187248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18724c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18724cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x187250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187254: 0x18800007  blez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187254u;
    {
        const bool branch_taken_0x187254 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x187258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187254u;
        // 0x187258: 0xa6030008  sh          $v1, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187254) {
            ctx->pc = 0x187274u;
            goto label_187274;
        }
    }
    ctx->pc = 0x18725Cu;
    // 0x18725c: 0x8604000a  lh          $a0, 0xA($s0)
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x187260: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x187260u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x187264: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x187264u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x187268: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x187268u;
    {
        const bool branch_taken_0x187268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187268) {
            ctx->pc = 0x18726Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187268u;
            // 0x18726c: 0x86030008  lh          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187278u;
            goto label_187278;
        }
    }
    ctx->pc = 0x187270u;
    // 0x187270: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x187270u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
label_187274:
    // 0x187274: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_187278:
    // 0x187278: 0x28610071  slti        $at, $v1, 0x71
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x18727c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18727Cu;
    {
        const bool branch_taken_0x18727c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18727c) {
            ctx->pc = 0x187280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18727Cu;
            // 0x187280: 0x86030008  lh          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187290u;
            goto label_187290;
        }
    }
    ctx->pc = 0x187284u;
    // 0x187284: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x187284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187288: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x187288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x18728c: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x18728cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_187290:
    // 0x187290: 0x4630045  bgezl       $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x187290u;
    {
        const bool branch_taken_0x187290 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187290) {
            ctx->pc = 0x187294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187290u;
            // 0x187294: 0x926304f0  lbu         $v1, 0x4F0($s3) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1873A8u;
            goto label_1873a8;
        }
    }
    ctx->pc = 0x187298u;
    // 0x187298: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18729c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18729cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1872a0: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x1872a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x1872a4: 0x54a4000e  bnel        $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1872A4u;
    {
        const bool branch_taken_0x1872a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1872a4) {
            ctx->pc = 0x1872A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1872A4u;
            // 0x1872a8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1872E0u;
            goto label_1872e0;
        }
    }
    ctx->pc = 0x1872ACu;
    // 0x1872ac: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1872acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1872b0: 0x9063b245  lbu         $v1, -0x4DBB($v1)
    ctx->pc = 0x1872b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947397)));
    // 0x1872b4: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1872B4u;
    {
        const bool branch_taken_0x1872b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872b4) {
            ctx->pc = 0x1872B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1872B4u;
            // 0x1872b8: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x1872BCu;
    // 0x1872bc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1872bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1872c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1872c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1872c4: 0x906395c0  lbu         $v1, -0x6A40($v1)
    ctx->pc = 0x1872c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x1872c8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1872C8u;
    {
        const bool branch_taken_0x1872c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1872c8) {
            ctx->pc = 0x1872DCu;
            goto label_1872dc;
        }
    }
    ctx->pc = 0x1872D0u;
    // 0x1872d0: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x1872d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1872d4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1872D4u;
    {
        const bool branch_taken_0x1872d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872d4) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x1872DCu;
label_1872dc:
    // 0x1872dc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1872e0:
    // 0x1872e0: 0x54a30018  bnel        $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1872E0u;
    {
        const bool branch_taken_0x1872e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1872e0) {
            ctx->pc = 0x1872E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1872E0u;
            // 0x1872e4: 0x926304eb  lbu         $v1, 0x4EB($s3) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1259)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187344u;
            goto label_187344;
        }
    }
    ctx->pc = 0x1872E8u;
    // 0x1872e8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x1872e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x1872ec: 0x8c64bee4  lw          $a0, -0x411C($v1)
    ctx->pc = 0x1872ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x1872f0: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1872f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1872f4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1872F4u;
    {
        const bool branch_taken_0x1872f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872f4) {
            ctx->pc = 0x1872F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1872F4u;
            // 0x1872f8: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18731Cu;
            goto label_18731c;
        }
    }
    ctx->pc = 0x1872FCu;
    // 0x1872fc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x187300: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x187300u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x187304: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x187304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x187308: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187308u;
    {
        const bool branch_taken_0x187308 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x187308) {
            ctx->pc = 0x187318u;
            goto label_187318;
        }
    }
    ctx->pc = 0x187310u;
    // 0x187310: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x187310u;
    {
        const bool branch_taken_0x187310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187310u;
        // 0x187314: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187310) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x187318u;
label_187318:
    // 0x187318: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_18731c:
    // 0x18731c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187320: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x187320u;
    {
        const bool branch_taken_0x187320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187320) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187328u;
    // 0x187328: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18732c: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x18732cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x187330: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187330u;
    {
        const bool branch_taken_0x187330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x187330) {
            ctx->pc = 0x187340u;
            goto label_187340;
        }
    }
    ctx->pc = 0x187338u;
    // 0x187338: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x187338u;
    {
        const bool branch_taken_0x187338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187338u;
        // 0x18733c: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187338) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x187340u;
label_187340:
    // 0x187340: 0x926304eb  lbu         $v1, 0x4EB($s3)
    ctx->pc = 0x187340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1259)));
label_187344:
    // 0x187344: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x187344u;
    {
        const bool branch_taken_0x187344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187344) {
            ctx->pc = 0x187348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187344u;
            // 0x187348: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187354u;
            goto label_187354;
        }
    }
    ctx->pc = 0x18734Cu;
    // 0x18734c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x18734Cu;
    {
        const bool branch_taken_0x18734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18734Cu;
        // 0x187350: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18734c) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x187354u;
label_187354:
    // 0x187354: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x187358: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x187358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x18735c: 0x926504f0  lbu         $a1, 0x4F0($s3)
    ctx->pc = 0x18735cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1264)));
    // 0x187360: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x187364: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x187364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x187368: 0xa26504f0  sb          $a1, 0x4F0($s3)
    ctx->pc = 0x187368u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1264), (uint8_t)GPR_U32(ctx, 5));
    // 0x18736c: 0x866504da  lh          $a1, 0x4DA($s3)
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1242)));
    // 0x187370: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x187370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x187374: 0xa66504da  sh          $a1, 0x4DA($s3)
    ctx->pc = 0x187374u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1242), (uint16_t)GPR_U32(ctx, 5));
    // 0x187378: 0x9063db10  lbu         $v1, -0x24F0($v1)
    ctx->pc = 0x187378u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x18737c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x18737cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x187380: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x187380u;
    {
        const bool branch_taken_0x187380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x187380) {
            ctx->pc = 0x1873A4u;
            goto label_1873a4;
        }
    }
    ctx->pc = 0x187388u;
    // 0x187388: 0xc062784  jal         func_189E10
    ctx->pc = 0x187388u;
    SET_GPR_U32(ctx, 31, 0x187390u);
    ctx->pc = 0x18738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187388u;
    // 0x18738c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E10u, 0x187388u, 0x187390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187390u;
label_187390:
    // 0x187390: 0xc068370  jal         func_1A0DC0
    ctx->pc = 0x187390u;
    SET_GPR_U32(ctx, 31, 0x187398u);
    ctx->pc = 0x187394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187390u;
    // 0x187394: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0DC0u, 0x187390u, 0x187398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187398u;
label_187398:
    // 0x187398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18739c: 0xc068380  jal         func_1A0E00
    ctx->pc = 0x18739Cu;
    SET_GPR_U32(ctx, 31, 0x1873A4u);
    ctx->pc = 0x1873A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18739Cu;
    // 0x1873a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E00u, 0x18739Cu, 0x1873A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873A4u;
label_1873a4:
    // 0x1873a4: 0x926304f0  lbu         $v1, 0x4F0($s3)
    ctx->pc = 0x1873a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1264)));
label_1873a8:
    // 0x1873a8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1873a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1873ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1873ACu;
    {
        const bool branch_taken_0x1873ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1873ac) {
            ctx->pc = 0x1873D0u;
            goto label_1873d0;
        }
    }
    ctx->pc = 0x1873B4u;
    // 0x1873b4: 0x866204ec  lh          $v0, 0x4EC($s3)
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1260)));
    // 0x1873b8: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x1873b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1873bc: 0xa66204ec  sh          $v0, 0x4EC($s3)
    ctx->pc = 0x1873bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1260), (uint16_t)GPR_U32(ctx, 2));
    // 0x1873c0: 0x866404ee  lh          $a0, 0x4EE($s3)
    ctx->pc = 0x1873c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1262)));
    // 0x1873c4: 0xc0631d4  jal         func_18C750
    ctx->pc = 0x1873C4u;
    SET_GPR_U32(ctx, 31, 0x1873CCu);
    ctx->pc = 0x1873C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873C4u;
    // 0x1873c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C750u, 0x1873C4u, 0x1873CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873CCu;
label_1873cc:
    // 0x1873cc: 0xa66204ee  sh          $v0, 0x4EE($s3)
    ctx->pc = 0x1873ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1262), (uint16_t)GPR_U32(ctx, 2));
label_1873d0:
    // 0x1873d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1873d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1873d4:
    // 0x1873d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1873d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1873d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1873dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1873dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1873e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1873e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1873E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873E4u;
        // 0x1873e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873ECu;
    // 0x1873ec: 0x0  nop
    ctx->pc = 0x1873ecu;
    // NOP
}
