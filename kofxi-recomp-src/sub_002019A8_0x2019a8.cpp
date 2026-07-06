#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002019A8
// Address: 0x2019a8 - 0x201a38
void sub_002019A8_0x2019a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002019A8_0x2019a8");
#endif

    switch (ctx->pc) {
        case 0x2019b8u: goto label_2019b8;
        case 0x2019d0u: goto label_2019d0;
        case 0x2019d8u: goto label_2019d8;
        case 0x201a04u: goto label_201a04;
        case 0x201a28u: goto label_201a28;
        default: break;
    }

    ctx->pc = 0x2019a8u;

    // 0x2019a8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2019a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2019ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2019ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019ACu;
            // 0x2019b0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019B4u;
    // 0x2019b4: 0x0  nop
    ctx->pc = 0x2019b4u;
    // NOP
label_2019b8:
    // 0x2019b8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2019b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2019bc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2019bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2019c0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2019c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2019C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019C4u;
            // 0x2019c8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019CCu;
    // 0x2019cc: 0x0  nop
    ctx->pc = 0x2019ccu;
    // NOP
label_2019d0:
    // 0x2019d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2019D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2019D0u;
            // 0x2019d4: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2019D8u;
label_2019d8:
    // 0x2019d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2019d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2019dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2019dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2019e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2019e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2019e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2019e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2019e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2019ec: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2019ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2019f0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2019f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2019f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2019f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2019f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2019f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2019fc: 0xc08068e  jal         func_201A38
    ctx->pc = 0x2019FCu;
    SET_GPR_U32(ctx, 31, 0x201A04u);
    ctx->pc = 0x201A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2019FCu;
            // 0x201a00: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201A38u;
    if (runtime->hasFunction(0x201A38u)) {
        auto targetFn = runtime->lookupFunction(0x201A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A04u; }
        if (ctx->pc != 0x201A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201A38_0x201a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201A04u; }
        if (ctx->pc != 0x201A04u) { return; }
    }
    ctx->pc = 0x201A04u;
label_201a04:
    // 0x201a04: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x201a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x201a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201a0c: 0xae120038  sw          $s2, 0x38($s0)
    ctx->pc = 0x201a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 18));
    // 0x201a10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x201a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x201a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x201a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x201a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x201A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A1Cu;
            // 0x201a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201A24u;
    // 0x201a24: 0x0  nop
    ctx->pc = 0x201a24u;
    // NOP
label_201a28:
    // 0x201a28: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x201a28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201a2c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x201a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x201a30: 0x3e00008  jr          $ra
    ctx->pc = 0x201A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201A30u;
            // 0x201a34: 0x8ca20038  lw          $v0, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201A38u;
    ctx->pc = 0x201a38u;
}
