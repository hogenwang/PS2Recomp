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

// Function: sub_0033AE30
// Address: 0x33ae30 - 0x33b1a0
void sub_0033AE30_0x33ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AE30_0x33ae30");
#endif

    switch (ctx->pc) {
        case 0x33aec8u: goto label_33aec8;
        case 0x33aef4u: goto label_33aef4;
        case 0x33af1cu: goto label_33af1c;
        case 0x33af90u: goto label_33af90;
        case 0x33afa4u: goto label_33afa4;
        case 0x33afb8u: goto label_33afb8;
        case 0x33afecu: goto label_33afec;
        case 0x33b000u: goto label_33b000;
        case 0x33b010u: goto label_33b010;
        case 0x33b048u: goto label_33b048;
        case 0x33b05cu: goto label_33b05c;
        default: break;
    }

    ctx->pc = 0x33ae30u;

    // 0x33ae30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33ae34: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ae38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33ae40: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x33ae40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x33ae44: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x33ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x33ae48: 0x50a300d1  beql        $a1, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x33AE48u;
    {
        const bool branch_taken_0x33ae48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33ae48) {
            ctx->pc = 0x33AE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AE48u;
            // 0x33ae4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B190u;
            goto label_33b190;
        }
    }
    ctx->pc = 0x33AE50u;
    // 0x33ae50: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33ae54: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x33ae54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x33ae58: 0x146000cc  bnez        $v1, . + 4 + (0xCC << 2)
    ctx->pc = 0x33AE58u;
    {
        const bool branch_taken_0x33ae58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ae58) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AE60u;
    // 0x33ae60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33ae64: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ae68: 0x9063d9d0  lbu         $v1, -0x2630($v1)
    ctx->pc = 0x33ae68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957520)));
    // 0x33ae6c: 0x106400c7  beq         $v1, $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x33AE6Cu;
    {
        const bool branch_taken_0x33ae6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33ae6c) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AE74u;
    // 0x33ae74: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x33ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x33ae78: 0x8c64d918  lw          $a0, -0x26E8($v1)
    ctx->pc = 0x33ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x33ae7c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x33ae7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x33ae80: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x33AE80u;
    {
        const bool branch_taken_0x33ae80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ae80) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AE88u;
    // 0x33ae88: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x33ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x33ae8c: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x33ae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x33ae90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33ae90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33ae94: 0x146000bd  bnez        $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x33AE94u;
    {
        const bool branch_taken_0x33ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ae94) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AE9Cu;
    // 0x33ae9c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33aea0: 0x10a30029  beq         $a1, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x33AEA0u;
    {
        const bool branch_taken_0x33aea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33aea0) {
            ctx->pc = 0x33AF48u;
            goto label_33af48;
        }
    }
    ctx->pc = 0x33AEA8u;
    // 0x33aea8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x33aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33aeac: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33AEACu;
    {
        const bool branch_taken_0x33aeac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33aeac) {
            ctx->pc = 0x33AEB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AEACu;
            // 0x33aeb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AEC8u;
            goto label_33aec8;
        }
    }
    ctx->pc = 0x33AEB4u;
    // 0x33aeb4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x33aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x33aeb8: 0x9063bedb  lbu         $v1, -0x4125($v1)
    ctx->pc = 0x33aeb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950619)));
    // 0x33aebc: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x33AEBCu;
    {
        const bool branch_taken_0x33aebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33aebc) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AEC4u;
    // 0x33aec4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33aec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33aec8:
    // 0x33aec8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33aecc: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x33aeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
    // 0x33aed0: 0x9065db10  lbu         $a1, -0x24F0($v1)
    ctx->pc = 0x33aed0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x33aed4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x33aed4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x33aed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33aed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aedc: 0x861804  sllv        $v1, $a2, $a0
    ctx->pc = 0x33aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x33aee0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x33aee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33aee4: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AEE4u;
    {
        const bool branch_taken_0x33aee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aee4) {
            ctx->pc = 0x33AEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AEE4u;
            // 0x33aee8: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AF28u;
            goto label_33af28;
        }
    }
    ctx->pc = 0x33AEECu;
    // 0x33aeec: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33AEECu;
    SET_GPR_U32(ctx, 31, 0x33AEF4u);
    ctx->pc = 0x33AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AEECu;
    // 0x33aef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33AEECu, 0x33AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AEF4u;
label_33aef4:
    // 0x33aef4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33AEF4u;
    {
        const bool branch_taken_0x33aef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aef4) {
            ctx->pc = 0x33AF24u;
            goto label_33af24;
        }
    }
    ctx->pc = 0x33AEFCu;
    // 0x33aefc: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33AEFCu;
    {
        const bool branch_taken_0x33aefc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33aefc) {
            ctx->pc = 0x33AF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AEFCu;
            // 0x33af00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AF10u;
            goto label_33af10;
        }
    }
    ctx->pc = 0x33AF04u;
    // 0x33af04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33AF04u;
    {
        const bool branch_taken_0x33af04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AF04u;
        // 0x33af08: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33af04) {
            ctx->pc = 0x33AF10u;
            goto label_33af10;
        }
    }
    ctx->pc = 0x33AF0Cu;
    // 0x33af0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33af10:
    // 0x33af10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33af10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33af14: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x33AF14u;
    SET_GPR_U32(ctx, 31, 0x33AF1Cu);
    ctx->pc = 0x33AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF14u;
    // 0x33af18: 0xa04395c0  sb          $v1, -0x6A40($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3054D0u, 0x33AF14u, 0x33AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF1Cu;
label_33af1c:
    // 0x33af1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33AF1Cu;
    {
        const bool branch_taken_0x33af1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af1c) {
            ctx->pc = 0x33AF40u;
            goto label_33af40;
        }
    }
    ctx->pc = 0x33AF24u;
label_33af24:
    // 0x33af24: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x33af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33af28:
    // 0x33af28: 0x3863c  dsll32      $s0, $v1, 24
    ctx->pc = 0x33af28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33af2c: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x33af2cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x33af30: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x33af30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33af34: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x33AF34u;
    {
        const bool branch_taken_0x33af34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33af34) {
            ctx->pc = 0x33AEC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33aec8;
        }
    }
    ctx->pc = 0x33AF3Cu;
    // 0x33af3c: 0x0  nop
    ctx->pc = 0x33af3cu;
    // NOP
label_33af40:
    // 0x33af40: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x33AF40u;
    {
        const bool branch_taken_0x33af40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af40) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AF48u;
label_33af48:
    // 0x33af48: 0x14a30090  bne         $a1, $v1, . + 4 + (0x90 << 2)
    ctx->pc = 0x33AF48u;
    {
        const bool branch_taken_0x33af48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33af48) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33AF50u;
    // 0x33af50: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33af50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33af54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33af54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33af58: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x33af58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x33af5c: 0x1064003f  beq         $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x33AF5Cu;
    {
        const bool branch_taken_0x33af5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33af5c) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33AF64u;
    // 0x33af64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33af64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33af68: 0x50660011  beql        $v1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x33AF68u;
    {
        const bool branch_taken_0x33af68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33af68) {
            ctx->pc = 0x33AF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AF68u;
            // 0x33af6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AFB0u;
            goto label_33afb0;
        }
    }
    ctx->pc = 0x33AF70u;
    // 0x33af70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33AF70u;
    {
        const bool branch_taken_0x33af70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af70) {
            ctx->pc = 0x33AF80u;
            goto label_33af80;
        }
    }
    ctx->pc = 0x33AF78u;
    // 0x33af78: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x33AF78u;
    {
        const bool branch_taken_0x33af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af78) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33AF80u;
label_33af80:
    // 0x33af80: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33af80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33af84: 0x90449748  lbu         $a0, -0x68B8($v0)
    ctx->pc = 0x33af84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    // 0x33af88: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33AF88u;
    SET_GPR_U32(ctx, 31, 0x33AF90u);
    ctx->pc = 0x33AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF88u;
    // 0x33af8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33AF88u, 0x33AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AF90u;
label_33af90:
    // 0x33af90: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x33AF90u;
    {
        const bool branch_taken_0x33af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33af90) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33AF98u;
    // 0x33af98: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33af9c: 0xc0cec68  jal         func_33B1A0
    ctx->pc = 0x33AF9Cu;
    SET_GPR_U32(ctx, 31, 0x33AFA4u);
    ctx->pc = 0x33AFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AF9Cu;
    // 0x33afa0: 0x90449748  lbu         $a0, -0x68B8($v0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33AF9Cu, 0x33AFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFA4u;
label_33afa4:
    // 0x33afa4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x33AFA4u;
    {
        const bool branch_taken_0x33afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33afa4) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33AFACu;
    // 0x33afac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33afacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33afb0:
    // 0x33afb0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33AFB0u;
    SET_GPR_U32(ctx, 31, 0x33AFB8u);
    ctx->pc = 0x33AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AFB0u;
    // 0x33afb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33AFB0u, 0x33AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFB8u;
label_33afb8:
    // 0x33afb8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x33AFB8u;
    {
        const bool branch_taken_0x33afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33afb8) {
            ctx->pc = 0x33AFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AFB8u;
            // 0x33afbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B004u;
            goto label_33b004;
        }
    }
    ctx->pc = 0x33AFC0u;
    // 0x33afc0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33afc4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33afc8: 0x904295c0  lbu         $v0, -0x6A40($v0)
    ctx->pc = 0x33afc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
    // 0x33afcc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33AFCCu;
    {
        const bool branch_taken_0x33afcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33afcc) {
            ctx->pc = 0x33AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33AFCCu;
            // 0x33afd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33AFF8u;
            goto label_33aff8;
        }
    }
    ctx->pc = 0x33AFD4u;
    // 0x33afd4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33afd8: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x33afd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
    // 0x33afdc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AFDCu;
    {
        const bool branch_taken_0x33afdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33afdc) {
            ctx->pc = 0x33B000u;
            goto label_33b000;
        }
    }
    ctx->pc = 0x33AFE4u;
    // 0x33afe4: 0xc0cec68  jal         func_33B1A0
    ctx->pc = 0x33AFE4u;
    SET_GPR_U32(ctx, 31, 0x33AFECu);
    ctx->pc = 0x33AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AFE4u;
    // 0x33afe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33AFE4u, 0x33AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AFECu;
label_33afec:
    // 0x33afec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33AFECu;
    {
        const bool branch_taken_0x33afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33afec) {
            ctx->pc = 0x33B000u;
            goto label_33b000;
        }
    }
    ctx->pc = 0x33AFF4u;
    // 0x33aff4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33aff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33aff8:
    // 0x33aff8: 0xc0cec68  jal         func_33B1A0
    ctx->pc = 0x33AFF8u;
    SET_GPR_U32(ctx, 31, 0x33B000u);
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33AFF8u, 0x33B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B000u;
label_33b000:
    // 0x33b000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b004:
    // 0x33b004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b008: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33B008u;
    SET_GPR_U32(ctx, 31, 0x33B010u);
    ctx->pc = 0x33B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B008u;
    // 0x33b00c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x33B008u, 0x33B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B010u;
label_33b010:
    // 0x33b010: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33B010u;
    {
        const bool branch_taken_0x33b010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b010) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33B018u;
    // 0x33b018: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b01c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x33b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b020: 0x906395c0  lbu         $v1, -0x6A40($v1)
    ctx->pc = 0x33b020u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x33b024: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33B024u;
    {
        const bool branch_taken_0x33b024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b024) {
            ctx->pc = 0x33B028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B024u;
            // 0x33b028: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B054u;
            goto label_33b054;
        }
    }
    ctx->pc = 0x33B02Cu;
    // 0x33b02c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b034: 0x90639730  lbu         $v1, -0x68D0($v1)
    ctx->pc = 0x33b034u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940464)));
    // 0x33b038: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B038u;
    {
        const bool branch_taken_0x33b038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b038) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33B040u;
    // 0x33b040: 0xc0cec68  jal         func_33B1A0
    ctx->pc = 0x33B040u;
    SET_GPR_U32(ctx, 31, 0x33B048u);
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33B040u, 0x33B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B048u;
label_33b048:
    // 0x33b048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B048u;
    {
        const bool branch_taken_0x33b048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b048) {
            ctx->pc = 0x33B05Cu;
            goto label_33b05c;
        }
    }
    ctx->pc = 0x33B050u;
    // 0x33b050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b054:
    // 0x33b054: 0xc0cec68  jal         func_33B1A0
    ctx->pc = 0x33B054u;
    SET_GPR_U32(ctx, 31, 0x33B05Cu);
    ctx->pc = 0x33B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B1A0u, 0x33B054u, 0x33B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B05Cu;
label_33b05c:
    // 0x33b05c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b060: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x33b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b064: 0x906395c0  lbu         $v1, -0x6A40($v1)
    ctx->pc = 0x33b064u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x33b068: 0x10640048  beq         $v1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x33B068u;
    {
        const bool branch_taken_0x33b068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33b068) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B070u;
    // 0x33b070: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33b070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33b074: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x33b074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x33b078: 0x14600044  bnez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x33B078u;
    {
        const bool branch_taken_0x33b078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b078) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B080u;
    // 0x33b080: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33b080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33b084: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x33b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33b088: 0x9063b242  lbu         $v1, -0x4DBE($v1)
    ctx->pc = 0x33b088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947394)));
    // 0x33b08c: 0x1464003f  bne         $v1, $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x33B08Cu;
    {
        const bool branch_taken_0x33b08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33b08c) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B094u;
    // 0x33b094: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b098: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x33b098u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x33b09c: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x33B09Cu;
    {
        const bool branch_taken_0x33b09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b09c) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B0A4u;
    // 0x33b0a4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b0a8: 0x8c63d590  lw          $v1, -0x2A70($v1)
    ctx->pc = 0x33b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956432)));
    // 0x33b0ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B0ACu;
    {
        const bool branch_taken_0x33b0ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b0ac) {
            ctx->pc = 0x33B0BCu;
            goto label_33b0bc;
        }
    }
    ctx->pc = 0x33B0B4u;
    // 0x33b0b4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x33B0B4u;
    {
        const bool branch_taken_0x33b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b0b4) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B0BCu;
label_33b0bc:
    // 0x33b0bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b0c0: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x33b0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x33b0c4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x33b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x33b0c8: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x33B0C8u;
    {
        const bool branch_taken_0x33b0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b0c8) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B0D0u;
    // 0x33b0d0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b0d4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b0d8: 0x90639748  lbu         $v1, -0x68B8($v1)
    ctx->pc = 0x33b0d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x33b0dc: 0x24848af0  addiu       $a0, $a0, -0x7510
    ctx->pc = 0x33b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937328));
    // 0x33b0e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x33b0e4: 0x3563c  dsll32      $t2, $v1, 24
    ctx->pc = 0x33b0e4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 24));
    // 0x33b0e8: 0xa563f  dsra32      $t2, $t2, 24
    ctx->pc = 0x33b0e8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 24));
    // 0x33b0ec: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x33b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x33b0f0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x33b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x33b0f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b0f8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x33b0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33b0fc: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x33b0fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b100: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x33B100u;
    {
        const bool branch_taken_0x33b100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b100) {
            ctx->pc = 0x33B18Cu;
            goto label_33b18c;
        }
    }
    ctx->pc = 0x33B108u;
    // 0x33b108: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b10c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33b10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b110: 0x24848af2  addiu       $a0, $a0, -0x750E
    ctx->pc = 0x33b110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937330));
    // 0x33b114: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x33b114u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x33b118: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x33b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33b11c: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x33b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x33b120: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x33b120u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b124: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x33b124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x33b128: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x33b128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x33b12c: 0x2508db53  addiu       $t0, $t0, -0x24AD
    ctx->pc = 0x33b12cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957907));
    // 0x33b130: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x33b130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x33b134: 0x24a5dc9d  addiu       $a1, $a1, -0x2363
    ctx->pc = 0x33b134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958237));
    // 0x33b138: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33b138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b13c: 0x240704b2  addiu       $a3, $zero, 0x4B2
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x33b140: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x33b140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x33b144: 0x448c0  sll         $t1, $a0, 3
    ctx->pc = 0x33b144u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b148: 0x3404e612  ori         $a0, $zero, 0xE612
    ctx->pc = 0x33b148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
    // 0x33b14c: 0x71443018  mult1       $a2, $t2, $a0
    ctx->pc = 0x33b14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33b150: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x33b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x33b154: 0xa94021  addu        $t0, $a1, $t1
    ctx->pc = 0x33b154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x33b158: 0x80890000  lb          $t1, 0x0($a0)
    ctx->pc = 0x33b158u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b15c: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x33b15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x33b160: 0x24a5b290  addiu       $a1, $a1, -0x4D70
    ctx->pc = 0x33b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947472));
    // 0x33b164: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x33b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x33b168: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b16c: 0x24848af4  addiu       $a0, $a0, -0x750C
    ctx->pc = 0x33b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937332));
    // 0x33b170: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33b174: 0x92140  sll         $a0, $t1, 5
    ctx->pc = 0x33b174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x33b178: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x33b178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x33b17c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x33b17cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b180: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x33b180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33b184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33b188: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_33b18c:
    // 0x33b18c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33b190:
    // 0x33b190: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b194: 0x3e00008  jr          $ra
    ctx->pc = 0x33B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B194u;
        // 0x33b198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B19Cu;
    // 0x33b19c: 0x0  nop
    ctx->pc = 0x33b19cu;
    // NOP
    if (ctx->pc == 0x33b19cu) { ctx->pc = 0x33b1a0u; }
}
