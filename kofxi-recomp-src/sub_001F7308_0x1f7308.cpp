#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7308
// Address: 0x1f7308 - 0x1f7378
void sub_001F7308_0x1f7308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7308_0x1f7308");
#endif

    switch (ctx->pc) {
        case 0x1f7324u: goto label_1f7324;
        case 0x1f7348u: goto label_1f7348;
        case 0x1f7354u: goto label_1f7354;
        case 0x1f7360u: goto label_1f7360;
        default: break;
    }

    ctx->pc = 0x1f7308u;

    // 0x1f7308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f730c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f731c: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F731Cu;
    SET_GPR_U32(ctx, 31, 0x1F7324u);
    ctx->pc = 0x1F7320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F731Cu;
            // 0x1f7320: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7324u; }
        if (ctx->pc != 0x1F7324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7324u; }
        if (ctx->pc != 0x1F7324u) { return; }
    }
    ctx->pc = 0x1F7324u;
label_1f7324:
    // 0x1f7324: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f7324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f7328: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7328u;
    {
        const bool branch_taken_0x1f7328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F732Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7328u;
            // 0x1f732c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7328) {
            ctx->pc = 0x1F7348u;
            goto label_1f7348;
        }
    }
    ctx->pc = 0x1F7330u;
    // 0x1f7330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7334: 0x34a50144  ori         $a1, $a1, 0x144
    ctx->pc = 0x1f7334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)324);
    // 0x1f7338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f733c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f733cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7340: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F7340u;
    ctx->pc = 0x1F7344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7340u;
            // 0x1f7344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F7348u;
label_1f7348:
    // 0x1f7348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f734c: 0xc07f442  jal         func_1FD108
    ctx->pc = 0x1F734Cu;
    SET_GPR_U32(ctx, 31, 0x1F7354u);
    ctx->pc = 0x1F7350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F734Cu;
            // 0x1f7350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD108u;
    if (runtime->hasFunction(0x1FD108u)) {
        auto targetFn = runtime->lookupFunction(0x1FD108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7354u; }
        if (ctx->pc != 0x1F7354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD108_0x1fd108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7354u; }
        if (ctx->pc != 0x1F7354u) { return; }
    }
    ctx->pc = 0x1F7354u;
label_1f7354:
    // 0x1f7354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7358: 0xc07a706  jal         func_1E9C18
    ctx->pc = 0x1F7358u;
    SET_GPR_U32(ctx, 31, 0x1F7360u);
    ctx->pc = 0x1F735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7358u;
            // 0x1f735c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C18u;
    if (runtime->hasFunction(0x1E9C18u)) {
        auto targetFn = runtime->lookupFunction(0x1E9C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7360u; }
        if (ctx->pc != 0x1F7360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9C18_0x1e9c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7360u; }
        if (ctx->pc != 0x1F7360u) { return; }
    }
    ctx->pc = 0x1F7360u;
label_1f7360:
    // 0x1f7360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f7360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f736c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f736cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7370: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7370u;
            // 0x1f7374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7378u;
    ctx->pc = 0x1f7378u;
}
