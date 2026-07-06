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

// Function: sub_001667F0
// Address: 0x1667f0 - 0x166ba0
void sub_001667F0_0x1667f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001667F0_0x1667f0");
#endif

    switch (ctx->pc) {
        case 0x166828u: goto label_166828;
        default: break;
    }

    ctx->pc = 0x1667f0u;

    // 0x1667f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1667f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1667f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1667f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1667f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1667f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1667fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1667fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x166800: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166804: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x166808: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x166808u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16680c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166810: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x166810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166814: 0x948400ea  lhu         $a0, 0xEA($a0)
    ctx->pc = 0x166814u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x166818: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x166818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16681c: 0x926500f7  lbu         $a1, 0xF7($s3)
    ctx->pc = 0x16681cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 247)));
    // 0x166820: 0xc0592e4  jal         func_164B90
    ctx->pc = 0x166820u;
    SET_GPR_U32(ctx, 31, 0x166828u);
    ctx->pc = 0x166824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166820u;
    // 0x166824: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B90u, 0x166820u, 0x166828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166828u;
label_166828:
    // 0x166828: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x166828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16682c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x16682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x166830: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x166830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x166834: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x166834u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x166838: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x166838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16683c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x166840: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x166840u;
    {
        const bool branch_taken_0x166840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x166840) {
            ctx->pc = 0x166844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166840u;
            // 0x166844: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16689Cu;
            goto label_16689c;
        }
    }
    ctx->pc = 0x166848u;
    // 0x166848: 0x8e6400dc  lw          $a0, 0xDC($s3)
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 220)));
    // 0x16684c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x16684cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x166850: 0x90639720  lbu         $v1, -0x68E0($v1)
    ctx->pc = 0x166850u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940448)));
    // 0x166854: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x166854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x166858: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x166858u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x16685c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x16685Cu;
    {
        const bool branch_taken_0x16685c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16685c) {
            ctx->pc = 0x166898u;
            goto label_166898;
        }
    }
    ctx->pc = 0x166864u;
    // 0x166864: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x166868: 0x8e64049c  lw          $a0, 0x49C($s3)
    ctx->pc = 0x166868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
    // 0x16686c: 0x9065bf14  lbu         $a1, -0x40EC($v1)
    ctx->pc = 0x16686cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950676)));
    // 0x166870: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x166870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x166874: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x166874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x166878: 0xae64049c  sw          $a0, 0x49C($s3)
    ctx->pc = 0x166878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 4));
    // 0x16687c: 0x9063bedb  lbu         $v1, -0x4125($v1)
    ctx->pc = 0x16687cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950619)));
    // 0x166880: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166880u;
    {
        const bool branch_taken_0x166880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166880) {
            ctx->pc = 0x166898u;
            goto label_166898;
        }
    }
    ctx->pc = 0x166888u;
    // 0x166888: 0x8e64049c  lw          $a0, 0x49C($s3)
    ctx->pc = 0x166888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
    // 0x16688c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x16688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x166890: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x166890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x166894: 0xae63049c  sw          $v1, 0x49C($s3)
    ctx->pc = 0x166894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 3));
label_166898:
    // 0x166898: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x166898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_16689c:
    // 0x16689c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x16689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1668a0: 0x50640064  beql        $v1, $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1668A0u;
    {
        const bool branch_taken_0x1668a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668a0) {
            ctx->pc = 0x1668A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668A0u;
            // 0x1668a4: 0x8e62049c  lw          $v0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A34u;
            goto label_166a34;
        }
    }
    ctx->pc = 0x1668A8u;
    // 0x1668a8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1668ac: 0x5064005c  beql        $v1, $a0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1668ACu;
    {
        const bool branch_taken_0x1668ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668ac) {
            ctx->pc = 0x1668B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668ACu;
            // 0x1668b0: 0x8e62049c  lw          $v0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A20u;
            goto label_166a20;
        }
    }
    ctx->pc = 0x1668B4u;
    // 0x1668b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1668b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1668b8: 0x50640054  beql        $v1, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1668B8u;
    {
        const bool branch_taken_0x1668b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668b8) {
            ctx->pc = 0x1668BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668B8u;
            // 0x1668bc: 0x8e62049c  lw          $v0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A0Cu;
            goto label_166a0c;
        }
    }
    ctx->pc = 0x1668C0u;
    // 0x1668c0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1668c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1668c4: 0x5064004c  beql        $v1, $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1668C4u;
    {
        const bool branch_taken_0x1668c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668c4) {
            ctx->pc = 0x1668C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668C4u;
            // 0x1668c8: 0x8e62049c  lw          $v0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1669F8u;
            goto label_1669f8;
        }
    }
    ctx->pc = 0x1668CCu;
    // 0x1668cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1668ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1668d0: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1668D0u;
    {
        const bool branch_taken_0x1668d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668d0) {
            ctx->pc = 0x1668D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668D0u;
            // 0x1668d4: 0x8e64049c  lw          $a0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166968u;
            goto label_166968;
        }
    }
    ctx->pc = 0x1668D8u;
    // 0x1668d8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1668d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1668dc: 0x5064001d  beql        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1668DCu;
    {
        const bool branch_taken_0x1668dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1668dc) {
            ctx->pc = 0x1668E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668DCu;
            // 0x1668e0: 0x8e62049c  lw          $v0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166954u;
            goto label_166954;
        }
    }
    ctx->pc = 0x1668E4u;
    // 0x1668e4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1668E4u;
    {
        const bool branch_taken_0x1668e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668e4) {
            ctx->pc = 0x1668E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1668E4u;
            // 0x1668e8: 0x8e64049c  lw          $a0, 0x49C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1668F4u;
            goto label_1668f4;
        }
    }
    ctx->pc = 0x1668ECu;
    // 0x1668ec: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1668ECu;
    {
        const bool branch_taken_0x1668ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1668F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1668ECu;
        // 0x1668f0: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1668ec) {
            ctx->pc = 0x166A4Cu;
            goto label_166a4c;
        }
    }
    ctx->pc = 0x1668F4u;
label_1668f4:
    // 0x1668f4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1668f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1668f8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1668F8u;
    {
        const bool branch_taken_0x1668f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1668f8) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166900u;
    // 0x166900: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x166900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x166904: 0x5444009f  bnel        $v0, $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x166904u;
    {
        const bool branch_taken_0x166904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x166904) {
            ctx->pc = 0x166908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166904u;
            // 0x166908: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x16690Cu;
    // 0x16690c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x16690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x166910: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x166910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x166914: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x166914u;
    {
        const bool branch_taken_0x166914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166914) {
            ctx->pc = 0x166948u;
            goto label_166948;
        }
    }
    ctx->pc = 0x16691Cu;
    // 0x16691c: 0x3244ffff  andi        $a0, $s2, 0xFFFF
    ctx->pc = 0x16691cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x166920: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x166920u;
    {
        const bool branch_taken_0x166920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x166920) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166928u;
    // 0x166928: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x166928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16692c: 0x10820046  beq         $a0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x16692Cu;
    {
        const bool branch_taken_0x16692c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x16692c) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166934u;
    // 0x166934: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x166934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x166938: 0x10820043  beq         $a0, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x166938u;
    {
        const bool branch_taken_0x166938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x166938) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166940u;
    // 0x166940: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x166940u;
    {
        const bool branch_taken_0x166940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166940u;
        // 0x166944: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166940) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166948u;
label_166948:
    // 0x166948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16694c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x16694Cu;
    {
        const bool branch_taken_0x16694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16694c) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166954u;
label_166954:
    // 0x166954: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166958: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x166958u;
    {
        const bool branch_taken_0x166958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166958) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166960u;
    // 0x166960: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x166960u;
    {
        const bool branch_taken_0x166960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166960u;
        // 0x166964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166960) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166968u;
label_166968:
    // 0x166968: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x166968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x16696c: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x16696Cu;
    {
        const bool branch_taken_0x16696c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16696c) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166974u;
    // 0x166974: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x166974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x166978: 0x54440082  bnel        $v0, $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x166978u;
    {
        const bool branch_taken_0x166978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x166978) {
            ctx->pc = 0x16697Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166978u;
            // 0x16697c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166980u;
    // 0x166980: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x166980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x166984: 0x9042bedb  lbu         $v0, -0x4125($v0)
    ctx->pc = 0x166984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950619)));
    // 0x166988: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x166988u;
    {
        const bool branch_taken_0x166988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166988) {
            ctx->pc = 0x1669ECu;
            goto label_1669ec;
        }
    }
    ctx->pc = 0x166990u;
    // 0x166990: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x166990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x166994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166998: 0x8084bed0  lb          $a0, -0x4130($a0)
    ctx->pc = 0x166998u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950608)));
    // 0x16699c: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16699Cu;
    {
        const bool branch_taken_0x16699c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16699c) {
            ctx->pc = 0x1669ECu;
            goto label_1669ec;
        }
    }
    ctx->pc = 0x1669A4u;
    // 0x1669a4: 0x926403df  lbu         $a0, 0x3DF($s3)
    ctx->pc = 0x1669a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 991)));
    // 0x1669a8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1669A8u;
    {
        const bool branch_taken_0x1669a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669a8) {
            ctx->pc = 0x1669ECu;
            goto label_1669ec;
        }
    }
    ctx->pc = 0x1669B0u;
    // 0x1669b0: 0x3245ffff  andi        $a1, $s2, 0xFFFF
    ctx->pc = 0x1669b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x1669b4: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1669b8: 0x10a40023  beq         $a1, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1669B8u;
    {
        const bool branch_taken_0x1669b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1669b8) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x1669C0u;
    // 0x1669c0: 0x2404005e  addiu       $a0, $zero, 0x5E
    ctx->pc = 0x1669c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1669c4: 0x10a40020  beq         $a1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1669C4u;
    {
        const bool branch_taken_0x1669c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1669c4) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x1669CCu;
    // 0x1669cc: 0x240400b1  addiu       $a0, $zero, 0xB1
    ctx->pc = 0x1669ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x1669d0: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1669D0u;
    {
        const bool branch_taken_0x1669d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1669d0) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x1669D8u;
    // 0x1669d8: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x1669d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1669dc: 0x10a4001a  beq         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1669DCu;
    {
        const bool branch_taken_0x1669dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1669dc) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x1669E4u;
    // 0x1669e4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1669E4u;
    {
        const bool branch_taken_0x1669e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669e4) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x1669ECu;
label_1669ec:
    // 0x1669ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1669ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1669f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1669F0u;
    {
        const bool branch_taken_0x1669f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669f0) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x1669F8u;
label_1669f8:
    // 0x1669f8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1669f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1669fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1669FCu;
    {
        const bool branch_taken_0x1669fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1669fc) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166A04u;
    // 0x166a04: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x166A04u;
    {
        const bool branch_taken_0x166a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A04u;
        // 0x166a08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a04) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A0Cu;
label_166a0c:
    // 0x166a0c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x166a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x166a10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166A10u;
    {
        const bool branch_taken_0x166a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a10) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166A18u;
    // 0x166a18: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x166A18u;
    {
        const bool branch_taken_0x166a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A18u;
        // 0x166a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a18) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A20u;
label_166a20:
    // 0x166a20: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x166a24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166A24u;
    {
        const bool branch_taken_0x166a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a24) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166A2Cu;
    // 0x166a2c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x166A2Cu;
    {
        const bool branch_taken_0x166a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A2Cu;
        // 0x166a30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a2c) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A34u;
label_166a34:
    // 0x166a34: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x166a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x166a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166A38u;
    {
        const bool branch_taken_0x166a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a38) {
            ctx->pc = 0x166A48u;
            goto label_166a48;
        }
    }
    ctx->pc = 0x166A40u;
    // 0x166a40: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x166A40u;
    {
        const bool branch_taken_0x166a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A40u;
        // 0x166a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a40) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A48u;
label_166a48:
    // 0x166a48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x166a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_166a4c:
    // 0x166a4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166a50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x166A50u;
    {
        const bool branch_taken_0x166a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a50) {
            ctx->pc = 0x166A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A50u;
            // 0x166a54: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x166A70u;
            goto label_166a70;
        }
    }
    ctx->pc = 0x166A58u;
    // 0x166a58: 0x92620281  lbu         $v0, 0x281($s3)
    ctx->pc = 0x166a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 641)));
    // 0x166a5c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x166a60: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x166A60u;
    {
        const bool branch_taken_0x166a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a60) {
            ctx->pc = 0x166A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A60u;
            // 0x166a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A68u;
    // 0x166a68: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x166A68u;
    {
        const bool branch_taken_0x166a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166A68u;
        // 0x166a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a68) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A70u;
label_166a70:
    // 0x166a70: 0x30427800  andi        $v0, $v0, 0x7800
    ctx->pc = 0x166a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)30720);
    // 0x166a74: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x166A74u;
    {
        const bool branch_taken_0x166a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a74) {
            ctx->pc = 0x166A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A74u;
            // 0x166a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166A7Cu;
    // 0x166a7c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x166a80: 0x5062003a  beql        $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x166A80u;
    {
        const bool branch_taken_0x166a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166a80) {
            ctx->pc = 0x166A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A80u;
            // 0x166a84: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B6Cu;
            goto label_166b6c;
        }
    }
    ctx->pc = 0x166A88u;
    // 0x166a88: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x166a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x166a8c: 0x50620032  beql        $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x166A8Cu;
    {
        const bool branch_taken_0x166a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166a8c) {
            ctx->pc = 0x166A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A8Cu;
            // 0x166a90: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B58u;
            goto label_166b58;
        }
    }
    ctx->pc = 0x166A94u;
    // 0x166a94: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x166a98: 0x5062002a  beql        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x166A98u;
    {
        const bool branch_taken_0x166a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166a98) {
            ctx->pc = 0x166A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166A98u;
            // 0x166a9c: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B44u;
            goto label_166b44;
        }
    }
    ctx->pc = 0x166AA0u;
    // 0x166aa0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x166aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x166aa4: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x166AA4u;
    {
        const bool branch_taken_0x166aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166aa4) {
            ctx->pc = 0x166AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166AA4u;
            // 0x166aa8: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B30u;
            goto label_166b30;
        }
    }
    ctx->pc = 0x166AACu;
    // 0x166aac: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x166ab0: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x166AB0u;
    {
        const bool branch_taken_0x166ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166ab0) {
            ctx->pc = 0x166AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166AB0u;
            // 0x166ab4: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B1Cu;
            goto label_166b1c;
        }
    }
    ctx->pc = 0x166AB8u;
    // 0x166ab8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x166abc: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x166ABCu;
    {
        const bool branch_taken_0x166abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166abc) {
            ctx->pc = 0x166AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166ABCu;
            // 0x166ac0: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166B08u;
            goto label_166b08;
        }
    }
    ctx->pc = 0x166AC4u;
    // 0x166ac4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x166ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x166ac8: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x166AC8u;
    {
        const bool branch_taken_0x166ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x166ac8) {
            ctx->pc = 0x166ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166AC8u;
            // 0x166acc: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166AF4u;
            goto label_166af4;
        }
    }
    ctx->pc = 0x166AD0u;
    // 0x166ad0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x166AD0u;
    {
        const bool branch_taken_0x166ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ad0) {
            ctx->pc = 0x166AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166AD0u;
            // 0x166ad4: 0x92620282  lbu         $v0, 0x282($s3) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 642)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166AE0u;
            goto label_166ae0;
        }
    }
    ctx->pc = 0x166AD8u;
    // 0x166ad8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x166AD8u;
    {
        const bool branch_taken_0x166ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ad8) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166AE0u;
label_166ae0:
    // 0x166ae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x166ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x166ae4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x166AE4u;
    {
        const bool branch_taken_0x166ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166ae4) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166AECu;
    // 0x166aec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x166AECu;
    {
        const bool branch_taken_0x166aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166AECu;
        // 0x166af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166aec) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166AF4u;
label_166af4:
    // 0x166af4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x166af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x166af8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x166AF8u;
    {
        const bool branch_taken_0x166af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166af8) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B00u;
    // 0x166b00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x166B00u;
    {
        const bool branch_taken_0x166b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B00u;
        // 0x166b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b00) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B08u;
label_166b08:
    // 0x166b08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x166b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x166b0c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x166B0Cu;
    {
        const bool branch_taken_0x166b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b0c) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B14u;
    // 0x166b14: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x166B14u;
    {
        const bool branch_taken_0x166b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B14u;
        // 0x166b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b14) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B1Cu;
label_166b1c:
    // 0x166b1c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x166b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x166b20: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x166B20u;
    {
        const bool branch_taken_0x166b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b20) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B28u;
    // 0x166b28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x166B28u;
    {
        const bool branch_taken_0x166b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B28u;
        // 0x166b2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b28) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B30u;
label_166b30:
    // 0x166b30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x166b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x166b34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x166B34u;
    {
        const bool branch_taken_0x166b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b34) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B3Cu;
    // 0x166b3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x166B3Cu;
    {
        const bool branch_taken_0x166b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B3Cu;
        // 0x166b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b3c) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B44u;
label_166b44:
    // 0x166b44: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x166b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x166b48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x166B48u;
    {
        const bool branch_taken_0x166b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b48) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B50u;
    // 0x166b50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x166B50u;
    {
        const bool branch_taken_0x166b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B50u;
        // 0x166b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b50) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B58u;
label_166b58:
    // 0x166b58: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x166b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x166b5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x166B5Cu;
    {
        const bool branch_taken_0x166b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b5c) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B64u;
    // 0x166b64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x166B64u;
    {
        const bool branch_taken_0x166b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B64u;
        // 0x166b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b64) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B6Cu;
label_166b6c:
    // 0x166b6c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x166b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x166b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x166B70u;
    {
        const bool branch_taken_0x166b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x166b70) {
            ctx->pc = 0x166B80u;
            goto label_166b80;
        }
    }
    ctx->pc = 0x166B78u;
    // 0x166b78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166B78u;
    {
        const bool branch_taken_0x166b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B78u;
        // 0x166b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166b78) {
            ctx->pc = 0x166B84u;
            goto label_166b84;
        }
    }
    ctx->pc = 0x166B80u;
label_166b80:
    // 0x166b80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166b84:
    // 0x166b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166b98: 0x3e00008  jr          $ra
    ctx->pc = 0x166B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166B98u;
        // 0x166b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166BA0u;
}
