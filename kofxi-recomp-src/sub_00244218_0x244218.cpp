#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244218
// Address: 0x244218 - 0x2442a0
void sub_00244218_0x244218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244218_0x244218");
#endif

    switch (ctx->pc) {
        case 0x244238u: goto label_244238;
        case 0x244280u: goto label_244280;
        default: break;
    }

    ctx->pc = 0x244218u;

    // 0x244218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24421c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x244224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244228: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x244228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x24422c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24422Cu;
    {
        const bool branch_taken_0x24422c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24422Cu;
            // 0x244230: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24422c) {
            ctx->pc = 0x244290u;
            goto label_244290;
        }
    }
    ctx->pc = 0x244234u;
    // 0x244234: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x244234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_244238:
    // 0x244238: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x244238u;
    {
        const bool branch_taken_0x244238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24423Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244238u;
            // 0x24423c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244238) {
            ctx->pc = 0x24424Cu;
            goto label_24424c;
        }
    }
    ctx->pc = 0x244240u;
    // 0x244240: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x244240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x244244: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x244244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x244248: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x244248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_24424c:
    // 0x24424c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x244250: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x244250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244254: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244254u;
    {
        const bool branch_taken_0x244254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244254) {
            ctx->pc = 0x244258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244254u;
            // 0x244258: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244268u;
            goto label_244268;
        }
    }
    ctx->pc = 0x24425Cu;
    // 0x24425c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x244260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x244260u;
    {
        const bool branch_taken_0x244260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244260u;
            // 0x244264: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244260) {
            ctx->pc = 0x244270u;
            goto label_244270;
        }
    }
    ctx->pc = 0x244268u;
label_244268:
    // 0x244268: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x244268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24426c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24426cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_244270:
    // 0x244270: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x244270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x244274: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x244274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244278: 0xc098560  jal         func_261580
    ctx->pc = 0x244278u;
    SET_GPR_U32(ctx, 31, 0x244280u);
    ctx->pc = 0x24427Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244278u;
            // 0x24427c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244280u; }
        if (ctx->pc != 0x244280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244280u; }
        if (ctx->pc != 0x244280u) { return; }
    }
    ctx->pc = 0x244280u;
label_244280:
    // 0x244280: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x244284: 0x5480ffec  bnel        $a0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x244284u;
    {
        const bool branch_taken_0x244284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x244284) {
            ctx->pc = 0x244288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244284u;
            // 0x244288: 0x8c830008  lw          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244238;
        }
    }
    ctx->pc = 0x24428Cu;
    // 0x24428c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24428cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244290:
    // 0x244290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244294: 0x3e00008  jr          $ra
    ctx->pc = 0x244294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244294u;
            // 0x244298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24429Cu;
    // 0x24429c: 0x0  nop
    ctx->pc = 0x24429cu;
    // NOP
    ctx->pc = 0x2442a0u;
}
