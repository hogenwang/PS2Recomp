#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286938
// Address: 0x286938 - 0x2869c8
void sub_00286938_0x286938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286938_0x286938");
#endif

    switch (ctx->pc) {
        case 0x286978u: goto label_286978;
        case 0x286990u: goto label_286990;
        default: break;
    }

    ctx->pc = 0x286938u;

    // 0x286938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28693c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286948: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x286948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28694c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28694cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286950: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x286954: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x286954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286958: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x286958u;
    {
        const bool branch_taken_0x286958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28695Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286958u;
            // 0x28695c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286958) {
            ctx->pc = 0x2869B4u;
            goto label_2869b4;
        }
    }
    ctx->pc = 0x286960u;
    // 0x286960: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x286964: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x286964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286968: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x286968u;
    {
        const bool branch_taken_0x286968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286968) {
            ctx->pc = 0x28696Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x286968u;
            // 0x28696c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286980u;
            goto label_286980;
        }
    }
    ctx->pc = 0x286970u;
    // 0x286970: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x286970u;
    SET_GPR_U32(ctx, 31, 0x286978u);
    ctx->pc = 0x286B68u;
    if (runtime->hasFunction(0x286B68u)) {
        auto targetFn = runtime->lookupFunction(0x286B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286978u; }
        if (ctx->pc != 0x286978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286B68_0x286b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286978u; }
        if (ctx->pc != 0x286978u) { return; }
    }
    ctx->pc = 0x286978u;
label_286978:
    // 0x286978: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28697c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28697cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_286980:
    // 0x286980: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x286980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x286984: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286984u;
    {
        const bool branch_taken_0x286984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286984u;
            // 0x286988: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286984) {
            ctx->pc = 0x2869B4u;
            goto label_2869b4;
        }
    }
    ctx->pc = 0x28698Cu;
    // 0x28698c: 0x0  nop
    ctx->pc = 0x28698cu;
    // NOP
label_286990:
    // 0x286990: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x286990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x286994: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x286998: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x286998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28699c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28699cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2869a0: 0xb0202a  slt         $a0, $a1, $s0
    ctx->pc = 0x2869a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2869a4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2869a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2869a8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2869A8u;
    {
        const bool branch_taken_0x2869a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2869a8) {
            ctx->pc = 0x286990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_286990;
        }
    }
    ctx->pc = 0x2869B0u;
    // 0x2869b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2869b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2869b4:
    // 0x2869b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2869b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2869b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2869b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2869bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2869BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2869C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2869BCu;
            // 0x2869c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2869C4u;
    // 0x2869c4: 0x0  nop
    ctx->pc = 0x2869c4u;
    // NOP
    ctx->pc = 0x2869c8u;
}
