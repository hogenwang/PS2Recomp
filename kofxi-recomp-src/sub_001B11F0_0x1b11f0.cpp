#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B11F0
// Address: 0x1b11f0 - 0x1b1270
void sub_001B11F0_0x1b11f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B11F0_0x1b11f0");
#endif

    switch (ctx->pc) {
        case 0x1b1208u: goto label_1b1208;
        case 0x1b1218u: goto label_1b1218;
        case 0x1b1228u: goto label_1b1228;
        case 0x1b1244u: goto label_1b1244;
        case 0x1b1250u: goto label_1b1250;
        case 0x1b1258u: goto label_1b1258;
        default: break;
    }

    ctx->pc = 0x1b11f0u;

    // 0x1b11f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b11f4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B11F4u;
    {
        const bool branch_taken_0x1b11f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B11F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11F4u;
            // 0x1b11f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f4) {
            ctx->pc = 0x1B1218u;
            goto label_1b1218;
        }
    }
    ctx->pc = 0x1B11FCu;
    // 0x1b11fc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b11fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b1200: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1B1200u;
    SET_GPR_U32(ctx, 31, 0x1B1208u);
    ctx->pc = 0x1B1204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1200u;
            // 0x1b1204: 0x248479d0  addiu       $a0, $a0, 0x79D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1208u; }
        if (ctx->pc != 0x1B1208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE828_0x1ae828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1208u; }
        if (ctx->pc != 0x1B1208u) { return; }
    }
    ctx->pc = 0x1B1208u;
label_1b1208:
    // 0x1b1208: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1b1208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1b120c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1210: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1210u;
            // 0x1b1214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1218u;
label_1b1218:
    // 0x1b1218: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b121c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b121cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1220: 0x806de9c  j           func_1B7A70
    ctx->pc = 0x1B1220u;
    ctx->pc = 0x1B1224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1220u;
            // 0x1b1224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A70u;
    {
        auto targetFn = runtime->lookupFunction(0x1B7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1228u;
label_1b1228:
    // 0x1b1228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b122c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b1230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b1234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b1238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b123c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1B123Cu;
    SET_GPR_U32(ctx, 31, 0x1B1244u);
    ctx->pc = 0x1B1240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B123Cu;
            // 0x1b1240: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1244u; }
        if (ctx->pc != 0x1B1244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1244u; }
        if (ctx->pc != 0x1B1244u) { return; }
    }
    ctx->pc = 0x1B1244u;
label_1b1244:
    // 0x1b1244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1248: 0xc06c49c  jal         func_1B1270
    ctx->pc = 0x1B1248u;
    SET_GPR_U32(ctx, 31, 0x1B1250u);
    ctx->pc = 0x1B124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1248u;
            // 0x1b124c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1270u;
    if (runtime->hasFunction(0x1B1270u)) {
        auto targetFn = runtime->lookupFunction(0x1B1270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1250u; }
        if (ctx->pc != 0x1B1250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1270_0x1b1270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1250u; }
        if (ctx->pc != 0x1B1250u) { return; }
    }
    ctx->pc = 0x1B1250u;
label_1b1250:
    // 0x1b1250: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1B1250u;
    SET_GPR_U32(ctx, 31, 0x1B1258u);
    ctx->pc = 0x1B1254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1250u;
            // 0x1b1254: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1258u; }
        if (ctx->pc != 0x1B1258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1258u; }
        if (ctx->pc != 0x1B1258u) { return; }
    }
    ctx->pc = 0x1B1258u;
label_1b1258:
    // 0x1b1258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b1258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b125c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b125cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b1264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1268: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1268u;
            // 0x1b126c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1270u;
    ctx->pc = 0x1b1270u;
}
