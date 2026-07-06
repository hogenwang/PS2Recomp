#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243210
// Address: 0x243210 - 0x243428
void sub_00243210_0x243210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243210_0x243210");
#endif

    switch (ctx->pc) {
        case 0x243260u: goto label_243260;
        case 0x24327cu: goto label_24327c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432c0u: goto label_2432c0;
        case 0x243338u: goto label_243338;
        case 0x243368u: goto label_243368;
        case 0x24339cu: goto label_24339c;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433f8u: goto label_2433f8;
        default: break;
    }

    ctx->pc = 0x243210u;

    // 0x243210: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x243210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x243214: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x243214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x243218: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x243218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x24321c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24321cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243220: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x243220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x243224: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x243224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243228: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x243228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x24322c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x24322cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243230: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x243230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x243234: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x243234u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243238: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x243238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x24323c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x24323cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243240: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x243240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x243244: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x243244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243248: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x243248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x24324c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243250: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x243250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x243254: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243258: 0xc08d3d0  jal         func_234F40
    ctx->pc = 0x243258u;
    SET_GPR_U32(ctx, 31, 0x243260u);
    ctx->pc = 0x24325Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243258u;
            // 0x24325c: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234F40u;
    if (runtime->hasFunction(0x234F40u)) {
        auto targetFn = runtime->lookupFunction(0x234F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243260u; }
        if (ctx->pc != 0x243260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234F40_0x234f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243260u; }
        if (ctx->pc != 0x243260u) { return; }
    }
    ctx->pc = 0x243260u;
label_243260:
    // 0x243260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x243260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243264: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x243264u;
    {
        const bool branch_taken_0x243264 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x243268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243264u;
            // 0x243268: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243264) {
            ctx->pc = 0x243274u;
            goto label_243274;
        }
    }
    ctx->pc = 0x24326Cu;
    // 0x24326c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x24326Cu;
    {
        const bool branch_taken_0x24326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24326Cu;
            // 0x243270: 0x24120072  addiu       $s2, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24326c) {
            ctx->pc = 0x24339Cu;
            goto label_24339c;
        }
    }
    ctx->pc = 0x243274u;
label_243274:
    // 0x243274: 0xc090bf0  jal         func_242FC0
    ctx->pc = 0x243274u;
    SET_GPR_U32(ctx, 31, 0x24327Cu);
    ctx->pc = 0x243278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243274u;
            // 0x243278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (runtime->hasFunction(0x242FC0u)) {
        auto targetFn = runtime->lookupFunction(0x242FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24327Cu; }
        if (ctx->pc != 0x24327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242FC0_0x242fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24327Cu; }
        if (ctx->pc != 0x24327Cu) { return; }
    }
    ctx->pc = 0x24327Cu;
label_24327c:
    // 0x24327c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24327cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243280: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x243280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x243284: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x243284u;
    {
        const bool branch_taken_0x243284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243284u;
            // 0x243288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243284) {
            ctx->pc = 0x2432B8u;
            goto label_2432b8;
        }
    }
    ctx->pc = 0x24328Cu;
    // 0x24328c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24328Cu;
    {
        const bool branch_taken_0x24328c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x243290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24328Cu;
            // 0x243290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24328c) {
            ctx->pc = 0x2432B4u;
            goto label_2432b4;
        }
    }
    ctx->pc = 0x243294u;
    // 0x243294: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x243294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x243298: 0xc048c5e  jal         func_123178
    ctx->pc = 0x243298u;
    SET_GPR_U32(ctx, 31, 0x2432A0u);
    ctx->pc = 0x24329Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243298u;
            // 0x24329c: 0x92c60000  lbu         $a2, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432A0u; }
        if (ctx->pc != 0x2432A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432A0u; }
        if (ctx->pc != 0x2432A0u) { return; }
    }
    ctx->pc = 0x2432A0u;
label_2432a0:
    // 0x2432a0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2432A0u;
    {
        const bool branch_taken_0x2432a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432a0) {
            ctx->pc = 0x2432A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2432A0u;
            // 0x2432a4: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2432C8u;
            goto label_2432c8;
        }
    }
    ctx->pc = 0x2432A8u;
    // 0x2432a8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2432a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2432ac: 0x14520006  bne         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2432ACu;
    {
        const bool branch_taken_0x2432ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2432B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2432ACu;
            // 0x2432b0: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432ac) {
            ctx->pc = 0x2432C8u;
            goto label_2432c8;
        }
    }
    ctx->pc = 0x2432B4u;
label_2432b4:
    // 0x2432b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2432b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2432b8:
    // 0x2432b8: 0xc08d360  jal         func_234D80
    ctx->pc = 0x2432B8u;
    SET_GPR_U32(ctx, 31, 0x2432C0u);
    ctx->pc = 0x2432BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2432B8u;
            // 0x2432bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D80u;
    if (runtime->hasFunction(0x234D80u)) {
        auto targetFn = runtime->lookupFunction(0x234D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432C0u; }
        if (ctx->pc != 0x2432C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234D80_0x234d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432C0u; }
        if (ctx->pc != 0x2432C0u) { return; }
    }
    ctx->pc = 0x2432C0u;
label_2432c0:
    // 0x2432c0: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x2432c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x2432c4: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x2432c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_2432c8:
    // 0x2432c8: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x2432C8u;
    {
        const bool branch_taken_0x2432c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432c8) {
            ctx->pc = 0x243374u;
            goto label_243374;
        }
    }
    ctx->pc = 0x2432D0u;
    // 0x2432d0: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2432D0u;
    {
        const bool branch_taken_0x2432d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432d0) {
            ctx->pc = 0x2432D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2432D0u;
            // 0x2432d4: 0x36310012  ori         $s1, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24331Cu;
            goto label_24331c;
        }
    }
    ctx->pc = 0x2432D8u;
    // 0x2432d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2432d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2432dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2432DCu;
    {
        const bool branch_taken_0x2432dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2432dc) {
            ctx->pc = 0x2432E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2432DCu;
            // 0x2432e0: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2432F8u;
            goto label_2432f8;
        }
    }
    ctx->pc = 0x2432E4u;
    // 0x2432e4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2432e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2432e8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2432e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2432ec: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2432ECu;
    {
        const bool branch_taken_0x2432ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2432ec) {
            ctx->pc = 0x2432F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2432ECu;
            // 0x2432f0: 0x36310012  ori         $s1, $s1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
            ctx->pc = 0x24331Cu;
            goto label_24331c;
        }
    }
    ctx->pc = 0x2432F4u;
    // 0x2432f4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x2432f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2432f8:
    // 0x2432f8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2432f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2432fc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2432FCu;
    {
        const bool branch_taken_0x2432fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2432FCu;
            // 0x243300: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2432fc) {
            ctx->pc = 0x243370u;
            goto label_243370;
        }
    }
    ctx->pc = 0x243304u;
    // 0x243304: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x243304u;
    {
        const bool branch_taken_0x243304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243304u;
            // 0x243308: 0x34630020  ori         $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243304) {
            ctx->pc = 0x243348u;
            goto label_243348;
        }
    }
    ctx->pc = 0x24330Cu;
    // 0x24330c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x24330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x243310: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x243310u;
    {
        const bool branch_taken_0x243310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243310u;
            // 0x243314: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243310) {
            ctx->pc = 0x24334Cu;
            goto label_24334c;
        }
    }
    ctx->pc = 0x243318u;
    // 0x243318: 0x36310012  ori         $s1, $s1, 0x12
    ctx->pc = 0x243318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)18);
label_24331c:
    // 0x24331c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243320: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x243320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243324: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x243324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243328: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x243328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24332c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x24332cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243330: 0xc090d8e  jal         func_243638
    ctx->pc = 0x243330u;
    SET_GPR_U32(ctx, 31, 0x243338u);
    ctx->pc = 0x243334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243330u;
            // 0x243334: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (runtime->hasFunction(0x243638u)) {
        auto targetFn = runtime->lookupFunction(0x243638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243338u; }
        if (ctx->pc != 0x243338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243638_0x243638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243338u; }
        if (ctx->pc != 0x243338u) { return; }
    }
    ctx->pc = 0x243338u;
label_243338:
    // 0x243338: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x243338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24333c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24333cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243340: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x243340u;
    {
        const bool branch_taken_0x243340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243340u;
            // 0x243344: 0x2474ff02  addiu       $s4, $v1, -0xFE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967042));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243340) {
            ctx->pc = 0x243374u;
            goto label_243374;
        }
    }
    ctx->pc = 0x243348u;
label_243348:
    // 0x243348: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x243348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24334c:
    // 0x24334c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24334cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x243350: 0x2454ff04  addiu       $s4, $v0, -0xFC
    ctx->pc = 0x243350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967044));
    // 0x243354: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x243354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x243358: 0x36310020  ori         $s1, $s1, 0x20
    ctx->pc = 0x243358u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
    // 0x24335c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24335cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243360: 0xc090eec  jal         func_243BB0
    ctx->pc = 0x243360u;
    SET_GPR_U32(ctx, 31, 0x243368u);
    ctx->pc = 0x243364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243360u;
            // 0x243364: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243BB0u;
    if (runtime->hasFunction(0x243BB0u)) {
        auto targetFn = runtime->lookupFunction(0x243BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243368u; }
        if (ctx->pc != 0x243368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243BB0_0x243bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243368u; }
        if (ctx->pc != 0x243368u) { return; }
    }
    ctx->pc = 0x243368u;
label_243368:
    // 0x243368: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243368u;
    {
        const bool branch_taken_0x243368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243368) {
            ctx->pc = 0x243374u;
            goto label_243374;
        }
    }
    ctx->pc = 0x243370u;
label_243370:
    // 0x243370: 0x24120076  addiu       $s2, $zero, 0x76
    ctx->pc = 0x243370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_243374:
    // 0x243374: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x243374u;
    {
        const bool branch_taken_0x243374 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x243374) {
            ctx->pc = 0x24339Cu;
            goto label_24339c;
        }
    }
    ctx->pc = 0x24337Cu;
    // 0x24337c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x24337Cu;
    {
        const bool branch_taken_0x24337c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x24337c) {
            ctx->pc = 0x243394u;
            goto label_243394;
        }
    }
    ctx->pc = 0x243384u;
    // 0x243384: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x243384u;
    {
        const bool branch_taken_0x243384 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x243384) {
            ctx->pc = 0x243394u;
            goto label_243394;
        }
    }
    ctx->pc = 0x24338Cu;
    // 0x24338c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24338Cu;
    {
        const bool branch_taken_0x24338c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24338Cu;
            // 0x243390: 0xaef00000  sw          $s0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24338c) {
            ctx->pc = 0x24339Cu;
            goto label_24339c;
        }
    }
    ctx->pc = 0x243394u;
label_243394:
    // 0x243394: 0xc090c4c  jal         func_243130
    ctx->pc = 0x243394u;
    SET_GPR_U32(ctx, 31, 0x24339Cu);
    ctx->pc = 0x243398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243394u;
            // 0x243398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24339Cu; }
        if (ctx->pc != 0x24339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24339Cu; }
        if (ctx->pc != 0x24339Cu) { return; }
    }
    ctx->pc = 0x24339Cu;
label_24339c:
    // 0x24339c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24339Cu;
    {
        const bool branch_taken_0x24339c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24339Cu;
            // 0x2433a0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24339c) {
            ctx->pc = 0x2433B4u;
            goto label_2433b4;
        }
    }
    ctx->pc = 0x2433A4u;
    // 0x2433a4: 0x9462ff00  lhu         $v0, -0x100($v1)
    ctx->pc = 0x2433a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967040)));
    // 0x2433a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2433ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2433ACu;
    {
        const bool branch_taken_0x2433ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2433ACu;
            // 0x2433b0: 0xa462ff00  sh          $v0, -0x100($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294967040), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433ac) {
            ctx->pc = 0x2433C8u;
            goto label_2433c8;
        }
    }
    ctx->pc = 0x2433B4u;
label_2433b4:
    // 0x2433b4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2433B4u;
    {
        const bool branch_taken_0x2433b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2433B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2433B4u;
            // 0x2433b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2433b4) {
            ctx->pc = 0x2433CCu;
            goto label_2433cc;
        }
    }
    ctx->pc = 0x2433BCu;
    // 0x2433bc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x2433bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2433c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2433c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2433c4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2433c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2433c8:
    // 0x2433c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2433c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2433cc:
    // 0x2433cc: 0xc048c96  jal         func_123258
    ctx->pc = 0x2433CCu;
    SET_GPR_U32(ctx, 31, 0x2433D4u);
    ctx->pc = 0x2433D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2433CCu;
            // 0x2433d0: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433D4u; }
        if (ctx->pc != 0x2433D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433D4u; }
        if (ctx->pc != 0x2433D4u) { return; }
    }
    ctx->pc = 0x2433D4u;
label_2433d4:
    // 0x2433d4: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x2433d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
    // 0x2433d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2433d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433dc: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x2433dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2433e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2433e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2433e4: 0xafbe000c  sw          $fp, 0xC($sp)
    ctx->pc = 0x2433e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 30));
    // 0x2433e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2433e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2433ec: 0xafb6001c  sw          $s6, 0x1C($sp)
    ctx->pc = 0x2433ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 22));
    // 0x2433f0: 0xc091502  jal         func_245408
    ctx->pc = 0x2433F0u;
    SET_GPR_U32(ctx, 31, 0x2433F8u);
    ctx->pc = 0x2433F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2433F0u;
            // 0x2433f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245408u;
    if (runtime->hasFunction(0x245408u)) {
        auto targetFn = runtime->lookupFunction(0x245408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433F8u; }
        if (ctx->pc != 0x2433F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245408_0x245408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2433F8u; }
        if (ctx->pc != 0x2433F8u) { return; }
    }
    ctx->pc = 0x2433F8u;
label_2433f8:
    // 0x2433f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2433f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2433fc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2433fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x243400: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x243400u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x243404: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x243404u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x243408: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x243408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24340c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x24340cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243410: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x243410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243414: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x243414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243418: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x243418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24341c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24341cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243420: 0x3e00008  jr          $ra
    ctx->pc = 0x243420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243420u;
            // 0x243424: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243428u;
    ctx->pc = 0x243428u;
}
