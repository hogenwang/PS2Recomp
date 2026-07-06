#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE6D0
// Address: 0x1be6d0 - 0x1be778
void sub_001BE6D0_0x1be6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE6D0_0x1be6d0");
#endif

    switch (ctx->pc) {
        case 0x1be704u: goto label_1be704;
        case 0x1be71cu: goto label_1be71c;
        case 0x1be724u: goto label_1be724;
        case 0x1be738u: goto label_1be738;
        case 0x1be740u: goto label_1be740;
        case 0x1be758u: goto label_1be758;
        default: break;
    }

    ctx->pc = 0x1be6d0u;

    // 0x1be6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1be6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1be6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1be6d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1be6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be6e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be6e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1be6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1be6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be6ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1be6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1be6f0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1be6f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be6f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BE6F4u;
    {
        const bool branch_taken_0x1be6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6F4u;
            // 0x1be6f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6f4) {
            ctx->pc = 0x1BE710u;
            goto label_1be710;
        }
    }
    ctx->pc = 0x1BE6FCu;
    // 0x1be6fc: 0xc06fa98  jal         func_1BEA60
    ctx->pc = 0x1BE6FCu;
    SET_GPR_U32(ctx, 31, 0x1BE704u);
    ctx->pc = 0x1BEA60u;
    if (runtime->hasFunction(0x1BEA60u)) {
        auto targetFn = runtime->lookupFunction(0x1BEA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE704u; }
        if (ctx->pc != 0x1BE704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEA60_0x1bea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE704u; }
        if (ctx->pc != 0x1BE704u) { return; }
    }
    ctx->pc = 0x1BE704u;
label_1be704:
    // 0x1be704: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1be708: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BE708u;
    {
        const bool branch_taken_0x1be708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE708u;
            // 0x1be70c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be708) {
            ctx->pc = 0x1BE75Cu;
            goto label_1be75c;
        }
    }
    ctx->pc = 0x1BE710u;
label_1be710:
    // 0x1be710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be714: 0xc06ffce  jal         func_1BFF38
    ctx->pc = 0x1BE714u;
    SET_GPR_U32(ctx, 31, 0x1BE71Cu);
    ctx->pc = 0x1BE718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE714u;
            // 0x1be718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFF38u;
    if (runtime->hasFunction(0x1BFF38u)) {
        auto targetFn = runtime->lookupFunction(0x1BFF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE71Cu; }
        if (ctx->pc != 0x1BE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFF38_0x1bff38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE71Cu; }
        if (ctx->pc != 0x1BE71Cu) { return; }
    }
    ctx->pc = 0x1BE71Cu;
label_1be71c:
    // 0x1be71c: 0xc06f8ea  jal         func_1BE3A8
    ctx->pc = 0x1BE71Cu;
    SET_GPR_U32(ctx, 31, 0x1BE724u);
    ctx->pc = 0x1BE720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE71Cu;
            // 0x1be720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3A8u;
    if (runtime->hasFunction(0x1BE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE724u; }
        if (ctx->pc != 0x1BE724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3A8_0x1be3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE724u; }
        if (ctx->pc != 0x1BE724u) { return; }
    }
    ctx->pc = 0x1BE724u;
label_1be724:
    // 0x1be724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be728: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BE728u;
    {
        const bool branch_taken_0x1be728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE728u;
            // 0x1be72c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be728) {
            ctx->pc = 0x1BE758u;
            goto label_1be758;
        }
    }
    ctx->pc = 0x1BE730u;
    // 0x1be730: 0xc06fa98  jal         func_1BEA60
    ctx->pc = 0x1BE730u;
    SET_GPR_U32(ctx, 31, 0x1BE738u);
    ctx->pc = 0x1BEA60u;
    if (runtime->hasFunction(0x1BEA60u)) {
        auto targetFn = runtime->lookupFunction(0x1BEA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE738u; }
        if (ctx->pc != 0x1BE738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEA60_0x1bea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE738u; }
        if (ctx->pc != 0x1BE738u) { return; }
    }
    ctx->pc = 0x1BE738u;
label_1be738:
    // 0x1be738: 0xc06f8ea  jal         func_1BE3A8
    ctx->pc = 0x1BE738u;
    SET_GPR_U32(ctx, 31, 0x1BE740u);
    ctx->pc = 0x1BE73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE738u;
            // 0x1be73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3A8u;
    if (runtime->hasFunction(0x1BE3A8u)) {
        auto targetFn = runtime->lookupFunction(0x1BE3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE740u; }
        if (ctx->pc != 0x1BE740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE3A8_0x1be3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE740u; }
        if (ctx->pc != 0x1BE740u) { return; }
    }
    ctx->pc = 0x1BE740u;
label_1be740:
    // 0x1be740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1be740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be748: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE748u;
    {
        const bool branch_taken_0x1be748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE748u;
            // 0x1be74c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be748) {
            ctx->pc = 0x1BE75Cu;
            goto label_1be75c;
        }
    }
    ctx->pc = 0x1BE750u;
    // 0x1be750: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1BE750u;
    SET_GPR_U32(ctx, 31, 0x1BE758u);
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE758u; }
        if (ctx->pc != 0x1BE758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE758u; }
        if (ctx->pc != 0x1BE758u) { return; }
    }
    ctx->pc = 0x1BE758u;
label_1be758:
    // 0x1be758: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be75c:
    // 0x1be75c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be764: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be768: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1be768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1be76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be770: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE770u;
            // 0x1be774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE778u;
    ctx->pc = 0x1be778u;
}
