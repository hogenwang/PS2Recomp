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

// Function: sub_00187A20
// Address: 0x187a20 - 0x187b50
void sub_00187A20_0x187a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187A20_0x187a20");
#endif

    ctx->pc = 0x187a20u;

    // 0x187a20: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x187a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187a24: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x187a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x187a28: 0x848704bc  lh          $a3, 0x4BC($a0)
    ctx->pc = 0x187a28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1212)));
    // 0x187a2c: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x187a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x187a30: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x187a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x187a34: 0x54882  srl         $t1, $a1, 2
    ctx->pc = 0x187a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x187a38: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x187a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x187a3c: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x187a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x187a40: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x187a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x187a44: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x187a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x187a48: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x187a48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x187a4c: 0xa48004bc  sh          $zero, 0x4BC($a0)
    ctx->pc = 0x187a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1212), (uint16_t)GPR_U32(ctx, 0));
    // 0x187a50: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x187a50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187a54: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187a58: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x187a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x187a5c: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x187a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187a60: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x187a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x187a64: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x187a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x187a68: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x187a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x187a6c: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x187A6Cu;
    {
        const bool branch_taken_0x187a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187A6Cu;
        // 0x187a70: 0x24a8014c  addiu       $t0, $a1, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187a6c) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187A74u;
    // 0x187a74: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x187a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x187a78: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x187a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x187a7c: 0x8c66d918  lw          $a2, -0x26E8($v1)
    ctx->pc = 0x187a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x187a80: 0x34a30100  ori         $v1, $a1, 0x100
    ctx->pc = 0x187a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x187a84: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x187a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x187a88: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x187A88u;
    {
        const bool branch_taken_0x187a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187a88) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187A90u;
    // 0x187a90: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x187a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x187a94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x187a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187a98: 0x90639780  lbu         $v1, -0x6880($v1)
    ctx->pc = 0x187a98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x187a9c: 0x54650008  bnel        $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x187A9Cu;
    {
        const bool branch_taken_0x187a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x187a9c) {
            ctx->pc = 0x187AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187A9Cu;
            // 0x187aa0: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187AC0u;
            goto label_187ac0;
        }
    }
    ctx->pc = 0x187AA4u;
    // 0x187aa4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x187aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x187aa8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x187aac: 0x8c63bee4  lw          $v1, -0x411C($v1)
    ctx->pc = 0x187aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950628)));
    // 0x187ab0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x187ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x187ab4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x187AB4u;
    {
        const bool branch_taken_0x187ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ab4) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187ABCu;
    // 0x187abc: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
label_187ac0:
    // 0x187ac0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187ac0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187ac4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x187AC4u;
    {
        const bool branch_taken_0x187ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187ac4) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187ACCu;
    // 0x187acc: 0x8c83049c  lw          $v1, 0x49C($a0)
    ctx->pc = 0x187accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1180)));
    // 0x187ad0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x187ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x187ad4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x187AD4u;
    {
        const bool branch_taken_0x187ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187ad4) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187ADCu;
    // 0x187adc: 0x8503000c  lh          $v1, 0xC($t0)
    ctx->pc = 0x187adcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x187ae0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x187ae4: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x187ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x187ae8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187aec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187aecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187af0: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x187AF0u;
    {
        const bool branch_taken_0x187af0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187af0) {
            ctx->pc = 0x187B40u;
            goto label_187b40;
        }
    }
    ctx->pc = 0x187AF8u;
    // 0x187af8: 0xa500000c  sh          $zero, 0xC($t0)
    ctx->pc = 0x187af8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x187afc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x187afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x187b00: 0x908504f0  lbu         $a1, 0x4F0($a0)
    ctx->pc = 0x187b00u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187b04: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x187b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x187b08: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x187b0c: 0xa08504f0  sb          $a1, 0x4F0($a0)
    ctx->pc = 0x187b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1264), (uint8_t)GPR_U32(ctx, 5));
    // 0x187b10: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x187b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187b14: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x187b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x187b18: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x187b1c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x187b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x187b20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x187b24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x187b28: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x187b2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x187b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x187b30: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x187b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187b34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x187b38: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x187b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x187b3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x187b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_187b40:
    // 0x187b40: 0x3e00008  jr          $ra
    ctx->pc = 0x187B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187B48u;
    // 0x187b48: 0x0  nop
    ctx->pc = 0x187b48u;
    // NOP
    // 0x187b4c: 0x0  nop
    ctx->pc = 0x187b4cu;
    // NOP
    if (ctx->pc == 0x187b4cu) { ctx->pc = 0x187b50u; }
}
