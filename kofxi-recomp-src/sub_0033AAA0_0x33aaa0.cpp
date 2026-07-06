#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033AAA0
// Address: 0x33aaa0 - 0x33ab40
void sub_0033AAA0_0x33aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AAA0_0x33aaa0");
#endif

    ctx->pc = 0x33aaa0u;

    // 0x33aaa0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33aaa4: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x33aaa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x33aaa8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33aaac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33AAACu;
    {
        const bool branch_taken_0x33aaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33aaac) {
            ctx->pc = 0x33AABCu;
            goto label_33aabc;
        }
    }
    ctx->pc = 0x33AAB4u;
    // 0x33aab4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33AAB4u;
    {
        const bool branch_taken_0x33aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAB4u;
            // 0x33aab8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aab4) {
            ctx->pc = 0x33AB38u;
            goto label_33ab38;
        }
    }
    ctx->pc = 0x33AABCu;
label_33aabc:
    // 0x33aabc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33aac0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33aac4: 0x9042b240  lbu         $v0, -0x4DC0($v0)
    ctx->pc = 0x33aac4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
    // 0x33aac8: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33AAC8u;
    {
        const bool branch_taken_0x33aac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33aac8) {
            ctx->pc = 0x33AACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33AAC8u;
            // 0x33aacc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33AB38u;
            goto label_33ab38;
        }
    }
    ctx->pc = 0x33AAD0u;
    // 0x33aad0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33aad4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x33aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x33aad8: 0x9042b241  lbu         $v0, -0x4DBF($v0)
    ctx->pc = 0x33aad8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947393)));
    // 0x33aadc: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x33AADCu;
    {
        const bool branch_taken_0x33aadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33aadc) {
            ctx->pc = 0x33AB34u;
            goto label_33ab34;
        }
    }
    ctx->pc = 0x33AAE4u;
    // 0x33aae4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33aae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33aaec: 0x9042b243  lbu         $v0, -0x4DBD($v0)
    ctx->pc = 0x33aaecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947395)));
    // 0x33aaf0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x33AAF0u;
    {
        const bool branch_taken_0x33aaf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33aaf0) {
            ctx->pc = 0x33AB34u;
            goto label_33ab34;
        }
    }
    ctx->pc = 0x33AAF8u;
    // 0x33aaf8: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x33aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x33aafc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x33aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x33ab00: 0x2442db57  addiu       $v0, $v0, -0x24A9
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957911));
    // 0x33ab04: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x33ab04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x33ab08: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x33ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x33ab0c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x33ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33ab10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ab14: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33ab18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33ab1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33ab20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33ab24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33ab24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ab28: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33AB28u;
    {
        const bool branch_taken_0x33ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ab28) {
            ctx->pc = 0x33AB34u;
            goto label_33ab34;
        }
    }
    ctx->pc = 0x33AB30u;
    // 0x33ab30: 0x64050006  daddiu      $a1, $zero, 0x6
    ctx->pc = 0x33ab30u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
label_33ab34:
    // 0x33ab34: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33ab34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33ab38:
    // 0x33ab38: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33AB40u;
    ctx->pc = 0x33ab40u;
}
