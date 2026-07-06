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

// Function: sub_002021F0
// Address: 0x2021f0 - 0x202270
void sub_002021F0_0x2021f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002021F0_0x2021f0");
#endif

    switch (ctx->pc) {
        case 0x20224cu: goto label_20224c;
        default: break;
    }

    ctx->pc = 0x2021f0u;

    // 0x2021f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2021f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2021f4: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2021f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2021f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2021f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2021fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2021fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202200: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x202200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x202204: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x202204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202208: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20220c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x202210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x202214: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x202214u;
    {
        const bool branch_taken_0x202214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202214) {
            ctx->pc = 0x202218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202214u;
            // 0x202218: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20222Cu;
            goto label_20222c;
        }
    }
    ctx->pc = 0x20221Cu;
    // 0x20221c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202220: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202220u;
    {
        const bool branch_taken_0x202220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202220) {
            ctx->pc = 0x202224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202220u;
            // 0x202224: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202238u;
            goto label_202238;
        }
    }
    ctx->pc = 0x202228u;
    // 0x202228: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x202228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20222c:
    // 0x20222c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20222Cu;
    {
        const bool branch_taken_0x20222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20222Cu;
        // 0x202230: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20222c) {
            ctx->pc = 0x20225Cu;
            goto label_20225c;
        }
    }
    ctx->pc = 0x202234u;
    // 0x202234: 0x0  nop
    ctx->pc = 0x202234u;
    // NOP
label_202238:
    // 0x202238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20223c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x20223cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202240: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x202240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x202244: 0xc07340e  jal         func_1CD038
    ctx->pc = 0x202244u;
    SET_GPR_U32(ctx, 31, 0x20224Cu);
    ctx->pc = 0x202248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202244u;
    // 0x202248: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD038u, 0x202244u, 0x20224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20224Cu;
label_20224c:
    // 0x20224c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x20224cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202250: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x202254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x202254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x202258: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x202258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20225c:
    // 0x20225c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20225cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202260: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x202260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x202264: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x202264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202268: 0x3e00008  jr          $ra
    ctx->pc = 0x202268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202268u;
        // 0x20226c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202270u;
}
