#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9C18
// Address: 0x1d9c18 - 0x1d9cd0
void sub_001D9C18_0x1d9c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9C18_0x1d9c18");
#endif

    switch (ctx->pc) {
        case 0x1d9c3cu: goto label_1d9c3c;
        case 0x1d9c68u: goto label_1d9c68;
        case 0x1d9c78u: goto label_1d9c78;
        case 0x1d9c80u: goto label_1d9c80;
        case 0x1d9ca4u: goto label_1d9ca4;
        default: break;
    }

    ctx->pc = 0x1d9c18u;

    // 0x1d9c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9c20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c24: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9c2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9c30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9c34: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1D9C34u;
    SET_GPR_U32(ctx, 31, 0x1D9C3Cu);
    ctx->pc = 0x1D9C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C34u;
            // 0x1d9c38: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC3B8u;
    if (runtime->hasFunction(0x1DC3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1DC3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C3Cu; }
        if (ctx->pc != 0x1D9C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC3B8_0x1dc3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C3Cu; }
        if (ctx->pc != 0x1D9C3Cu) { return; }
    }
    ctx->pc = 0x1D9C3Cu;
label_1d9c3c:
    // 0x1d9c3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9C3Cu;
    {
        const bool branch_taken_0x1d9c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C3Cu;
            // 0x1d9c40: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c3c) {
            ctx->pc = 0x1D9C68u;
            goto label_1d9c68;
        }
    }
    ctx->pc = 0x1D9C44u;
    // 0x1d9c44: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1d9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9c4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9c54: 0x34a5020a  ori         $a1, $a1, 0x20A
    ctx->pc = 0x1d9c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
    // 0x1d9c58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9c60: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9C60u;
    ctx->pc = 0x1D9C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C60u;
            // 0x1d9c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D9C68u;
label_1d9c68:
    // 0x1d9c68: 0x3c11ff03  lui         $s1, 0xFF03
    ctx->pc = 0x1d9c68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65283 << 16));
    // 0x1d9c6c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d9c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9c70: 0x36310305  ori         $s1, $s1, 0x305
    ctx->pc = 0x1d9c70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)773);
    // 0x1d9c74: 0x0  nop
    ctx->pc = 0x1d9c74u;
    // NOP
label_1d9c78:
    // 0x1d9c78: 0xc076e1e  jal         func_1DB878
    ctx->pc = 0x1D9C78u;
    SET_GPR_U32(ctx, 31, 0x1D9C80u);
    ctx->pc = 0x1D9C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C78u;
            // 0x1d9c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (runtime->hasFunction(0x1DB878u)) {
        auto targetFn = runtime->lookupFunction(0x1DB878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C80u; }
        if (ctx->pc != 0x1D9C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB878_0x1db878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C80u; }
        if (ctx->pc != 0x1D9C80u) { return; }
    }
    ctx->pc = 0x1D9C80u;
label_1d9c80:
    // 0x1d9c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9c84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9c88: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d9c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9c8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9C8Cu;
    {
        const bool branch_taken_0x1d9c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C8Cu;
            // 0x1d9c90: 0x304300cc  andi        $v1, $v0, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9c8c) {
            ctx->pc = 0x1D9CACu;
            goto label_1d9cac;
        }
    }
    ctx->pc = 0x1D9C94u;
    // 0x1d9c94: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9C94u;
    {
        const bool branch_taken_0x1d9c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9c94) {
            ctx->pc = 0x1D9C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C94u;
            // 0x1d9c98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9CACu;
            goto label_1d9cac;
        }
    }
    ctx->pc = 0x1D9C9Cu;
    // 0x1d9c9c: 0xc076ea8  jal         func_1DBAA0
    ctx->pc = 0x1D9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D9CA4u);
    ctx->pc = 0x1DBAA0u;
    if (runtime->hasFunction(0x1DBAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CA4u; }
        if (ctx->pc != 0x1D9CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBAA0_0x1dbaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CA4u; }
        if (ctx->pc != 0x1D9CA4u) { return; }
    }
    ctx->pc = 0x1D9CA4u;
label_1d9ca4:
    // 0x1d9ca4: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D9CA4u;
    {
        const bool branch_taken_0x1d9ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1d9ca4) {
            ctx->pc = 0x1D9C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9c78;
        }
    }
    ctx->pc = 0x1D9CACu;
label_1d9cac:
    // 0x1d9cac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9cc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9cc8: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1D9CC8u;
    ctx->pc = 0x1D9CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CC8u;
            // 0x1d9ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    if (runtime->hasFunction(0x1D9A20u)) {
        auto targetFn = runtime->lookupFunction(0x1D9A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D9CD0u;
    ctx->pc = 0x1d9cd0u;
}
