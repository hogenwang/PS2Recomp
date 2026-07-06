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

// Function: sub_00187B50
// Address: 0x187b50 - 0x187c20
void sub_00187B50_0x187b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187B50_0x187b50");
#endif

    ctx->pc = 0x187b50u;

    // 0x187b50: 0x8c8800dc  lw          $t0, 0xDC($a0)
    ctx->pc = 0x187b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x187b54: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x187b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x187b58: 0x908304f0  lbu         $v1, 0x4F0($a0)
    ctx->pc = 0x187b58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187b5c: 0x248604a6  addiu       $a2, $a0, 0x4A6
    ctx->pc = 0x187b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1190));
    // 0x187b60: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x187b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x187b64: 0x3107000c  andi        $a3, $t0, 0xC
    ctx->pc = 0x187b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12);
    // 0x187b68: 0x31040030  andi        $a0, $t0, 0x30
    ctx->pc = 0x187b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)48);
    // 0x187b6c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x187b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x187b70: 0x74082  srl         $t0, $a3, 2
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x187b74: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x187b78: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x187b78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x187b7c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x187b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x187b80: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x187b84: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x187b88: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x187b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x187b8c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x187b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x187b90: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x187b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x187b94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x187b98: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x187B98u;
    {
        const bool branch_taken_0x187b98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x187B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B98u;
        // 0x187b9c: 0x2487014c  addiu       $a3, $a0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b98) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187BA0u;
    // 0x187ba0: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x187ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x187ba4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x187ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x187ba8: 0x8c65d918  lw          $a1, -0x26E8($v1)
    ctx->pc = 0x187ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x187bac: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x187bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x187bb0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x187bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x187bb4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x187BB4u;
    {
        const bool branch_taken_0x187bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187bb4) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187BBCu;
    // 0x187bbc: 0x84e3000c  lh          $v1, 0xC($a3)
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x187bc0: 0x28610070  slti        $at, $v1, 0x70
    ctx->pc = 0x187bc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x187bc4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x187BC4u;
    {
        const bool branch_taken_0x187bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x187BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC4u;
        // 0x187bc8: 0x84c4001c  lh          $a0, 0x1C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187bc4) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187BCCu;
    // 0x187bcc: 0x84c30018  lh          $v1, 0x18($a2)
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x187bd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x187bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x187bd4: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x187bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x187bd8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187bdc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187bdcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187be0: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x187BE0u;
    {
        const bool branch_taken_0x187be0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x187be0) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187BE8u;
    // 0x187be8: 0x84c3001a  lh          $v1, 0x1A($a2)
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x187bec: 0xa4c30018  sh          $v1, 0x18($a2)
    ctx->pc = 0x187becu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x187bf0: 0x84e3000c  lh          $v1, 0xC($a3)
    ctx->pc = 0x187bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x187bf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x187bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x187bf8: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x187bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x187bfc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x187bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x187c00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187c00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187c04: 0x28610071  slti        $at, $v1, 0x71
    ctx->pc = 0x187c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x187c08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x187C08u;
    {
        const bool branch_taken_0x187c08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187c08) {
            ctx->pc = 0x187C18u;
            goto label_187c18;
        }
    }
    ctx->pc = 0x187C10u;
    // 0x187c10: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x187c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187c14: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x187c14u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
label_187c18:
    // 0x187c18: 0x3e00008  jr          $ra
    ctx->pc = 0x187C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C20u;
}
