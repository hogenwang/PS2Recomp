#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230128
// Address: 0x230128 - 0x2302d8
void sub_00230128_0x230128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230128_0x230128");
#endif

    switch (ctx->pc) {
        case 0x23015cu: goto label_23015c;
        case 0x23027cu: goto label_23027c;
        case 0x230298u: goto label_230298;
        case 0x2302acu: goto label_2302ac;
        default: break;
    }

    ctx->pc = 0x230128u;

    // 0x230128: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x230128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23012c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x230130: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230134: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x230134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23013c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23013cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230140: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x230140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x230144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230148: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x230148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x23014c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x23014cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x230150: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x230150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230154: 0xc08c682  jal         func_231A08
    ctx->pc = 0x230154u;
    SET_GPR_U32(ctx, 31, 0x23015Cu);
    ctx->pc = 0x230158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230154u;
            // 0x230158: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23015Cu; }
        if (ctx->pc != 0x23015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23015Cu; }
        if (ctx->pc != 0x23015Cu) { return; }
    }
    ctx->pc = 0x23015Cu;
label_23015c:
    // 0x23015c: 0x32450041  andi        $a1, $s2, 0x41
    ctx->pc = 0x23015cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65);
    // 0x230160: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x230160u;
    {
        const bool branch_taken_0x230160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x230164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230160u;
            // 0x230164: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230160) {
            ctx->pc = 0x2301A8u;
            goto label_2301a8;
        }
    }
    ctx->pc = 0x230168u;
    // 0x230168: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x230168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x23016c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x23016cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x230170: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x230170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x230174: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x230174u;
    {
        const bool branch_taken_0x230174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230174) {
            ctx->pc = 0x230178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230174u;
            // 0x230178: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2301A8u;
            goto label_2301a8;
        }
    }
    ctx->pc = 0x23017Cu;
    // 0x23017c: 0x96040006  lhu         $a0, 0x6($s0)
    ctx->pc = 0x23017cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x230180: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x230180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x230184: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x230184u;
    {
        const bool branch_taken_0x230184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230184) {
            ctx->pc = 0x230188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230184u;
            // 0x230188: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2301A8u;
            goto label_2301a8;
        }
    }
    ctx->pc = 0x23018Cu;
    // 0x23018c: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x230190: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230190u;
    {
        const bool branch_taken_0x230190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230190) {
            ctx->pc = 0x230194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230190u;
            // 0x230194: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2301A8u;
            goto label_2301a8;
        }
    }
    ctx->pc = 0x230198u;
    // 0x230198: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x230198u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x23019c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23019Cu;
    {
        const bool branch_taken_0x23019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23019Cu;
            // 0x2301a0: 0x32510004  andi        $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23019c) {
            ctx->pc = 0x2301ACu;
            goto label_2301ac;
        }
    }
    ctx->pc = 0x2301A4u;
    // 0x2301a4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2301a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2301a8:
    // 0x2301a8: 0x32510004  andi        $s1, $s2, 0x4
    ctx->pc = 0x2301a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_2301ac:
    // 0x2301ac: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2301ACu;
    {
        const bool branch_taken_0x2301ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301ACu;
            // 0x2301b0: 0x32430082  andi        $v1, $s2, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)130);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301ac) {
            ctx->pc = 0x230240u;
            goto label_230240;
        }
    }
    ctx->pc = 0x2301B4u;
    // 0x2301b4: 0xde020080  ld          $v0, 0x80($s0)
    ctx->pc = 0x2301b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2301b8: 0xde030090  ld          $v1, 0x90($s0)
    ctx->pc = 0x2301b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2301bc: 0xde050088  ld          $a1, 0x88($s0)
    ctx->pc = 0x2301bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2301c0: 0xde040098  ld          $a0, 0x98($s0)
    ctx->pc = 0x2301c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2301c4: 0xa2282f  dsubu       $a1, $a1, $v0
    ctx->pc = 0x2301c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 2));
    // 0x2301c8: 0xde0600a0  ld          $a2, 0xA0($s0)
    ctx->pc = 0x2301c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2301cc: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x2301ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x2301d0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2301d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2301d4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2301d4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2301d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2301d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2301dc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2301dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2301e0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2301e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2301e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2301e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301e8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2301e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2301ec: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x2301ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2301f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2301F0u;
    {
        const bool branch_taken_0x2301f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2301F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2301F0u;
            // 0x2301f4: 0x96040006  lhu         $a0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301f0) {
            ctx->pc = 0x230220u;
            goto label_230220;
        }
    }
    ctx->pc = 0x2301F8u;
    // 0x2301f8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2301f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2301fc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2301FCu;
    {
        const bool branch_taken_0x2301fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2301fc) {
            ctx->pc = 0x230200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2301FCu;
            // 0x230200: 0x2719825  or          $s3, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23023Cu;
            goto label_23023c;
        }
    }
    ctx->pc = 0x230204u;
    // 0x230204: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230208: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x230208u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x23020c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23020cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x230210: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x230210u;
    {
        const bool branch_taken_0x230210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230210u;
            // 0x230214: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230210) {
            ctx->pc = 0x230238u;
            goto label_230238;
        }
    }
    ctx->pc = 0x230218u;
    // 0x230218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230218u;
    {
        const bool branch_taken_0x230218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230218) {
            ctx->pc = 0x230224u;
            goto label_230224;
        }
    }
    ctx->pc = 0x230220u;
label_230220:
    // 0x230220: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x230220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_230224:
    // 0x230224: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x230224u;
    {
        const bool branch_taken_0x230224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230224) {
            ctx->pc = 0x230228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230224u;
            // 0x230228: 0x2719825  or          $s3, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23023Cu;
            goto label_23023c;
        }
    }
    ctx->pc = 0x23022Cu;
    // 0x23022c: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x23022cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x230230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230230u;
    {
        const bool branch_taken_0x230230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230230u;
            // 0x230234: 0x32430082  andi        $v1, $s2, 0x82 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)130);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230230) {
            ctx->pc = 0x230240u;
            goto label_230240;
        }
    }
    ctx->pc = 0x230238u;
label_230238:
    // 0x230238: 0x2719825  or          $s3, $s3, $s1
    ctx->pc = 0x230238u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 17));
label_23023c:
    // 0x23023c: 0x32430082  andi        $v1, $s2, 0x82
    ctx->pc = 0x23023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)130);
label_230240:
    // 0x230240: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x230240u;
    {
        const bool branch_taken_0x230240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x230240) {
            ctx->pc = 0x230264u;
            goto label_230264;
        }
    }
    ctx->pc = 0x230248u;
    // 0x230248: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x230248u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x23024c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23024Cu;
    {
        const bool branch_taken_0x23024c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23024c) {
            ctx->pc = 0x230250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23024Cu;
            // 0x230250: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230264u;
            goto label_230264;
        }
    }
    ctx->pc = 0x230254u;
    // 0x230254: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x230254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x230258: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x230258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23025c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23025Cu;
    {
        const bool branch_taken_0x23025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23025c) {
            ctx->pc = 0x230260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23025Cu;
            // 0x230260: 0x2639825  or          $s3, $s3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230264u;
            goto label_230264;
        }
    }
    ctx->pc = 0x230264u;
label_230264:
    // 0x230264: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x230264u;
    {
        const bool branch_taken_0x230264 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x230268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230264u;
            // 0x230268: 0x324200c3  andi        $v0, $s2, 0xC3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)195);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230264) {
            ctx->pc = 0x2302A4u;
            goto label_2302a4;
        }
    }
    ctx->pc = 0x23026Cu;
    // 0x23026c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23026Cu;
    {
        const bool branch_taken_0x23026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23026Cu;
            // 0x230270: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23026c) {
            ctx->pc = 0x230288u;
            goto label_230288;
        }
    }
    ctx->pc = 0x230274u;
    // 0x230274: 0xc08b752  jal         func_22DD48
    ctx->pc = 0x230274u;
    SET_GPR_U32(ctx, 31, 0x23027Cu);
    ctx->pc = 0x230278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230274u;
            // 0x230278: 0x26050074  addiu       $a1, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DD48u;
    if (runtime->hasFunction(0x22DD48u)) {
        auto targetFn = runtime->lookupFunction(0x22DD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23027Cu; }
        if (ctx->pc != 0x23027Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DD48_0x22dd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23027Cu; }
        if (ctx->pc != 0x23027Cu) { return; }
    }
    ctx->pc = 0x23027Cu;
label_23027c:
    // 0x23027c: 0x96020078  lhu         $v0, 0x78($s0)
    ctx->pc = 0x23027cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x230280: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x230280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x230284: 0xa6020078  sh          $v0, 0x78($s0)
    ctx->pc = 0x230284u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 2));
label_230288:
    // 0x230288: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x230288u;
    {
        const bool branch_taken_0x230288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23028Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230288u;
            // 0x23028c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230288) {
            ctx->pc = 0x2302A4u;
            goto label_2302a4;
        }
    }
    ctx->pc = 0x230290u;
    // 0x230290: 0xc08b752  jal         func_22DD48
    ctx->pc = 0x230290u;
    SET_GPR_U32(ctx, 31, 0x230298u);
    ctx->pc = 0x230294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230290u;
            // 0x230294: 0x260500ac  addiu       $a1, $s0, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DD48u;
    if (runtime->hasFunction(0x22DD48u)) {
        auto targetFn = runtime->lookupFunction(0x22DD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230298u; }
        if (ctx->pc != 0x230298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DD48_0x22dd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230298u; }
        if (ctx->pc != 0x230298u) { return; }
    }
    ctx->pc = 0x230298u;
label_230298:
    // 0x230298: 0x960200b0  lhu         $v0, 0xB0($s0)
    ctx->pc = 0x230298u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x23029c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x23029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2302a0: 0xa60200b0  sh          $v0, 0xB0($s0)
    ctx->pc = 0x2302a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 2));
label_2302a4:
    // 0x2302a4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2302A4u;
    SET_GPR_U32(ctx, 31, 0x2302ACu);
    ctx->pc = 0x2302A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2302A4u;
            // 0x2302a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302ACu; }
        if (ctx->pc != 0x2302ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2302ACu; }
        if (ctx->pc != 0x2302ACu) { return; }
    }
    ctx->pc = 0x2302ACu;
label_2302ac:
    // 0x2302ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2302acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2302b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2302b4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2302b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2302b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2302b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2302bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2302bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2302c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2302c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2302c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2302c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2302c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2302c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2302cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2302CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2302D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2302CCu;
            // 0x2302d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2302D4u;
    // 0x2302d4: 0x0  nop
    ctx->pc = 0x2302d4u;
    // NOP
    ctx->pc = 0x2302d8u;
}
