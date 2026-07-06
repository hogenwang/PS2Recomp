#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002599E0
// Address: 0x2599e0 - 0x259a88
void sub_002599E0_0x2599e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002599E0_0x2599e0");
#endif

    switch (ctx->pc) {
        case 0x259a24u: goto label_259a24;
        case 0x259a70u: goto label_259a70;
        default: break;
    }

    ctx->pc = 0x2599e0u;

    // 0x2599e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2599e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2599e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2599e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2599e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2599e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2599ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2599ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2599f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2599f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2599f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2599f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2599f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2599fc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2599fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x259a00: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x259A00u;
    {
        const bool branch_taken_0x259a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A00u;
            // 0x259a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a00) {
            ctx->pc = 0x259A70u;
            goto label_259a70;
        }
    }
    ctx->pc = 0x259A08u;
    // 0x259a08: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x259a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x259a0c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x259a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x259a10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x259A10u;
    {
        const bool branch_taken_0x259a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x259A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A10u;
            // 0x259a14: 0x8c72001c  lw          $s2, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a10) {
            ctx->pc = 0x259A3Cu;
            goto label_259a3c;
        }
    }
    ctx->pc = 0x259A18u;
    // 0x259a18: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x259a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x259a1c: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x259A1Cu;
    SET_GPR_U32(ctx, 31, 0x259A24u);
    ctx->pc = 0x259A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259A1Cu;
            // 0x259a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (runtime->hasFunction(0x257EE0u)) {
        auto targetFn = runtime->lookupFunction(0x257EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A24u; }
        if (ctx->pc != 0x259A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257EE0_0x257ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A24u; }
        if (ctx->pc != 0x259A24u) { return; }
    }
    ctx->pc = 0x259A24u;
label_259a24:
    // 0x259a24: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x259a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x259a28: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x259a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x259a2c: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x259a2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x259a30: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x259a30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x259a34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x259A34u;
    {
        const bool branch_taken_0x259a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A34u;
            // 0x259a38: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a34) {
            ctx->pc = 0x259A50u;
            goto label_259a50;
        }
    }
    ctx->pc = 0x259A3Cu;
label_259a3c:
    // 0x259a3c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x259a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x259a40: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x259a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x259a44: 0xdc620020  ld          $v0, 0x20($v1)
    ctx->pc = 0x259a44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x259a48: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x259a48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x259a4c: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x259a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
label_259a50:
    // 0x259a50: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x259a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x259a54: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259A54u;
    {
        const bool branch_taken_0x259a54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x259a54) {
            ctx->pc = 0x259A58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x259A54u;
            // 0x259a58: 0xa6510038  sh          $s1, 0x38($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x259A68u;
            goto label_259a68;
        }
    }
    ctx->pc = 0x259A5Cu;
    // 0x259a5c: 0x860200b2  lh          $v0, 0xB2($s0)
    ctx->pc = 0x259a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
    // 0x259a60: 0x42880b  movn        $s1, $v0, $v0
    ctx->pc = 0x259a60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x259a64: 0xa6510038  sh          $s1, 0x38($s2)
    ctx->pc = 0x259a64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 17));
label_259a68:
    // 0x259a68: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x259A68u;
    SET_GPR_U32(ctx, 31, 0x259A70u);
    ctx->pc = 0x259A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259A68u;
            // 0x259a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (runtime->hasFunction(0x259A88u)) {
        auto targetFn = runtime->lookupFunction(0x259A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A70u; }
        if (ctx->pc != 0x259A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259A88_0x259a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A70u; }
        if (ctx->pc != 0x259A70u) { return; }
    }
    ctx->pc = 0x259A70u;
label_259a70:
    // 0x259a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259a74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x259a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259a78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x259a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259a80: 0x3e00008  jr          $ra
    ctx->pc = 0x259A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A80u;
            // 0x259a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259A88u;
    ctx->pc = 0x259a88u;
}
