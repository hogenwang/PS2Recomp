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

// Function: sub_0018A9F0
// Address: 0x18a9f0 - 0x18ab50
void sub_0018A9F0_0x18a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A9F0_0x18a9f0");
#endif

    switch (ctx->pc) {
        case 0x18ab34u: goto label_18ab34;
        default: break;
    }

    ctx->pc = 0x18a9f0u;

    // 0x18a9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a9f4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18a9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a9fc: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18a9fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18aa00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA00u;
    {
        const bool branch_taken_0x18aa00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa00) {
            ctx->pc = 0x18AA10u;
            goto label_18aa10;
        }
    }
    ctx->pc = 0x18AA08u;
    // 0x18aa08: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x18AA08u;
    {
        const bool branch_taken_0x18aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA08u;
        // 0x18aa0c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa08) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AA10u;
label_18aa10:
    // 0x18aa10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18aa14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18aa18: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18aa18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18aa1c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AA1Cu;
    {
        const bool branch_taken_0x18aa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18aa1c) {
            ctx->pc = 0x18AA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA1Cu;
            // 0x18aa20: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AA44u;
            goto label_18aa44;
        }
    }
    ctx->pc = 0x18AA24u;
    // 0x18aa24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18aa28: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18aa2c: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x18aa2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x18aa30: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA30u;
    {
        const bool branch_taken_0x18aa30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18aa30) {
            ctx->pc = 0x18AA40u;
            goto label_18aa40;
        }
    }
    ctx->pc = 0x18AA38u;
    // 0x18aa38: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18AA38u;
    {
        const bool branch_taken_0x18aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA38u;
        // 0x18aa3c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa38) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AA40u;
label_18aa40:
    // 0x18aa40: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x18aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_18aa44:
    // 0x18aa44: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x18aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x18aa48: 0x8c86049c  lw          $a2, 0x49C($a0)
    ctx->pc = 0x18aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x18aa4c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x18aa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x18aa50: 0x33882  srl         $a3, $v1, 2
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x18aa54: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x18aa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x18aa58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA58u;
    {
        const bool branch_taken_0x18aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA58u;
        // 0x18aa5c: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa58) {
            ctx->pc = 0x18AA68u;
            goto label_18aa68;
        }
    }
    ctx->pc = 0x18AA60u;
    // 0x18aa60: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18AA60u;
    {
        const bool branch_taken_0x18aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA60u;
        // 0x18aa64: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa60) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AA68u;
label_18aa68:
    // 0x18aa68: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x18aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x18aa6c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x18aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18aa70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA70u;
    {
        const bool branch_taken_0x18aa70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa70) {
            ctx->pc = 0x18AA80u;
            goto label_18aa80;
        }
    }
    ctx->pc = 0x18AA78u;
    // 0x18aa78: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18AA78u;
    {
        const bool branch_taken_0x18aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA78u;
        // 0x18aa7c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa78) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AA80u;
label_18aa80:
    // 0x18aa80: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x18aa84: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x18aa84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18aa88: 0x8c67d918  lw          $a3, -0x26E8($v1)
    ctx->pc = 0x18aa88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x18aa8c: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x18aa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x18aa90: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x18aa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x18aa94: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA94u;
    {
        const bool branch_taken_0x18aa94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa94) {
            ctx->pc = 0x18AA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AA94u;
            // 0x18aa98: 0x908304f0  lbu         $v1, 0x4F0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAA4u;
            goto label_18aaa4;
        }
    }
    ctx->pc = 0x18AA9Cu;
    // 0x18aa9c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x18AA9Cu;
    {
        const bool branch_taken_0x18aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA9Cu;
        // 0x18aaa0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa9c) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AAA4u;
label_18aaa4:
    // 0x18aaa4: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x18aaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x18aaa8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AAA8u;
    {
        const bool branch_taken_0x18aaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aaa8) {
            ctx->pc = 0x18AAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAA8u;
            // 0x18aaac: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAB8u;
            goto label_18aab8;
        }
    }
    ctx->pc = 0x18AAB0u;
    // 0x18aab0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18AAB0u;
    {
        const bool branch_taken_0x18aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB0u;
        // 0x18aab4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aab0) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AAB8u;
label_18aab8:
    // 0x18aab8: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18aabc: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x18aac0: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x18aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x18aac4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18aac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aacc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18aad0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18aad4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18aad4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18aad8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18aad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18aadc: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x18aadcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18aae0: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AAE0u;
    {
        const bool branch_taken_0x18aae0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18aae0) {
            ctx->pc = 0x18AAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAE0u;
            // 0x18aae4: 0x8c830490  lw          $v1, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAF0u;
            goto label_18aaf0;
        }
    }
    ctx->pc = 0x18AAE8u;
    // 0x18aae8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18AAE8u;
    {
        const bool branch_taken_0x18aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAE8u;
        // 0x18aaec: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aae8) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AAF0u;
label_18aaf0:
    // 0x18aaf0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x18aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18aaf4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AAF4u;
    {
        const bool branch_taken_0x18aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aaf4) {
            ctx->pc = 0x18AAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAF4u;
            // 0x18aaf8: 0x8c86048c  lw          $a2, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB04u;
            goto label_18ab04;
        }
    }
    ctx->pc = 0x18AAFCu;
    // 0x18aafc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18AAFCu;
    {
        const bool branch_taken_0x18aafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAFCu;
        // 0x18ab00: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aafc) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AB04u;
label_18ab04:
    // 0x18ab04: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18ab08: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x18ab08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x18ab0c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x18ab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18ab10: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AB10u;
    {
        const bool branch_taken_0x18ab10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab10) {
            ctx->pc = 0x18AB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB10u;
            // 0x18ab14: 0x90830287  lbu         $v1, 0x287($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 647)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB20u;
            goto label_18ab20;
        }
    }
    ctx->pc = 0x18AB18u;
    // 0x18ab18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18AB18u;
    {
        const bool branch_taken_0x18ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB18u;
        // 0x18ab1c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab18) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AB20u;
label_18ab20:
    // 0x18ab20: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x18ab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x18ab24: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AB24u;
    {
        const bool branch_taken_0x18ab24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab24) {
            ctx->pc = 0x18AB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB24u;
            // 0x18ab28: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AB2Cu;
    // 0x18ab2c: 0xc06298c  jal         func_18A630
    ctx->pc = 0x18AB2Cu;
    SET_GPR_U32(ctx, 31, 0x18AB34u);
    ctx->pc = 0x18AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB2Cu;
    // 0x18ab30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x18AB2Cu, 0x18AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB34u;
label_18ab34:
    // 0x18ab34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x18AB34u;
    {
        const bool branch_taken_0x18ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab34) {
            ctx->pc = 0x18AB3Cu;
            goto label_18ab3c;
        }
    }
    ctx->pc = 0x18AB3Cu;
label_18ab3c:
    // 0x18ab3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB40u;
        // 0x18ab44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AB48u;
    // 0x18ab48: 0x0  nop
    ctx->pc = 0x18ab48u;
    // NOP
    // 0x18ab4c: 0x0  nop
    ctx->pc = 0x18ab4cu;
    // NOP
}
