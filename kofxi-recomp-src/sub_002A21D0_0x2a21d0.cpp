#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A21D0
// Address: 0x2a21d0 - 0x2a2290
void sub_002A21D0_0x2a21d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A21D0_0x2a21d0");
#endif

    switch (ctx->pc) {
        case 0x2a2200u: goto label_2a2200;
        case 0x2a2228u: goto label_2a2228;
        case 0x2a2248u: goto label_2a2248;
        case 0x2a2270u: goto label_2a2270;
        default: break;
    }

    ctx->pc = 0x2a21d0u;

    // 0x2a21d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a21d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a21d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a21d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a21d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a21dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a21e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a21e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a21e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a21e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a21ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a21f0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A21F0u;
    {
        const bool branch_taken_0x2a21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A21F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A21F0u;
            // 0x2a21f4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21f0) {
            ctx->pc = 0x2A2214u;
            goto label_2a2214;
        }
    }
    ctx->pc = 0x2A21F8u;
    // 0x2a21f8: 0xc0a88bc  jal         func_2A22F0
    ctx->pc = 0x2A21F8u;
    SET_GPR_U32(ctx, 31, 0x2A2200u);
    ctx->pc = 0x2A22F0u;
    if (runtime->hasFunction(0x2A22F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A22F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2200u; }
        if (ctx->pc != 0x2A2200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A22F0_0x2a22f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2200u; }
        if (ctx->pc != 0x2A2200u) { return; }
    }
    ctx->pc = 0x2A2200u;
label_2a2200:
    // 0x2a2200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2204: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2204u;
    {
        const bool branch_taken_0x2a2204 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2204) {
            ctx->pc = 0x2A2208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2204u;
            // 0x2a2208: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A221Cu;
            goto label_2a221c;
        }
    }
    ctx->pc = 0x2A220Cu;
    // 0x2a220c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A220Cu;
    {
        const bool branch_taken_0x2a220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A220Cu;
            // 0x2a2210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a220c) {
            ctx->pc = 0x2A2274u;
            goto label_2a2274;
        }
    }
    ctx->pc = 0x2A2214u;
label_2a2214:
    // 0x2a2214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2218: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2a2218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2a221c:
    // 0x2a221c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A221Cu;
    {
        const bool branch_taken_0x2a221c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2A2220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A221Cu;
            // 0x2a2220: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a221c) {
            ctx->pc = 0x2A2260u;
            goto label_2a2260;
        }
    }
    ctx->pc = 0x2A2224u;
    // 0x2a2224: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2a2224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2a2228:
    // 0x2a2228: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a2228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a222c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a2230: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a2230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2234: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2234u;
    {
        const bool branch_taken_0x2a2234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2234) {
            ctx->pc = 0x2A2238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2234u;
            // 0x2a2238: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2254u;
            goto label_2a2254;
        }
    }
    ctx->pc = 0x2A223Cu;
    // 0x2a223c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2240: 0xc0a892e  jal         func_2A24B8
    ctx->pc = 0x2A2240u;
    SET_GPR_U32(ctx, 31, 0x2A2248u);
    ctx->pc = 0x2A2244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2240u;
            // 0x2a2244: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A24B8u;
    if (runtime->hasFunction(0x2A24B8u)) {
        auto targetFn = runtime->lookupFunction(0x2A24B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2248u; }
        if (ctx->pc != 0x2A2248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A24B8_0x2a24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2248u; }
        if (ctx->pc != 0x2A2248u) { return; }
    }
    ctx->pc = 0x2A2248u;
label_2a2248:
    // 0x2a2248: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A2248u;
    {
        const bool branch_taken_0x2a2248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2248u;
            // 0x2a224c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2248) {
            ctx->pc = 0x2A2268u;
            goto label_2a2268;
        }
    }
    ctx->pc = 0x2A2250u;
    // 0x2a2250: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2a2250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2a2254:
    // 0x2a2254: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2a2254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a2258: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2A2258u;
    {
        const bool branch_taken_0x2a2258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2258) {
            ctx->pc = 0x2A225Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2258u;
            // 0x2a225c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A2228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2228;
        }
    }
    ctx->pc = 0x2A2260u;
label_2a2260:
    // 0x2a2260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2260u;
    {
        const bool branch_taken_0x2a2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2260u;
            // 0x2a2264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2260) {
            ctx->pc = 0x2A2274u;
            goto label_2a2274;
        }
    }
    ctx->pc = 0x2A2268u;
label_2a2268:
    // 0x2a2268: 0xc0a88d0  jal         func_2A2340
    ctx->pc = 0x2A2268u;
    SET_GPR_U32(ctx, 31, 0x2A2270u);
    ctx->pc = 0x2A226Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2268u;
            // 0x2a226c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2340u;
    if (runtime->hasFunction(0x2A2340u)) {
        auto targetFn = runtime->lookupFunction(0x2A2340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2270u; }
        if (ctx->pc != 0x2A2270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2340_0x2a2340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2270u; }
        if (ctx->pc != 0x2A2270u) { return; }
    }
    ctx->pc = 0x2A2270u;
label_2a2270:
    // 0x2a2270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a2270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2274:
    // 0x2a2274: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a2274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2278: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a227c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a227cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2288: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A228Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2288u;
            // 0x2a228c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2290u;
    ctx->pc = 0x2a2290u;
}
