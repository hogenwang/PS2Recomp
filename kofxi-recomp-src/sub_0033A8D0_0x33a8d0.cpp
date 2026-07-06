#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033A8D0
// Address: 0x33a8d0 - 0x33a950
void sub_0033A8D0_0x33a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A8D0_0x33a8d0");
#endif

    ctx->pc = 0x33a8d0u;

    // 0x33a8d0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33a8d4: 0x9064b246  lbu         $a0, -0x4DBA($v1)
    ctx->pc = 0x33a8d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947398)));
    // 0x33a8d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a8dc: 0x5083000f  beql        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x33A8DCu;
    {
        const bool branch_taken_0x33a8dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a8dc) {
            ctx->pc = 0x33A8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A8DCu;
            // 0x33a8e0: 0x24040230  addiu       $a0, $zero, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A91Cu;
            goto label_33a91c;
        }
    }
    ctx->pc = 0x33A8E4u;
    // 0x33a8e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33a8e8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33A8E8u;
    {
        const bool branch_taken_0x33a8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a8e8) {
            ctx->pc = 0x33A918u;
            goto label_33a918;
        }
    }
    ctx->pc = 0x33A8F0u;
    // 0x33a8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a8f4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A8F4u;
    {
        const bool branch_taken_0x33a8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33a8f4) {
            ctx->pc = 0x33A8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33A8F4u;
            // 0x33a8f8: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33A904u;
            goto label_33a904;
        }
    }
    ctx->pc = 0x33A8FCu;
    // 0x33a8fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33A8FCu;
    {
        const bool branch_taken_0x33a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a8fc) {
            ctx->pc = 0x33A940u;
            goto label_33a940;
        }
    }
    ctx->pc = 0x33A904u;
label_33a904:
    // 0x33a904: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a908: 0xac64db8c  sw          $a0, -0x2474($v1)
    ctx->pc = 0x33a908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957964), GPR_U32(ctx, 4));
    // 0x33a90c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33A910u;
    {
        const bool branch_taken_0x33a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33A910u;
            // 0x33a914: 0xac64ddd4  sw          $a0, -0x222C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a910) {
            ctx->pc = 0x33A940u;
            goto label_33a940;
        }
    }
    ctx->pc = 0x33A918u;
label_33a918:
    // 0x33a918: 0x24040230  addiu       $a0, $zero, 0x230
    ctx->pc = 0x33a918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
label_33a91c:
    // 0x33a91c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a920: 0xac64db88  sw          $a0, -0x2478($v1)
    ctx->pc = 0x33a920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957960), GPR_U32(ctx, 4));
    // 0x33a924: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x33a924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x33a928: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a92c: 0xac64ddd0  sw          $a0, -0x2230($v1)
    ctx->pc = 0x33a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958544), GPR_U32(ctx, 4));
    // 0x33a930: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33a930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33a934: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33a934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33a938: 0xac85db8c  sw          $a1, -0x2474($a0)
    ctx->pc = 0x33a938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957964), GPR_U32(ctx, 5));
    // 0x33a93c: 0xac65ddd4  sw          $a1, -0x222C($v1)
    ctx->pc = 0x33a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958548), GPR_U32(ctx, 5));
label_33a940:
    // 0x33a940: 0x3e00008  jr          $ra
    ctx->pc = 0x33A940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33A948u;
    // 0x33a948: 0x0  nop
    ctx->pc = 0x33a948u;
    // NOP
    // 0x33a94c: 0x0  nop
    ctx->pc = 0x33a94cu;
    // NOP
    ctx->pc = 0x33a950u;
}
