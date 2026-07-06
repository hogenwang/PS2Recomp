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

// Function: sub_0018A8C0
// Address: 0x18a8c0 - 0x18a9f0
void sub_0018A8C0_0x18a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A8C0_0x18a8c0");
#endif

    switch (ctx->pc) {
        case 0x18a9e4u: goto label_18a9e4;
        default: break;
    }

    ctx->pc = 0x18a8c0u;

    // 0x18a8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a8c4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18a8c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a8cc: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18a8ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18a8d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A8D0u;
    {
        const bool branch_taken_0x18a8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a8d0) {
            ctx->pc = 0x18A8E0u;
            goto label_18a8e0;
        }
    }
    ctx->pc = 0x18A8D8u;
    // 0x18a8d8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x18A8D8u;
    {
        const bool branch_taken_0x18a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8D8u;
        // 0x18a8dc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8d8) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A8E0u;
label_18a8e0:
    // 0x18a8e0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a8e4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18a8e8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18a8e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18a8ec: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A8ECu;
    {
        const bool branch_taken_0x18a8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a8ec) {
            ctx->pc = 0x18A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A8ECu;
            // 0x18a8f0: 0x8c8300dc  lw          $v1, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A914u;
            goto label_18a914;
        }
    }
    ctx->pc = 0x18A8F4u;
    // 0x18a8f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18a8f8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18a8fc: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x18a8fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x18a900: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A900u;
    {
        const bool branch_taken_0x18a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a900) {
            ctx->pc = 0x18A910u;
            goto label_18a910;
        }
    }
    ctx->pc = 0x18A908u;
    // 0x18a908: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18A908u;
    {
        const bool branch_taken_0x18a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A908u;
        // 0x18a90c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a908) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A910u;
label_18a910:
    // 0x18a910: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x18a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_18a914:
    // 0x18a914: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x18a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x18a918: 0x8c86049c  lw          $a2, 0x49C($a0)
    ctx->pc = 0x18a918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x18a91c: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x18a91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x18a920: 0x33882  srl         $a3, $v1, 2
    ctx->pc = 0x18a920u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x18a924: 0xc21824  and         $v1, $a2, $v0
    ctx->pc = 0x18a924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x18a928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A928u;
    {
        const bool branch_taken_0x18a928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A928u;
        // 0x18a92c: 0x30e200ff  andi        $v0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a928) {
            ctx->pc = 0x18A938u;
            goto label_18a938;
        }
    }
    ctx->pc = 0x18A930u;
    // 0x18a930: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18A930u;
    {
        const bool branch_taken_0x18a930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A930u;
        // 0x18a934: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a930) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A938u;
label_18a938:
    // 0x18a938: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x18a938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x18a93c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x18a93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18a940: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A940u;
    {
        const bool branch_taken_0x18a940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a940) {
            ctx->pc = 0x18A950u;
            goto label_18a950;
        }
    }
    ctx->pc = 0x18A948u;
    // 0x18a948: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18A948u;
    {
        const bool branch_taken_0x18a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A948u;
        // 0x18a94c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a948) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A950u;
label_18a950:
    // 0x18a950: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x18a950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x18a954: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x18a954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18a958: 0x8c67d918  lw          $a3, -0x26E8($v1)
    ctx->pc = 0x18a958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x18a95c: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x18a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x18a960: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x18a960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x18a964: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A964u;
    {
        const bool branch_taken_0x18a964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a964) {
            ctx->pc = 0x18A968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A964u;
            // 0x18a968: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A974u;
            goto label_18a974;
        }
    }
    ctx->pc = 0x18A96Cu;
    // 0x18a96c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18A96Cu;
    {
        const bool branch_taken_0x18a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A96Cu;
        // 0x18a970: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a96c) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A974u;
label_18a974:
    // 0x18a974: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18a974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18a978: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x18a978u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x18a97c: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x18a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x18a980: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18a984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18a984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a988: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18a988u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18a98c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18a98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18a990: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18a990u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18a994: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18a994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18a998: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x18a998u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18a99c: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A99Cu;
    {
        const bool branch_taken_0x18a99c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a99c) {
            ctx->pc = 0x18A9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A99Cu;
            // 0x18a9a0: 0x8c830490  lw          $v1, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9ACu;
            goto label_18a9ac;
        }
    }
    ctx->pc = 0x18A9A4u;
    // 0x18a9a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18A9A4u;
    {
        const bool branch_taken_0x18a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9A4u;
        // 0x18a9a8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9a4) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A9ACu;
label_18a9ac:
    // 0x18a9ac: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x18a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18a9b0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9B0u;
    {
        const bool branch_taken_0x18a9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a9b0) {
            ctx->pc = 0x18A9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9B0u;
            // 0x18a9b4: 0x8c84048c  lw          $a0, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9C0u;
            goto label_18a9c0;
        }
    }
    ctx->pc = 0x18A9B8u;
    // 0x18a9b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18A9B8u;
    {
        const bool branch_taken_0x18a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9B8u;
        // 0x18a9bc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9b8) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A9C0u;
label_18a9c0:
    // 0x18a9c0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18a9c4: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x18a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x18a9c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18a9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x18a9cc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9CCu;
    {
        const bool branch_taken_0x18a9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a9cc) {
            ctx->pc = 0x18A9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A9CCu;
            // 0x18a9d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A9DCu;
            goto label_18a9dc;
        }
    }
    ctx->pc = 0x18A9D4u;
    // 0x18a9d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9D4u;
    {
        const bool branch_taken_0x18a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9D4u;
        // 0x18a9d8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d4) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A9DCu;
label_18a9dc:
    // 0x18a9dc: 0xc06298c  jal         func_18A630
    ctx->pc = 0x18A9DCu;
    SET_GPR_U32(ctx, 31, 0x18A9E4u);
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x18A9DCu, 0x18A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9E4u;
label_18a9e4:
    // 0x18a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9E8u;
        // 0x18a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A9F0u;
}
