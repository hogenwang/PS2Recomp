#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D5B20
// Address: 0x2d5b20 - 0x2d5be8
void sub_002D5B20_0x2d5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5B20_0x2d5b20");
#endif

    switch (ctx->pc) {
        case 0x2d5b50u: goto label_2d5b50;
        case 0x2d5b90u: goto label_2d5b90;
        default: break;
    }

    ctx->pc = 0x2d5b20u;

    // 0x2d5b20: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2d5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5b24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5b28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2d5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d5b2c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d5b30: 0x8c4c0010  lw          $t4, 0x10($v0)
    ctx->pc = 0x2d5b30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d5b34: 0x24689630  addiu       $t0, $v1, -0x69D0
    ctx->pc = 0x2d5b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940208));
    // 0x2d5b38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d5b38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b3c: 0x1852821  addu        $a1, $t4, $a1
    ctx->pc = 0x2d5b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2d5b40: 0xaca4fffc  sw          $a0, -0x4($a1)
    ctx->pc = 0x2d5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), GPR_U32(ctx, 4));
    // 0x2d5b44: 0xaca4fff8  sw          $a0, -0x8($a1)
    ctx->pc = 0x2d5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 4));
    // 0x2d5b48: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2d5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2d5b4c: 0x0  nop
    ctx->pc = 0x2d5b4cu;
    // NOP
label_2d5b50:
    // 0x2d5b50: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2d5b54: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d5b58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5b5c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D5B5Cu;
    {
        const bool branch_taken_0x2d5b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B5Cu;
            // 0x2d5b60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b5c) {
            ctx->pc = 0x2D5BE0u;
            goto label_2d5be0;
        }
    }
    ctx->pc = 0x2D5B64u;
    // 0x2d5b64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5b68: 0x0  nop
    ctx->pc = 0x2d5b68u;
    // NOP
    // 0x2d5b6c: 0x5448fff8  bnel        $v0, $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2D5B6Cu;
    {
        const bool branch_taken_0x2d5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2d5b6c) {
            ctx->pc = 0x2D5B70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B6Cu;
            // 0x2d5b70: 0xa1880  sll         $v1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5b50;
        }
    }
    ctx->pc = 0x2D5B74u;
    // 0x2d5b74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d5b78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d5b78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d5b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d5b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D5B84u;
    {
        const bool branch_taken_0x2d5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B84u;
            // 0x2d5b88: 0x8c4b0010  lw          $t3, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b84) {
            ctx->pc = 0x2D5BC8u;
            goto label_2d5bc8;
        }
    }
    ctx->pc = 0x2D5B8Cu;
    // 0x2d5b8c: 0x0  nop
    ctx->pc = 0x2d5b8cu;
    // NOP
label_2d5b90:
    // 0x2d5b90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d5b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5b94: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5B94u;
    {
        const bool branch_taken_0x2d5b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D5B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5B94u;
            // 0x2d5b98: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b94) {
            ctx->pc = 0x2D5BA8u;
            goto label_2d5ba8;
        }
    }
    ctx->pc = 0x2D5B9Cu;
    // 0x2d5b9c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2d5ba0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2d5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2d5ba4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d5ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2d5ba8:
    // 0x2d5ba8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d5ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d5bac: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x2d5bacu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2d5bb0: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x2d5bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2d5bb4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x2d5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2d5bb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5bbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5bc0: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2d5bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2d5bc4: 0xa2480a  movz        $t1, $a1, $v0
    ctx->pc = 0x2d5bc4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_2d5bc8:
    // 0x2d5bc8: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x2d5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2d5bcc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d5bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5bd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d5bd4: 0x1464ffee  bne         $v1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D5BD4u;
    {
        const bool branch_taken_0x2d5bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2D5BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5BD4u;
            // 0x2d5bd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bd4) {
            ctx->pc = 0x2D5B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5b90;
        }
    }
    ctx->pc = 0x2D5BDCu;
    // 0x2d5bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d5bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5be0:
    // 0x2d5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D5BE8u;
    ctx->pc = 0x2d5be8u;
}
