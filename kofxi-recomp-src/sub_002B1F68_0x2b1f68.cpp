#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B1F68
// Address: 0x2b1f68 - 0x2b1ff0
void sub_002B1F68_0x2b1f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1F68_0x2b1f68");
#endif

    switch (ctx->pc) {
        case 0x2b1fa8u: goto label_2b1fa8;
        case 0x2b1fc8u: goto label_2b1fc8;
        case 0x2b1fdcu: goto label_2b1fdc;
        default: break;
    }

    ctx->pc = 0x2b1f68u;

    // 0x2b1f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b1f6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1f70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b1f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1f74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b1f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1f78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b1f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b1f7c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1F7Cu;
    {
        const bool branch_taken_0x2b1f7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F7Cu;
            // 0x2b1f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f7c) {
            ctx->pc = 0x2B1F94u;
            goto label_2b1f94;
        }
    }
    ctx->pc = 0x2B1F84u;
    // 0x2b1f84: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1f88: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x2b1f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2b1f8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B1F8Cu;
    {
        const bool branch_taken_0x2b1f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F8Cu;
            // 0x2b1f90: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f8c) {
            ctx->pc = 0x2B1FBCu;
            goto label_2b1fbc;
        }
    }
    ctx->pc = 0x2B1F94u;
label_2b1f94:
    // 0x2b1f94: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x2b1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2b1f98: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B1F98u;
    {
        const bool branch_taken_0x2b1f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1F98u;
            // 0x2b1f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1f98) {
            ctx->pc = 0x2B1FD4u;
            goto label_2b1fd4;
        }
    }
    ctx->pc = 0x2B1FA0u;
    // 0x2b1fa0: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2B1FA0u;
    SET_GPR_U32(ctx, 31, 0x2B1FA8u);
    ctx->pc = 0x2AF918u;
    if (runtime->hasFunction(0x2AF918u)) {
        auto targetFn = runtime->lookupFunction(0x2AF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FA8u; }
        if (ctx->pc != 0x2B1FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF918_0x2af918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FA8u; }
        if (ctx->pc != 0x2B1FA8u) { return; }
    }
    ctx->pc = 0x2B1FA8u;
label_2b1fa8:
    // 0x2b1fa8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1FA8u;
    {
        const bool branch_taken_0x2b1fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1fa8) {
            ctx->pc = 0x2B1FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FA8u;
            // 0x2b1fac: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B1FD0u;
            goto label_2b1fd0;
        }
    }
    ctx->pc = 0x2B1FB0u;
    // 0x2b1fb0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b1fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b1fb4: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x2b1fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x2b1fb8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b1fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b1fbc:
    // 0x2b1fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b1fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1fc0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B1FC0u;
    SET_GPR_U32(ctx, 31, 0x2B1FC8u);
    ctx->pc = 0x2B1FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FC0u;
            // 0x2b1fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FC8u; }
        if (ctx->pc != 0x2B1FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FC8u; }
        if (ctx->pc != 0x2B1FC8u) { return; }
    }
    ctx->pc = 0x2B1FC8u;
label_2b1fc8:
    // 0x2b1fc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1FC8u;
    {
        const bool branch_taken_0x2b1fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FC8u;
            // 0x2b1fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1fc8) {
            ctx->pc = 0x2B1FDCu;
            goto label_2b1fdc;
        }
    }
    ctx->pc = 0x2B1FD0u;
label_2b1fd0:
    // 0x2b1fd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1fd4:
    // 0x2b1fd4: 0xc0ac65a  jal         func_2B1968
    ctx->pc = 0x2B1FD4u;
    SET_GPR_U32(ctx, 31, 0x2B1FDCu);
    ctx->pc = 0x2B1FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FD4u;
            // 0x2b1fd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1968u;
    if (runtime->hasFunction(0x2B1968u)) {
        auto targetFn = runtime->lookupFunction(0x2B1968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FDCu; }
        if (ctx->pc != 0x2B1FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1968_0x2b1968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B1FDCu; }
        if (ctx->pc != 0x2B1FDCu) { return; }
    }
    ctx->pc = 0x2B1FDCu;
label_2b1fdc:
    // 0x2b1fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b1fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1fe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1fe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B1FE8u;
            // 0x2b1fec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B1FF0u;
    ctx->pc = 0x2b1ff0u;
}
