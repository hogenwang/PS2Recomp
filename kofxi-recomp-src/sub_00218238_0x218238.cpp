#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00218238
// Address: 0x218238 - 0x2183a0
void sub_00218238_0x218238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218238_0x218238");
#endif

    switch (ctx->pc) {
        case 0x218254u: goto label_218254;
        case 0x218268u: goto label_218268;
        case 0x218288u: goto label_218288;
        case 0x2182ccu: goto label_2182cc;
        case 0x2182e0u: goto label_2182e0;
        case 0x2182f0u: goto label_2182f0;
        case 0x218318u: goto label_218318;
        case 0x21835cu: goto label_21835c;
        case 0x218370u: goto label_218370;
        case 0x218378u: goto label_218378;
        default: break;
    }

    ctx->pc = 0x218238u;

label_218238:
    // 0x218238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x218238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21823c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218240: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x218240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x218244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x218244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218248: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21824c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x21824Cu;
    SET_GPR_U32(ctx, 31, 0x218254u);
    ctx->pc = 0x218250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21824Cu;
            // 0x218250: 0x24840ff0  addiu       $a0, $a0, 0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218254u; }
        if (ctx->pc != 0x218254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218254u; }
        if (ctx->pc != 0x218254u) { return; }
    }
    ctx->pc = 0x218254u;
label_218254:
    // 0x218254: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21825c: 0x24841010  addiu       $a0, $a0, 0x1010
    ctx->pc = 0x21825cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    // 0x218260: 0xc043e52  jal         func_10F948
    ctx->pc = 0x218260u;
    SET_GPR_U32(ctx, 31, 0x218268u);
    ctx->pc = 0x218264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218260u;
            // 0x218264: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218268u; }
        if (ctx->pc != 0x218268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218268u; }
        if (ctx->pc != 0x218268u) { return; }
    }
    ctx->pc = 0x218268u;
label_218268:
    // 0x218268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21826c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218270: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x218270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x218274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218278: 0x24841020  addiu       $a0, $a0, 0x1020
    ctx->pc = 0x218278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4128));
    // 0x21827c: 0x8043e52  j           func_10F948
    ctx->pc = 0x21827Cu;
    ctx->pc = 0x218280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21827Cu;
            // 0x218280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x218284u;
    // 0x218284: 0x0  nop
    ctx->pc = 0x218284u;
    // NOP
label_218288:
    // 0x218288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21828c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21828cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x218294: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21829c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21829cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2182a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2182a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2182a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2182a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2182ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2182acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182b0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2182b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2182b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2182b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182b8: 0xade0ab58  sw          $zero, -0x54A8($t7)
    ctx->pc = 0x2182b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
    // 0x2182bc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2182c0: 0x8cb40000  lw          $s4, 0x0($a1)
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2182c4: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2182C4u;
    SET_GPR_U32(ctx, 31, 0x2182CCu);
    ctx->pc = 0x2182C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2182C4u;
            // 0x2182c8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182CCu; }
        if (ctx->pc != 0x2182CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182CCu; }
        if (ctx->pc != 0x2182CCu) { return; }
    }
    ctx->pc = 0x2182CCu;
label_2182cc:
    // 0x2182cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2182ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182d0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2182d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2182d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182d8: 0xc08447c  jal         func_2111F0
    ctx->pc = 0x2182D8u;
    SET_GPR_U32(ctx, 31, 0x2182E0u);
    ctx->pc = 0x2182DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2182D8u;
            // 0x2182dc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2111F0u;
    if (runtime->hasFunction(0x2111F0u)) {
        auto targetFn = runtime->lookupFunction(0x2111F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182E0u; }
        if (ctx->pc != 0x2182E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002111F0_0x2111f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2182E0u; }
        if (ctx->pc != 0x2182E0u) { return; }
    }
    ctx->pc = 0x2182E0u;
label_2182e0:
    // 0x2182e0: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x2182e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2182e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2182e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e8: 0xc08608e  jal         func_218238
    ctx->pc = 0x2182E8u;
    SET_GPR_U32(ctx, 31, 0x2182F0u);
    ctx->pc = 0x2182ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2182E8u;
            // 0x2182ec: 0x24f9023  subu        $s2, $s2, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218238u;
    goto label_218238;
    ctx->pc = 0x2182F0u;
label_2182f0:
    // 0x2182f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2182f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2182f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2182f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2182f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2182fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2182fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218300: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x218300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218304: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218308: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21830c: 0x3e00008  jr          $ra
    ctx->pc = 0x21830Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21830Cu;
            // 0x218310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218314u;
    // 0x218314: 0x0  nop
    ctx->pc = 0x218314u;
    // NOP
label_218318:
    // 0x218318: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21831c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x218320: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x218320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x218324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x218324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21832c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218330: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218334: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x218334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218338: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21833c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218340: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x218340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218344: 0xade0ab5c  sw          $zero, -0x54A4($t7)
    ctx->pc = 0x218344u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
    // 0x218348: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x218348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21834c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x21834cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218350: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x218350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x218354: 0xc084582  jal         func_211608
    ctx->pc = 0x218354u;
    SET_GPR_U32(ctx, 31, 0x21835Cu);
    ctx->pc = 0x218358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218354u;
            // 0x218358: 0x8cb40000  lw          $s4, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21835Cu; }
        if (ctx->pc != 0x21835Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21835Cu; }
        if (ctx->pc != 0x21835Cu) { return; }
    }
    ctx->pc = 0x21835Cu;
label_21835c:
    // 0x21835c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218360: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x218360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218368: 0xc084582  jal         func_211608
    ctx->pc = 0x218368u;
    SET_GPR_U32(ctx, 31, 0x218370u);
    ctx->pc = 0x21836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218368u;
            // 0x21836c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211608u;
    if (runtime->hasFunction(0x211608u)) {
        auto targetFn = runtime->lookupFunction(0x211608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218370u; }
        if (ctx->pc != 0x218370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211608_0x211608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218370u; }
        if (ctx->pc != 0x218370u) { return; }
    }
    ctx->pc = 0x218370u;
label_218370:
    // 0x218370: 0xc08608e  jal         func_218238
    ctx->pc = 0x218370u;
    SET_GPR_U32(ctx, 31, 0x218378u);
    ctx->pc = 0x218374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218370u;
            // 0x218374: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218238u;
    goto label_218238;
    ctx->pc = 0x218378u;
label_218378:
    // 0x218378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21837c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21837cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x218380: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x218380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x218384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x218384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x218388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21838c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21838cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218390: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218390u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218394: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x218394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218398: 0x3e00008  jr          $ra
    ctx->pc = 0x218398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21839Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218398u;
            // 0x21839c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2183A0u;
    ctx->pc = 0x2183a0u;
}
