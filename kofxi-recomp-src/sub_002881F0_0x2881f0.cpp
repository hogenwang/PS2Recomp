#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002881F0
// Address: 0x2881f0 - 0x288320
void sub_002881F0_0x2881f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002881F0_0x2881f0");
#endif

    switch (ctx->pc) {
        case 0x288268u: goto label_288268;
        case 0x288288u: goto label_288288;
        case 0x2882a4u: goto label_2882a4;
        case 0x2882d0u: goto label_2882d0;
        case 0x2882e0u: goto label_2882e0;
        default: break;
    }

    ctx->pc = 0x2881f0u;

    // 0x2881f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2881f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2881f4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2881f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2881f8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2881f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2881fc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2881fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288200: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x288200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288204: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x288204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x288208: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x288208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x28820c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x28820cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x288210: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x288210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x288214: 0x15f040  sll         $fp, $s5, 1
    ctx->pc = 0x288214u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x288218: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x288218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x28821c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x28821cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288220: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x288220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x288224: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x288224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288228: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x288228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28822c: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x28822cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288230: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288234: 0x26920008  addiu       $s2, $s4, 0x8
    ctx->pc = 0x288234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x288238: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x288238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28823c: 0x26b1ffff  addiu       $s1, $s5, -0x1
    ctx->pc = 0x28823cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x288240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x288240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288244: 0xfc40fff8  sd          $zero, -0x8($v0)
    ctx->pc = 0x288244u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U64(ctx, 0));
    // 0x288248: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x288248u;
    {
        const bool branch_taken_0x288248 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x28824Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288248u;
            // 0x28824c: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288248) {
            ctx->pc = 0x288278u;
            goto label_288278;
        }
    }
    ctx->pc = 0x288250u;
    // 0x288250: 0x26d30008  addiu       $s3, $s6, 0x8
    ctx->pc = 0x288250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x288254: 0xdec70000  ld          $a3, 0x0($s6)
    ctx->pc = 0x288254u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28825c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288260: 0xc0a22e0  jal         func_288B80
    ctx->pc = 0x288260u;
    SET_GPR_U32(ctx, 31, 0x288268u);
    ctx->pc = 0x288264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288260u;
            // 0x288264: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288B80u;
    if (runtime->hasFunction(0x288B80u)) {
        auto targetFn = runtime->lookupFunction(0x288B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288268u; }
        if (ctx->pc != 0x288268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288B80_0x288b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288268u; }
        if (ctx->pc != 0x288268u) { return; }
    }
    ctx->pc = 0x288268u;
label_288268:
    // 0x288268: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x288268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x28826c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28826cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x288270: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x288270u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x288274: 0x26920018  addiu       $s2, $s4, 0x18
    ctx->pc = 0x288274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_288278:
    // 0x288278: 0x26b0fffe  addiu       $s0, $s5, -0x2
    ctx->pc = 0x288278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x28827c: 0x1a000010  blez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28827Cu;
    {
        const bool branch_taken_0x28827c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x288280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28827Cu;
            // 0x288280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28827c) {
            ctx->pc = 0x2882C0u;
            goto label_2882c0;
        }
    }
    ctx->pc = 0x288284u;
    // 0x288284: 0x0  nop
    ctx->pc = 0x288284u;
    // NOP
label_288288:
    // 0x288288: 0xde670000  ld          $a3, 0x0($s3)
    ctx->pc = 0x288288u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28828c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x28828cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x288290: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x288290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x288294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28829c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x28829Cu;
    SET_GPR_U32(ctx, 31, 0x2882A4u);
    ctx->pc = 0x2882A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28829Cu;
            // 0x2882a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288808u;
    if (runtime->hasFunction(0x288808u)) {
        auto targetFn = runtime->lookupFunction(0x288808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A4u; }
        if (ctx->pc != 0x2882A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288808_0x288808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882A4u; }
        if (ctx->pc != 0x2882A4u) { return; }
    }
    ctx->pc = 0x2882A4u;
label_2882a4:
    // 0x2882a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2882a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2882a8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2882a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2882ac: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2882acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2882b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2882b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2882b4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2882B4u;
    {
        const bool branch_taken_0x2882b4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2882B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2882B4u;
            // 0x2882b8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2882b4) {
            ctx->pc = 0x288288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288288;
        }
    }
    ctx->pc = 0x2882BCu;
    // 0x2882bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2882bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2882c0:
    // 0x2882c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2882c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2882c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882c8: 0xc0a2446  jal         func_289118
    ctx->pc = 0x2882C8u;
    SET_GPR_U32(ctx, 31, 0x2882D0u);
    ctx->pc = 0x2882CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882C8u;
            // 0x2882cc: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289118u;
    if (runtime->hasFunction(0x289118u)) {
        auto targetFn = runtime->lookupFunction(0x289118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D0u; }
        if (ctx->pc != 0x2882D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00289118_0x289118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882D0u; }
        if (ctx->pc != 0x2882D0u) { return; }
    }
    ctx->pc = 0x2882D0u;
label_2882d0:
    // 0x2882d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2882d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2882d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882d8: 0xc0a23ba  jal         func_288EE8
    ctx->pc = 0x2882D8u;
    SET_GPR_U32(ctx, 31, 0x2882E0u);
    ctx->pc = 0x2882DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2882D8u;
            // 0x2882dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288EE8u;
    if (runtime->hasFunction(0x288EE8u)) {
        auto targetFn = runtime->lookupFunction(0x288EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882E0u; }
        if (ctx->pc != 0x2882E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00288EE8_0x288ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2882E0u; }
        if (ctx->pc != 0x2882E0u) { return; }
    }
    ctx->pc = 0x2882E0u;
label_2882e0:
    // 0x2882e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2882e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882e4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2882e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882e8: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2882e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2882ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2882f0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2882f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2882f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2882f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2882f8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2882f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2882fc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2882fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288300: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x288300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288304: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x288304u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x288308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28830c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28830cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x288310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x288314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288318: 0x80a2446  j           func_289118
    ctx->pc = 0x288318u;
    ctx->pc = 0x28831Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288318u;
            // 0x28831c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289118u;
    if (runtime->hasFunction(0x289118u)) {
        auto targetFn = runtime->lookupFunction(0x289118u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00289118_0x289118(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x288320u;
    ctx->pc = 0x288320u;
}
