#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A248
// Address: 0x24a248 - 0x24a2b0
void sub_0024A248_0x24a248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A248_0x24a248");
#endif

    switch (ctx->pc) {
        case 0x24a270u: goto label_24a270;
        case 0x24a284u: goto label_24a284;
        default: break;
    }

    ctx->pc = 0x24a248u;

    // 0x24a248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24a248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24a24c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24a24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24a250: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24a250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24a254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24a254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a258: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24a25c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a260: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24a264: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24A264u;
    {
        const bool branch_taken_0x24a264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A264u;
            // 0x24a268: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a264) {
            ctx->pc = 0x24A290u;
            goto label_24a290;
        }
    }
    ctx->pc = 0x24A26Cu;
    // 0x24a26c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x24a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a270:
    // 0x24a270: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x24a270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x24a274: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A274u;
    {
        const bool branch_taken_0x24a274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x24A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A274u;
            // 0x24a278: 0x8c900010  lw          $s0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a274) {
            ctx->pc = 0x24A284u;
            goto label_24a284;
        }
    }
    ctx->pc = 0x24A27Cu;
    // 0x24a27c: 0xc09284c  jal         func_24A130
    ctx->pc = 0x24A27Cu;
    SET_GPR_U32(ctx, 31, 0x24A284u);
    ctx->pc = 0x24A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A27Cu;
            // 0x24a280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A130u;
    if (runtime->hasFunction(0x24A130u)) {
        auto targetFn = runtime->lookupFunction(0x24A130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A284u; }
        if (ctx->pc != 0x24A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A130_0x24a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A284u; }
        if (ctx->pc != 0x24A284u) { return; }
    }
    ctx->pc = 0x24A284u;
label_24a284:
    // 0x24a284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a288: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24A288u;
    {
        const bool branch_taken_0x24a288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a288) {
            ctx->pc = 0x24A28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24A288u;
            // 0x24a28c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24A270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24a270;
        }
    }
    ctx->pc = 0x24A290u;
label_24a290:
    // 0x24a290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a294: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24a294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a298: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a29c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24a29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a2a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a2a4: 0x8092ba0  j           func_24AE80
    ctx->pc = 0x24A2A4u;
    ctx->pc = 0x24A2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2A4u;
            // 0x24a2a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24AE80u;
    {
        auto targetFn = runtime->lookupFunction(0x24AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x24A2ACu;
    // 0x24a2ac: 0x0  nop
    ctx->pc = 0x24a2acu;
    // NOP
    ctx->pc = 0x24a2b0u;
}
