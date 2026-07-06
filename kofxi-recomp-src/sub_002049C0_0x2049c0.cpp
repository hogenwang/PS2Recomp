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

// Function: sub_002049C0
// Address: 0x2049c0 - 0x204b00
void sub_002049C0_0x2049c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002049C0_0x2049c0");
#endif

    switch (ctx->pc) {
        case 0x2049f0u: goto label_2049f0;
        case 0x204ac8u: goto label_204ac8;
        default: break;
    }

    ctx->pc = 0x2049c0u;

    // 0x2049c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2049c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2049c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2049c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2049c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2049cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2049ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2049d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2049d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2049d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2049d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2049d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2049dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2049e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2049e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049e4: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2049e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2049e8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2049E8u;
    {
        const bool branch_taken_0x2049e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049E8u;
        // 0x2049ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e8) {
            ctx->pc = 0x204AD8u;
            goto label_204ad8;
        }
    }
    ctx->pc = 0x2049F0u;
label_2049f0:
    // 0x2049f0: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x2049f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2049f4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2049f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2049f8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2049fc: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2049FCu;
    {
        const bool branch_taken_0x2049fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2049fc) {
            ctx->pc = 0x204AC8u;
            goto label_204ac8;
        }
    }
    ctx->pc = 0x204A04u;
    // 0x204a04: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x204a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x204a08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x204A08u;
    {
        const bool branch_taken_0x204a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204a08) {
            ctx->pc = 0x204A30u;
            goto label_204a30;
        }
    }
    ctx->pc = 0x204A10u;
    // 0x204a10: 0x2881003a  slti        $at, $a0, 0x3A
    ctx->pc = 0x204a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x204a14: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x204A14u;
    {
        const bool branch_taken_0x204a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x204a14) {
            ctx->pc = 0x204A30u;
            goto label_204a30;
        }
    }
    ctx->pc = 0x204A1Cu;
    // 0x204a1c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x204a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x204a20: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x204a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x204a24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x204A24u;
    {
        const bool branch_taken_0x204a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A24u;
        // 0x204a28: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a24) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A2Cu;
    // 0x204a2c: 0x0  nop
    ctx->pc = 0x204a2cu;
    // NOP
label_204a30:
    // 0x204a30: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x204a34: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x204A34u;
    {
        const bool branch_taken_0x204a34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x204a34) {
            ctx->pc = 0x204A80u;
            goto label_204a80;
        }
    }
    ctx->pc = 0x204A3Cu;
    // 0x204a3c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x204a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x204a40: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x204A40u;
    {
        const bool branch_taken_0x204a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x204a40) {
            ctx->pc = 0x204A78u;
            goto label_204a78;
        }
    }
    ctx->pc = 0x204A48u;
    // 0x204a48: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x204a4c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204A4Cu;
    {
        const bool branch_taken_0x204a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x204a4c) {
            ctx->pc = 0x204A70u;
            goto label_204a70;
        }
    }
    ctx->pc = 0x204A54u;
    // 0x204a54: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x204a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x204a58: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204A58u;
    {
        const bool branch_taken_0x204a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x204a58) {
            ctx->pc = 0x204A68u;
            goto label_204a68;
        }
    }
    ctx->pc = 0x204A60u;
    // 0x204a60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204A60u;
    {
        const bool branch_taken_0x204a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204a60) {
            ctx->pc = 0x204A88u;
            goto label_204a88;
        }
    }
    ctx->pc = 0x204A68u;
label_204a68:
    // 0x204a68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x204A68u;
    {
        const bool branch_taken_0x204a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A68u;
        // 0x204a6c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a68) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A70u;
label_204a70:
    // 0x204a70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204A70u;
    {
        const bool branch_taken_0x204a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A70u;
        // 0x204a74: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a70) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A78u;
label_204a78:
    // 0x204a78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x204A78u;
    {
        const bool branch_taken_0x204a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A78u;
        // 0x204a7c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a78) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A80u;
label_204a80:
    // 0x204a80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x204A80u;
    {
        const bool branch_taken_0x204a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204A80u;
        // 0x204a84: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a80) {
            ctx->pc = 0x204A98u;
            goto label_204a98;
        }
    }
    ctx->pc = 0x204A88u;
label_204a88:
    // 0x204a88: 0x2482ffce  addiu       $v0, $a0, -0x32
    ctx->pc = 0x204a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
    // 0x204a8c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x204a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x204a90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x204a90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x204a94: 0x0  nop
    ctx->pc = 0x204a94u;
    // NOP
label_204a98:
    // 0x204a98: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x204a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x204a9c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x204a9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x204aa0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x204aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x204aa4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x204aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x204aa8: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x204aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
    // 0x204aac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x204aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x204ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x204ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ab4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x204ab8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204abc: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x204abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204ac0: 0xc0812c0  jal         func_204B00
    ctx->pc = 0x204AC0u;
    SET_GPR_U32(ctx, 31, 0x204AC8u);
    ctx->pc = 0x204AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204AC0u;
    // 0x204ac4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204B00u, 0x204AC0u, 0x204AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204AC8u;
label_204ac8:
    // 0x204ac8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x204ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x204acc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x204accu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204ad0: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x204AD0u;
    {
        const bool branch_taken_0x204ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AD0u;
        // 0x204ad4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ad0) {
            ctx->pc = 0x2049F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2049f0;
        }
    }
    ctx->pc = 0x204AD8u;
label_204ad8:
    // 0x204ad8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x204ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204adc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x204adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204ae0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x204ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x204ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x204ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204aec: 0x3e00008  jr          $ra
    ctx->pc = 0x204AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204AECu;
        // 0x204af0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204AF4u;
    // 0x204af4: 0x0  nop
    ctx->pc = 0x204af4u;
    // NOP
    // 0x204af8: 0x0  nop
    ctx->pc = 0x204af8u;
    // NOP
    // 0x204afc: 0x0  nop
    ctx->pc = 0x204afcu;
    // NOP
    if (ctx->pc == 0x204afcu) { ctx->pc = 0x204b00u; }
}
