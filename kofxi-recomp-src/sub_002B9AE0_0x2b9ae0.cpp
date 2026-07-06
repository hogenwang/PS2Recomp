#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B9AE0
// Address: 0x2b9ae0 - 0x2b9b48
void sub_002B9AE0_0x2b9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9AE0_0x2b9ae0");
#endif

    ctx->pc = 0x2b9ae0u;

    // 0x2b9ae0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b9ae4: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B9AE4u;
    {
        const bool branch_taken_0x2b9ae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9ae4) {
            ctx->pc = 0x2B9B40u;
            goto label_2b9b40;
        }
    }
    ctx->pc = 0x2B9AECu;
    // 0x2b9aec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b9af0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9AF0u;
    {
        const bool branch_taken_0x2b9af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9af0) {
            ctx->pc = 0x2B9AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9AF0u;
            // 0x2b9af4: 0x8ca30010  lw          $v1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9B04u;
            goto label_2b9b04;
        }
    }
    ctx->pc = 0x2B9AF8u;
    // 0x2b9af8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2b9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b9afc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b9afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b9b00: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2b9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b9b04:
    // 0x2b9b04: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9B04u;
    {
        const bool branch_taken_0x2b9b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b04) {
            ctx->pc = 0x2B9B08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B04u;
            // 0x2b9b08: 0x8ca3000c  lw          $v1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9B18u;
            goto label_2b9b18;
        }
    }
    ctx->pc = 0x2B9B0Cu;
    // 0x2b9b0c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2b9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b9b10: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2b9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2b9b14: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2b9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2b9b18:
    // 0x2b9b18: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9B18u;
    {
        const bool branch_taken_0x2b9b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b18) {
            ctx->pc = 0x2B9B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9B18u;
            // 0x2b9b1c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B9B2Cu;
            goto label_2b9b2c;
        }
    }
    ctx->pc = 0x2B9B20u;
    // 0x2b9b20: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2b9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b9b24: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2b9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2b9b28: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2b9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b9b2c:
    // 0x2b9b2c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x2b9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x2b9b30: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2b9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b9b34: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2b9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2b9b38: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x2b9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x2b9b3c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x2b9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_2b9b40:
    // 0x2b9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B9B48u;
    ctx->pc = 0x2b9b48u;
}
