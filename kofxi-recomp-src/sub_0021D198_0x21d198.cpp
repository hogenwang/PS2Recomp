#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D198
// Address: 0x21d198 - 0x21d290
void sub_0021D198_0x21d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D198_0x21d198");
#endif

    switch (ctx->pc) {
        case 0x21d1b4u: goto label_21d1b4;
        case 0x21d1d0u: goto label_21d1d0;
        case 0x21d204u: goto label_21d204;
        case 0x21d214u: goto label_21d214;
        case 0x21d230u: goto label_21d230;
        case 0x21d264u: goto label_21d264;
        case 0x21d26cu: goto label_21d26c;
        default: break;
    }

    ctx->pc = 0x21d198u;

label_21d198:
    // 0x21d198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d1a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d1ac: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21D1ACu;
    SET_GPR_U32(ctx, 31, 0x21D1B4u);
    ctx->pc = 0x21D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1ACu;
            // 0x21d1b0: 0x24841898  addiu       $a0, $a0, 0x1898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D1B4u; }
        if (ctx->pc != 0x21D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D1B4u; }
        if (ctx->pc != 0x21D1B4u) { return; }
    }
    ctx->pc = 0x21D1B4u;
label_21d1b4:
    // 0x21d1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21d1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d1bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21d1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d1c4: 0x24841828  addiu       $a0, $a0, 0x1828
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6184));
    // 0x21d1c8: 0x8043e52  j           func_10F948
    ctx->pc = 0x21D1C8u;
    ctx->pc = 0x21D1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1C8u;
            // 0x21d1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21D1D0u;
label_21d1d0:
    // 0x21d1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d1d4: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d1d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d1dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21d1e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d1e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21d1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d1ec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x21d1ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1f0: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x21d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x21d1f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21d1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d1f8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x21d1f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d1fc: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x21D1FCu;
    SET_GPR_U32(ctx, 31, 0x21D204u);
    ctx->pc = 0x21D200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1FCu;
            // 0x21d200: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D204u; }
        if (ctx->pc != 0x21D204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D204u; }
        if (ctx->pc != 0x21D204u) { return; }
    }
    ctx->pc = 0x21D204u;
label_21d204:
    // 0x21d204: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x21d204u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21d208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d20c: 0xc087466  jal         func_21D198
    ctx->pc = 0x21D20Cu;
    SET_GPR_U32(ctx, 31, 0x21D214u);
    ctx->pc = 0x21D210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D20Cu;
            // 0x21d210: 0x20f8023  subu        $s0, $s0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D198u;
    goto label_21d198;
    ctx->pc = 0x21D214u;
label_21d214:
    // 0x21d214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d21c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d224: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d228: 0x3e00008  jr          $ra
    ctx->pc = 0x21D228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D228u;
            // 0x21d22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D230u;
label_21d230:
    // 0x21d230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d234: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21d234u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21d238: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21d23c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x21d23cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d244: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d248: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21d24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d250: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d254: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21d254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d258: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x21d258u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x21d25c: 0xc084582  jal         func_211608
    ctx->pc = 0x21D25Cu;
    SET_GPR_U32(ctx, 31, 0x21D264u);
    ctx->pc = 0x21D260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D25Cu;
            // 0x21d260: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D264u; }
        if (ctx->pc != 0x21D264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D264u; }
        if (ctx->pc != 0x21D264u) { return; }
    }
    ctx->pc = 0x21D264u;
label_21d264:
    // 0x21d264: 0xc087466  jal         func_21D198
    ctx->pc = 0x21D264u;
    SET_GPR_U32(ctx, 31, 0x21D26Cu);
    ctx->pc = 0x21D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D264u;
            // 0x21d268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D198u;
    goto label_21d198;
    ctx->pc = 0x21D26Cu;
label_21d26c:
    // 0x21d26c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21d270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d274: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21d278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d27c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d27cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d280: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d284: 0x3e00008  jr          $ra
    ctx->pc = 0x21D284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D284u;
            // 0x21d288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D28Cu;
    // 0x21d28c: 0x0  nop
    ctx->pc = 0x21d28cu;
    // NOP
    ctx->pc = 0x21d290u;
}
