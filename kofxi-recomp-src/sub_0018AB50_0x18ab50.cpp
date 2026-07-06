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

// Function: sub_0018AB50
// Address: 0x18ab50 - 0x18ac80
void sub_0018AB50_0x18ab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AB50_0x18ab50");
#endif

    switch (ctx->pc) {
        case 0x18ac70u: goto label_18ac70;
        default: break;
    }

    ctx->pc = 0x18ab50u;

    // 0x18ab50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ab54: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18ab58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ab5c: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18ab5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18ab60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AB60u;
    {
        const bool branch_taken_0x18ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab60) {
            ctx->pc = 0x18AB70u;
            goto label_18ab70;
        }
    }
    ctx->pc = 0x18AB68u;
    // 0x18ab68: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x18AB68u;
    {
        const bool branch_taken_0x18ab68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB68u;
        // 0x18ab6c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab68) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18AB70u;
label_18ab70:
    // 0x18ab70: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18ab74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18ab78: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18ab78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18ab7c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AB7Cu;
    {
        const bool branch_taken_0x18ab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ab7c) {
            ctx->pc = 0x18AB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB7Cu;
            // 0x18ab80: 0x8c8600dc  lw          $a2, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ABA4u;
            goto label_18aba4;
        }
    }
    ctx->pc = 0x18AB84u;
    // 0x18ab84: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18ab88: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x18ab8c: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x18ab8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x18ab90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AB90u;
    {
        const bool branch_taken_0x18ab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ab90) {
            ctx->pc = 0x18ABA0u;
            goto label_18aba0;
        }
    }
    ctx->pc = 0x18AB98u;
    // 0x18ab98: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18AB98u;
    {
        const bool branch_taken_0x18ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB98u;
        // 0x18ab9c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab98) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18ABA0u;
label_18aba0:
    // 0x18aba0: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x18aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_18aba4:
    // 0x18aba4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x18aba8: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x18abac: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x18abacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x18abb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x18abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18abb4: 0x61082  srl         $v0, $a2, 2
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x18abb8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABB8u;
    {
        const bool branch_taken_0x18abb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABB8u;
        // 0x18abbc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abb8) {
            ctx->pc = 0x18ABC8u;
            goto label_18abc8;
        }
    }
    ctx->pc = 0x18ABC0u;
    // 0x18abc0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x18ABC0u;
    {
        const bool branch_taken_0x18abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC0u;
        // 0x18abc4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abc0) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18ABC8u;
label_18abc8:
    // 0x18abc8: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x18abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x18abcc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18abd0: 0x8c67d918  lw          $a3, -0x26E8($v1)
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x18abd4: 0x34c30100  ori         $v1, $a2, 0x100
    ctx->pc = 0x18abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x18abd8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x18abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x18abdc: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABDCu;
    {
        const bool branch_taken_0x18abdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18abdc) {
            ctx->pc = 0x18ABE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ABDCu;
            // 0x18abe0: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ABECu;
            goto label_18abec;
        }
    }
    ctx->pc = 0x18ABE4u;
    // 0x18abe4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18ABE4u;
    {
        const bool branch_taken_0x18abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE4u;
        // 0x18abe8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe4) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18ABECu;
label_18abec:
    // 0x18abec: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x18abf0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x18abf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x18abf4: 0x24c6db55  addiu       $a2, $a2, -0x24AB
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957909));
    // 0x18abf8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18abfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ac00: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18ac04: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x18ac08: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x18ac0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x18ac10: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x18ac10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ac14: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC14u;
    {
        const bool branch_taken_0x18ac14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ac14) {
            ctx->pc = 0x18AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC14u;
            // 0x18ac18: 0x8c830490  lw          $v1, 0x490($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC24u;
            goto label_18ac24;
        }
    }
    ctx->pc = 0x18AC1Cu;
    // 0x18ac1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x18AC1Cu;
    {
        const bool branch_taken_0x18ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC1Cu;
        // 0x18ac20: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac1c) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18AC24u;
label_18ac24:
    // 0x18ac24: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x18ac24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18ac28: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC28u;
    {
        const bool branch_taken_0x18ac28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac28) {
            ctx->pc = 0x18AC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC28u;
            // 0x18ac2c: 0x8c86048c  lw          $a2, 0x48C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC38u;
            goto label_18ac38;
        }
    }
    ctx->pc = 0x18AC30u;
    // 0x18ac30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x18AC30u;
    {
        const bool branch_taken_0x18ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC30u;
        // 0x18ac34: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac30) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18AC38u;
label_18ac38:
    // 0x18ac38: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x18ac3c: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x18ac3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x18ac40: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x18ac40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x18ac44: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC44u;
    {
        const bool branch_taken_0x18ac44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac44) {
            ctx->pc = 0x18AC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC44u;
            // 0x18ac48: 0x8c8304a0  lw          $v1, 0x4A0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC54u;
            goto label_18ac54;
        }
    }
    ctx->pc = 0x18AC4Cu;
    // 0x18ac4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18AC4Cu;
    {
        const bool branch_taken_0x18ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC4Cu;
        // 0x18ac50: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac4c) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18AC54u;
label_18ac54:
    // 0x18ac54: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x18ac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x18ac58: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC58u;
    {
        const bool branch_taken_0x18ac58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac58) {
            ctx->pc = 0x18AC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC58u;
            // 0x18ac5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC68u;
            goto label_18ac68;
        }
    }
    ctx->pc = 0x18AC60u;
    // 0x18ac60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18AC60u;
    {
        const bool branch_taken_0x18ac60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC60u;
        // 0x18ac64: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac60) {
            ctx->pc = 0x18AC70u;
            goto label_18ac70;
        }
    }
    ctx->pc = 0x18AC68u;
label_18ac68:
    // 0x18ac68: 0xc06298c  jal         func_18A630
    ctx->pc = 0x18AC68u;
    SET_GPR_U32(ctx, 31, 0x18AC70u);
    ctx->pc = 0x18A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A630u, 0x18AC68u, 0x18AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AC70u;
label_18ac70:
    // 0x18ac70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC74u;
        // 0x18ac78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AC7Cu;
    // 0x18ac7c: 0x0  nop
    ctx->pc = 0x18ac7cu;
    // NOP
}
