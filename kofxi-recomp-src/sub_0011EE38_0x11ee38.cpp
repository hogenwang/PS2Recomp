#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EE38
// Address: 0x11ee38 - 0x11f028
void sub_0011EE38_0x11ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EE38_0x11ee38");
#endif

    switch (ctx->pc) {
        case 0x11ee98u: goto label_11ee98;
        case 0x11ef34u: goto label_11ef34;
        case 0x11ef64u: goto label_11ef64;
        case 0x11ef74u: goto label_11ef74;
        case 0x11efb8u: goto label_11efb8;
        case 0x11effcu: goto label_11effc;
        case 0x11f00cu: goto label_11f00c;
        default: break;
    }

    ctx->pc = 0x11ee38u;

    // 0x11ee38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11ee3c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11ee40: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11ee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11ee44: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x11ee44u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x11ee48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11ee4c: 0x26c2de00  addiu       $v0, $s6, -0x2200
    ctx->pc = 0x11ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958592));
    // 0x11ee50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11ee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11ee54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x11ee54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11ee5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ee5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ee64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11ee64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11ee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11ee6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11ee6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee70: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11ee74: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11ee78: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x11ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x11ee7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EE7Cu;
    {
        const bool branch_taken_0x11ee7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE7Cu;
            // 0x11ee80: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee7c) {
            ctx->pc = 0x11EE8Cu;
            goto label_11ee8c;
        }
    }
    ctx->pc = 0x11EE84u;
    // 0x11ee84: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11EE84u;
    {
        const bool branch_taken_0x11ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE84u;
            // 0x11ee88: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee84) {
            ctx->pc = 0x11EF88u;
            goto label_11ef88;
        }
    }
    ctx->pc = 0x11EE8Cu;
label_11ee8c:
    // 0x11ee8c: 0x3c170036  lui         $s7, 0x36
    ctx->pc = 0x11ee8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
    // 0x11ee90: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11EE90u;
    SET_GPR_U32(ctx, 31, 0x11EE98u);
    ctx->pc = 0x11EE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE90u;
            // 0x11ee94: 0x8ee4b9dc  lw          $a0, -0x4624($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE98u; }
        if (ctx->pc != 0x11EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EE98u; }
        if (ctx->pc != 0x11EE98u) { return; }
    }
    ctx->pc = 0x11EE98u;
label_11ee98:
    // 0x11ee98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EE98u;
    {
        const bool branch_taken_0x11ee98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE98u;
            // 0x11ee9c: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee98) {
            ctx->pc = 0x11EEA8u;
            goto label_11eea8;
        }
    }
    ctx->pc = 0x11EEA0u;
    // 0x11eea0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11EEA0u;
    {
        const bool branch_taken_0x11eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEA0u;
            // 0x11eea4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea0) {
            ctx->pc = 0x11EF88u;
            goto label_11ef88;
        }
    }
    ctx->pc = 0x11EEA8u;
label_11eea8:
    // 0x11eea8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11eeac: 0x2623de80  addiu       $v1, $s1, -0x2180
    ctx->pc = 0x11eeacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
    // 0x11eeb0: 0x2482e300  addiu       $v0, $a0, -0x1D00
    ctx->pc = 0x11eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
    // 0x11eeb4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x11eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x11eeb8: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x11eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x11eebc: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EEBCu;
    {
        const bool branch_taken_0x11eebc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEBCu;
            // 0x11eec0: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eebc) {
            ctx->pc = 0x11EED0u;
            goto label_11eed0;
        }
    }
    ctx->pc = 0x11EEC4u;
    // 0x11eec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eec8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EEC8u;
    {
        const bool branch_taken_0x11eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEC8u;
            // 0x11eecc: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eec8) {
            ctx->pc = 0x11EED4u;
            goto label_11eed4;
        }
    }
    ctx->pc = 0x11EED0u;
label_11eed0:
    // 0x11eed0: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x11eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_11eed4:
    // 0x11eed4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EED4u;
    {
        const bool branch_taken_0x11eed4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EED4u;
            // 0x11eed8: 0x2623de80  addiu       $v1, $s1, -0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eed4) {
            ctx->pc = 0x11EEE8u;
            goto label_11eee8;
        }
    }
    ctx->pc = 0x11EEDCu;
    // 0x11eedc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EEE0u;
    {
        const bool branch_taken_0x11eee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEE0u;
            // 0x11eee4: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eee0) {
            ctx->pc = 0x11EEF0u;
            goto label_11eef0;
        }
    }
    ctx->pc = 0x11EEE8u;
label_11eee8:
    // 0x11eee8: 0x2622de80  addiu       $v0, $s1, -0x2180
    ctx->pc = 0x11eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
    // 0x11eeec: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x11eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_11eef0:
    // 0x11eef0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EEF0u;
    {
        const bool branch_taken_0x11eef0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEF0u;
            // 0x11eef4: 0x2623de80  addiu       $v1, $s1, -0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef0) {
            ctx->pc = 0x11EF04u;
            goto label_11ef04;
        }
    }
    ctx->pc = 0x11EEF8u;
    // 0x11eef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EEFCu;
    {
        const bool branch_taken_0x11eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EEFCu;
            // 0x11ef00: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eefc) {
            ctx->pc = 0x11EF0Cu;
            goto label_11ef0c;
        }
    }
    ctx->pc = 0x11EF04u;
label_11ef04:
    // 0x11ef04: 0x2622de80  addiu       $v0, $s1, -0x2180
    ctx->pc = 0x11ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
    // 0x11ef08: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x11ef08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_11ef0c:
    // 0x11ef0c: 0x2490e300  addiu       $s0, $a0, -0x1D00
    ctx->pc = 0x11ef0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
    // 0x11ef10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11ef14: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11ef14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11ef18: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x11ef1c: 0xac53de28  sw          $s3, -0x21D8($v0)
    ctx->pc = 0x11ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958632), GPR_U32(ctx, 19));
    // 0x11ef20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef24: 0xac74de2c  sw          $s4, -0x21D4($v1)
    ctx->pc = 0x11ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958636), GPR_U32(ctx, 20));
    // 0x11ef28: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x11ef2c: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11EF2Cu;
    SET_GPR_U32(ctx, 31, 0x11EF34u);
    ctx->pc = 0x11EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF2Cu;
            // 0x11ef30: 0xacd5de30  sw          $s5, -0x21D0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294958640), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF34u; }
        if (ctx->pc != 0x11EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF34u; }
        if (ctx->pc != 0x11EF34u) { return; }
    }
    ctx->pc = 0x11EF34u;
label_11ef34:
    // 0x11ef34: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x11ef34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x11ef38: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11ef38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11ef3c: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x11ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x11ef40: 0x26c4de00  addiu       $a0, $s6, -0x2200
    ctx->pc = 0x11ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294958592));
    // 0x11ef44: 0x2627de80  addiu       $a3, $s1, -0x2180
    ctx->pc = 0x11ef44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958720));
    // 0x11ef48: 0x2529f3c0  addiu       $t1, $t1, -0xC40
    ctx->pc = 0x11ef48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964160));
    // 0x11ef4c: 0x256bede0  addiu       $t3, $t3, -0x1220
    ctx->pc = 0x11ef4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962656));
    // 0x11ef50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11ef54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef58: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11ef58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11ef5c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11EF5Cu;
    SET_GPR_U32(ctx, 31, 0x11EF64u);
    ctx->pc = 0x11EF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF5Cu;
            // 0x11ef60: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF64u; }
        if (ctx->pc != 0x11EF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF64u; }
        if (ctx->pc != 0x11EF64u) { return; }
    }
    ctx->pc = 0x11EF64u;
label_11ef64:
    // 0x11ef64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF64u;
    {
        const bool branch_taken_0x11ef64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF64u;
            // 0x11ef68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef64) {
            ctx->pc = 0x11EF7Cu;
            goto label_11ef7c;
        }
    }
    ctx->pc = 0x11EF6Cu;
    // 0x11ef6c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11EF6Cu;
    SET_GPR_U32(ctx, 31, 0x11EF74u);
    ctx->pc = 0x11EF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF6Cu;
            // 0x11ef70: 0x8ee4b9dc  lw          $a0, -0x4624($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949340)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF74u; }
        if (ctx->pc != 0x11EF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EF74u; }
        if (ctx->pc != 0x11EF74u) { return; }
    }
    ctx->pc = 0x11EF74u;
label_11ef74:
    // 0x11ef74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11EF74u;
    {
        const bool branch_taken_0x11ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EF74u;
            // 0x11ef78: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef74) {
            ctx->pc = 0x11EF88u;
            goto label_11ef88;
        }
    }
    ctx->pc = 0x11EF7Cu;
label_11ef7c:
    // 0x11ef7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11ef80: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
    // 0x11ef84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11ef84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ef88:
    // 0x11ef88: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11ef88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ef8c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11ef8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ef90: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11ef90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ef94: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11ef94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ef98: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11ef98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ef9c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11ef9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11efa0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11efa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11efa4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11efa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11efa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11efa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11efac: 0x3e00008  jr          $ra
    ctx->pc = 0x11EFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFACu;
            // 0x11efb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11EFB4u;
    // 0x11efb4: 0x0  nop
    ctx->pc = 0x11efb4u;
    // NOP
label_11efb8:
    // 0x11efb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11efb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11efbc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11efc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11efc4: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11efc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x11efc8: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11efc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11efcc: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11efccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11efd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11efd4: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x11efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
    // 0x11efd8: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x11efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
    // 0x11efdc: 0x256be548  addiu       $t3, $t3, -0x1AB8
    ctx->pc = 0x11efdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294960456));
    // 0x11efe0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11efe4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x11efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x11efe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11efe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efec: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11efecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x11eff0: 0x2609f3c0  addiu       $t1, $s0, -0xC40
    ctx->pc = 0x11eff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964160));
    // 0x11eff4: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11EFF4u;
    SET_GPR_U32(ctx, 31, 0x11EFFCu);
    ctx->pc = 0x11EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFF4u;
            // 0x11eff8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFFCu; }
        if (ctx->pc != 0x11EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EFFCu; }
        if (ctx->pc != 0x11EFFCu) { return; }
    }
    ctx->pc = 0x11EFFCu;
label_11effc:
    // 0x11effc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EFFCu;
    {
        const bool branch_taken_0x11effc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EFFCu;
            // 0x11f000: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11effc) {
            ctx->pc = 0x11F014u;
            goto label_11f014;
        }
    }
    ctx->pc = 0x11F004u;
    // 0x11f004: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11F004u;
    SET_GPR_U32(ctx, 31, 0x11F00Cu);
    ctx->pc = 0x11F008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F004u;
            // 0x11f008: 0x2484b5f8  addiu       $a0, $a0, -0x4A08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F00Cu; }
        if (ctx->pc != 0x11F00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F00Cu; }
        if (ctx->pc != 0x11F00Cu) { return; }
    }
    ctx->pc = 0x11F00Cu;
label_11f00c:
    // 0x11f00c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F00Cu;
    {
        const bool branch_taken_0x11f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F00Cu;
            // 0x11f010: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f00c) {
            ctx->pc = 0x11F018u;
            goto label_11f018;
        }
    }
    ctx->pc = 0x11F014u;
label_11f014:
    // 0x11f014: 0x8e02f3c0  lw          $v0, -0xC40($s0)
    ctx->pc = 0x11f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294964160)));
label_11f018:
    // 0x11f018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f01c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f020: 0x3e00008  jr          $ra
    ctx->pc = 0x11F020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F020u;
            // 0x11f024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F028u;
    ctx->pc = 0x11f028u;
}
