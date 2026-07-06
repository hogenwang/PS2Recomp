#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034E1E0
// Address: 0x34e1e0 - 0x350360
void sub_0034E1E0_0x34e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034E1E0_0x34e1e0");
#endif

    switch (ctx->pc) {
        case 0x34e22cu: goto label_34e22c;
        case 0x34e264u: goto label_34e264;
        case 0x34e294u: goto label_34e294;
        case 0x34e2b0u: goto label_34e2b0;
        case 0x34e2d4u: goto label_34e2d4;
        case 0x34e2e8u: goto label_34e2e8;
        case 0x34e304u: goto label_34e304;
        case 0x34e328u: goto label_34e328;
        case 0x34e34cu: goto label_34e34c;
        case 0x34e358u: goto label_34e358;
        case 0x34e39cu: goto label_34e39c;
        case 0x34e3ecu: goto label_34e3ec;
        case 0x34e404u: goto label_34e404;
        case 0x34e448u: goto label_34e448;
        case 0x34e494u: goto label_34e494;
        case 0x34e4b8u: goto label_34e4b8;
        case 0x34e510u: goto label_34e510;
        case 0x34e558u: goto label_34e558;
        case 0x34e5b4u: goto label_34e5b4;
        case 0x34e5e4u: goto label_34e5e4;
        case 0x34e614u: goto label_34e614;
        case 0x34e660u: goto label_34e660;
        case 0x34e690u: goto label_34e690;
        case 0x34e6f0u: goto label_34e6f0;
        case 0x34e730u: goto label_34e730;
        case 0x34e764u: goto label_34e764;
        case 0x34e790u: goto label_34e790;
        case 0x34e7b4u: goto label_34e7b4;
        case 0x34e7c8u: goto label_34e7c8;
        case 0x34e7e4u: goto label_34e7e4;
        case 0x34e808u: goto label_34e808;
        case 0x34e82cu: goto label_34e82c;
        case 0x34e838u: goto label_34e838;
        case 0x34e87cu: goto label_34e87c;
        case 0x34e8ccu: goto label_34e8cc;
        case 0x34e8e4u: goto label_34e8e4;
        case 0x34e918u: goto label_34e918;
        case 0x34e944u: goto label_34e944;
        case 0x34e960u: goto label_34e960;
        case 0x34e9b8u: goto label_34e9b8;
        case 0x34e9e8u: goto label_34e9e8;
        case 0x34ea18u: goto label_34ea18;
        case 0x34ea68u: goto label_34ea68;
        case 0x34eaccu: goto label_34eacc;
        case 0x34eb14u: goto label_34eb14;
        case 0x34eb64u: goto label_34eb64;
        case 0x34eb94u: goto label_34eb94;
        case 0x34ebd0u: goto label_34ebd0;
        case 0x34ec30u: goto label_34ec30;
        case 0x34ec60u: goto label_34ec60;
        case 0x34ec90u: goto label_34ec90;
        case 0x34ecb0u: goto label_34ecb0;
        case 0x34ecd8u: goto label_34ecd8;
        case 0x34ed0cu: goto label_34ed0c;
        case 0x34ed24u: goto label_34ed24;
        case 0x34ed3cu: goto label_34ed3c;
        case 0x34edacu: goto label_34edac;
        case 0x34ee60u: goto label_34ee60;
        case 0x34eea0u: goto label_34eea0;
        case 0x34eeb8u: goto label_34eeb8;
        case 0x34eec4u: goto label_34eec4;
        case 0x34eed8u: goto label_34eed8;
        case 0x34ef00u: goto label_34ef00;
        case 0x34ef44u: goto label_34ef44;
        case 0x34ef5cu: goto label_34ef5c;
        case 0x34ef94u: goto label_34ef94;
        case 0x34efb8u: goto label_34efb8;
        case 0x34efe0u: goto label_34efe0;
        case 0x34f004u: goto label_34f004;
        case 0x34f020u: goto label_34f020;
        case 0x34f038u: goto label_34f038;
        case 0x34f094u: goto label_34f094;
        case 0x34f0ecu: goto label_34f0ec;
        case 0x34f120u: goto label_34f120;
        case 0x34f138u: goto label_34f138;
        case 0x34f1c4u: goto label_34f1c4;
        case 0x34f1dcu: goto label_34f1dc;
        case 0x34f1e8u: goto label_34f1e8;
        case 0x34f214u: goto label_34f214;
        case 0x34f2b4u: goto label_34f2b4;
        case 0x34f2c0u: goto label_34f2c0;
        case 0x34f2dcu: goto label_34f2dc;
        case 0x34f2f0u: goto label_34f2f0;
        case 0x34f318u: goto label_34f318;
        case 0x34f324u: goto label_34f324;
        case 0x34f340u: goto label_34f340;
        case 0x34f360u: goto label_34f360;
        case 0x34f378u: goto label_34f378;
        case 0x34f3acu: goto label_34f3ac;
        case 0x34f3b8u: goto label_34f3b8;
        case 0x34f3d0u: goto label_34f3d0;
        case 0x34f3f4u: goto label_34f3f4;
        case 0x34f434u: goto label_34f434;
        case 0x34f448u: goto label_34f448;
        case 0x34f4a8u: goto label_34f4a8;
        case 0x34f4e4u: goto label_34f4e4;
        case 0x34f524u: goto label_34f524;
        case 0x34f544u: goto label_34f544;
        case 0x34f560u: goto label_34f560;
        case 0x34f578u: goto label_34f578;
        case 0x34f588u: goto label_34f588;
        case 0x34f594u: goto label_34f594;
        case 0x34f5a0u: goto label_34f5a0;
        case 0x34f5b8u: goto label_34f5b8;
        case 0x34f5c8u: goto label_34f5c8;
        case 0x34f5d4u: goto label_34f5d4;
        case 0x34f5e0u: goto label_34f5e0;
        case 0x34f5f8u: goto label_34f5f8;
        case 0x34f608u: goto label_34f608;
        case 0x34f614u: goto label_34f614;
        case 0x34f620u: goto label_34f620;
        case 0x34f638u: goto label_34f638;
        case 0x34f64cu: goto label_34f64c;
        case 0x34f658u: goto label_34f658;
        case 0x34f670u: goto label_34f670;
        case 0x34f690u: goto label_34f690;
        case 0x34f6acu: goto label_34f6ac;
        case 0x34f6c4u: goto label_34f6c4;
        case 0x34f6f8u: goto label_34f6f8;
        case 0x34f704u: goto label_34f704;
        case 0x34f710u: goto label_34f710;
        case 0x34f728u: goto label_34f728;
        case 0x34f770u: goto label_34f770;
        case 0x34f77cu: goto label_34f77c;
        case 0x34f790u: goto label_34f790;
        case 0x34f7bcu: goto label_34f7bc;
        case 0x34f818u: goto label_34f818;
        case 0x34f82cu: goto label_34f82c;
        case 0x34f844u: goto label_34f844;
        case 0x34f8a4u: goto label_34f8a4;
        case 0x34f948u: goto label_34f948;
        case 0x34f970u: goto label_34f970;
        case 0x34fab4u: goto label_34fab4;
        case 0x34fae0u: goto label_34fae0;
        case 0x34fb00u: goto label_34fb00;
        case 0x34fb48u: goto label_34fb48;
        case 0x34fb88u: goto label_34fb88;
        case 0x34fbf0u: goto label_34fbf0;
        case 0x34fc08u: goto label_34fc08;
        case 0x34fc14u: goto label_34fc14;
        case 0x34fc34u: goto label_34fc34;
        case 0x34fc60u: goto label_34fc60;
        case 0x34fc78u: goto label_34fc78;
        case 0x34fcc0u: goto label_34fcc0;
        case 0x34fcccu: goto label_34fccc;
        case 0x34fce0u: goto label_34fce0;
        case 0x34fd0cu: goto label_34fd0c;
        case 0x34fd68u: goto label_34fd68;
        case 0x34fd7cu: goto label_34fd7c;
        case 0x34fd94u: goto label_34fd94;
        case 0x34fdf4u: goto label_34fdf4;
        case 0x34fe98u: goto label_34fe98;
        case 0x34fec0u: goto label_34fec0;
        case 0x34ffd4u: goto label_34ffd4;
        case 0x350000u: goto label_350000;
        case 0x350020u: goto label_350020;
        case 0x350078u: goto label_350078;
        case 0x3500e0u: goto label_3500e0;
        case 0x3500f8u: goto label_3500f8;
        case 0x350104u: goto label_350104;
        case 0x350124u: goto label_350124;
        case 0x350150u: goto label_350150;
        case 0x3501ccu: goto label_3501cc;
        case 0x3501e8u: goto label_3501e8;
        case 0x3501fcu: goto label_3501fc;
        case 0x35021cu: goto label_35021c;
        case 0x350234u: goto label_350234;
        case 0x350240u: goto label_350240;
        case 0x350250u: goto label_350250;
        case 0x3502c8u: goto label_3502c8;
        case 0x3502e4u: goto label_3502e4;
        case 0x350300u: goto label_350300;
        case 0x350320u: goto label_350320;
        case 0x350338u: goto label_350338;
        case 0x350344u: goto label_350344;
        default: break;
    }

    ctx->pc = 0x34e1e0u;

label_34e1e0:
    // 0x34e1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e1e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34e1e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34e1ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34e1f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x34e1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e1f4: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x34E1F4u;
    {
        const bool branch_taken_0x34e1f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1F4u;
            // 0x34e1f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e1f4) {
            ctx->pc = 0x34E234u;
            goto label_34e234;
        }
    }
    ctx->pc = 0x34E1FCu;
    // 0x34e1fc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e200: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e204: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e208: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e20c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x34e20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x34e210: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x34e210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x34e214: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e218: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x34e218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x34e21c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e21cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e220: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x34e220u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e224: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E224u;
    SET_GPR_U32(ctx, 31, 0x34E22Cu);
    ctx->pc = 0x34E228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E224u;
            // 0x34e228: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E22Cu; }
        if (ctx->pc != 0x34E22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E22Cu; }
        if (ctx->pc != 0x34E22Cu) { return; }
    }
    ctx->pc = 0x34E22Cu;
label_34e22c:
    // 0x34e22c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34E22Cu;
    {
        const bool branch_taken_0x34e22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E22Cu;
            // 0x34e230: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e22c) {
            ctx->pc = 0x34E268u;
            goto label_34e268;
        }
    }
    ctx->pc = 0x34E234u;
label_34e234:
    // 0x34e234: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x34e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e238: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e23c: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e240: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e244: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x34e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x34e248: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x34e248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x34e24c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e250: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x34e250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x34e254: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e254u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e258: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x34e258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e25c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E25Cu;
    SET_GPR_U32(ctx, 31, 0x34E264u);
    ctx->pc = 0x34E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E25Cu;
            // 0x34e260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E264u; }
        if (ctx->pc != 0x34E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E264u; }
        if (ctx->pc != 0x34E264u) { return; }
    }
    ctx->pc = 0x34E264u;
label_34e264:
    // 0x34e264: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34e268:
    // 0x34e268: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e26c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e270: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x34e270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e274: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e278: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e27c: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x34e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x34e280: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x34e280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x34e284: 0x24080210  addiu       $t0, $zero, 0x210
    ctx->pc = 0x34e284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x34e288: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e288u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e28c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E28Cu;
    SET_GPR_U32(ctx, 31, 0x34E294u);
    ctx->pc = 0x34E290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E28Cu;
            // 0x34e290: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E294u; }
        if (ctx->pc != 0x34E294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E294u; }
        if (ctx->pc != 0x34E294u) { return; }
    }
    ctx->pc = 0x34E294u;
label_34e294:
    // 0x34e294: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34e294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e298: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34e298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e29c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34e29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2A0u;
            // 0x34e2a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E2A8u;
    // 0x34e2a8: 0x0  nop
    ctx->pc = 0x34e2a8u;
    // NOP
    // 0x34e2ac: 0x0  nop
    ctx->pc = 0x34e2acu;
    // NOP
label_34e2b0:
    // 0x34e2b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34e2b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34e2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34e2b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34e2bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x34e2c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34e2c4: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x34e2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e2c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34e2cc: 0xc082918  jal         func_20A460
    ctx->pc = 0x34E2CCu;
    SET_GPR_U32(ctx, 31, 0x34E2D4u);
    ctx->pc = 0x34E2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2CCu;
            // 0x34e2d0: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (runtime->hasFunction(0x20A460u)) {
        auto targetFn = runtime->lookupFunction(0x20A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2D4u; }
        if (ctx->pc != 0x34E2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A460_0x20a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2D4u; }
        if (ctx->pc != 0x34E2D4u) { return; }
    }
    ctx->pc = 0x34E2D4u;
label_34e2d4:
    // 0x34e2d4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e2d8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34e2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34e2dc: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e2e0: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34E2E0u;
    SET_GPR_U32(ctx, 31, 0x34E2E8u);
    ctx->pc = 0x34E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2E0u;
            // 0x34e2e4: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (runtime->hasFunction(0x20E310u)) {
        auto targetFn = runtime->lookupFunction(0x20E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2E8u; }
        if (ctx->pc != 0x34E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E310_0x20e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E2E8u; }
        if (ctx->pc != 0x34E2E8u) { return; }
    }
    ctx->pc = 0x34E2E8u;
label_34e2e8:
    // 0x34e2e8: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34e2ec: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34e2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34e2f0: 0x8c44dd90  lw          $a0, -0x2270($v0)
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34e2f4: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e2f8: 0x24a59090  addiu       $a1, $a1, -0x6F70
    ctx->pc = 0x34e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938768));
    // 0x34e2fc: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x34E2FCu;
    SET_GPR_U32(ctx, 31, 0x34E304u);
    ctx->pc = 0x34E300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E2FCu;
            // 0x34e300: 0x24c69480  addiu       $a2, $a2, -0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (runtime->hasFunction(0x20E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x20E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E304u; }
        if (ctx->pc != 0x34E304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E4C0_0x20e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E304u; }
        if (ctx->pc != 0x34E304u) { return; }
    }
    ctx->pc = 0x34E304u;
label_34e304:
    // 0x34e304: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e308: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e30c: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34e30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34e310: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34e310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34e314: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34e314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e318: 0x24c69090  addiu       $a2, $a2, -0x6F70
    ctx->pc = 0x34e318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938768));
    // 0x34e31c: 0x24e79580  addiu       $a3, $a3, -0x6A80
    ctx->pc = 0x34e31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940032));
    // 0x34e320: 0xc083940  jal         func_20E500
    ctx->pc = 0x34E320u;
    SET_GPR_U32(ctx, 31, 0x34E328u);
    ctx->pc = 0x34E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E320u;
            // 0x34e324: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (runtime->hasFunction(0x20E500u)) {
        auto targetFn = runtime->lookupFunction(0x20E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E328u; }
        if (ctx->pc != 0x34E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E500_0x20e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E328u; }
        if (ctx->pc != 0x34E328u) { return; }
    }
    ctx->pc = 0x34E328u;
label_34e328:
    // 0x34e328: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e32c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e32cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e330: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x34e330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x34e334: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34e334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34e338: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34e338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e33c: 0x24c69090  addiu       $a2, $a2, -0x6F70
    ctx->pc = 0x34e33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938768));
    // 0x34e340: 0x24e79590  addiu       $a3, $a3, -0x6A70
    ctx->pc = 0x34e340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940048));
    // 0x34e344: 0xc083940  jal         func_20E500
    ctx->pc = 0x34E344u;
    SET_GPR_U32(ctx, 31, 0x34E34Cu);
    ctx->pc = 0x34E348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E344u;
            // 0x34e348: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (runtime->hasFunction(0x20E500u)) {
        auto targetFn = runtime->lookupFunction(0x20E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E34Cu; }
        if (ctx->pc != 0x34E34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E500_0x20e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E34Cu; }
        if (ctx->pc != 0x34E34Cu) { return; }
    }
    ctx->pc = 0x34E34Cu;
label_34e34c:
    // 0x34e34c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34e34cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34e350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e354: 0x24100078  addiu       $s0, $zero, 0x78
    ctx->pc = 0x34e354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_34e358:
    // 0x34e358: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e35c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e360: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e364: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x34e364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34e368: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x34E368u;
    {
        const bool branch_taken_0x34e368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e368) {
            ctx->pc = 0x34E698u;
            goto label_34e698;
        }
    }
    ctx->pc = 0x34E370u;
    // 0x34e370: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x34e370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x34e374: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E374u;
    {
        const bool branch_taken_0x34e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e374) {
            ctx->pc = 0x34E378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E374u;
            // 0x34e378: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E380u;
            goto label_34e380;
        }
    }
    ctx->pc = 0x34E37Cu;
    // 0x34e37c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x34e37cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34e380:
    // 0x34e380: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e384: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e388: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34e38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e390: 0x2823026  xor         $a2, $s4, $v0
    ctx->pc = 0x34e390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x34e394: 0xc0d3878  jal         func_34E1E0
    ctx->pc = 0x34E394u;
    SET_GPR_U32(ctx, 31, 0x34E39Cu);
    ctx->pc = 0x34E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E394u;
            // 0x34e398: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E1E0u;
    goto label_34e1e0;
    ctx->pc = 0x34E39Cu;
label_34e39c:
    // 0x34e39c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e3a0: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e3a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e3a8: 0x90420041  lbu         $v0, 0x41($v0)
    ctx->pc = 0x34e3a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 65)));
    // 0x34e3ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34e3b0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x34e3b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34e3b4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x34E3B4u;
    {
        const bool branch_taken_0x34e3b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3b4) {
            ctx->pc = 0x34E3F8u;
            goto label_34e3f8;
        }
    }
    ctx->pc = 0x34E3BCu;
    // 0x34e3bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e3c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e3c4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e3c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3c8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e3cc: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e3d0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x34e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x34e3d4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x34e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34e3d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e3dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e3e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3e4: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E3E4u;
    SET_GPR_U32(ctx, 31, 0x34E3ECu);
    ctx->pc = 0x34E3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E3E4u;
            // 0x34e3e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E3ECu; }
        if (ctx->pc != 0x34E3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E3ECu; }
        if (ctx->pc != 0x34E3ECu) { return; }
    }
    ctx->pc = 0x34E3ECu;
label_34e3ec:
    // 0x34e3ec: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x34E3ECu;
    {
        const bool branch_taken_0x34e3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e3ec) {
            ctx->pc = 0x34E6A8u;
            goto label_34e6a8;
        }
    }
    ctx->pc = 0x34E3F4u;
    // 0x34e3f4: 0x0  nop
    ctx->pc = 0x34e3f4u;
    // NOP
label_34e3f8:
    // 0x34e3f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e3fc: 0xc082998  jal         func_20A660
    ctx->pc = 0x34E3FCu;
    SET_GPR_U32(ctx, 31, 0x34E404u);
    ctx->pc = 0x34E400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E3FCu;
            // 0x34e400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E404u; }
        if (ctx->pc != 0x34E404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A660_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E404u; }
        if (ctx->pc != 0x34E404u) { return; }
    }
    ctx->pc = 0x34E404u;
label_34e404:
    // 0x34e404: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34e404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34e408: 0x9042beaa  lbu         $v0, -0x4156($v0)
    ctx->pc = 0x34e408u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950570)));
    // 0x34e40c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34E40Cu;
    {
        const bool branch_taken_0x34e40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e40c) {
            ctx->pc = 0x34E450u;
            goto label_34e450;
        }
    }
    ctx->pc = 0x34E414u;
    // 0x34e414: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e418: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e41c: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x34e41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e420: 0x91220042  lbu         $v0, 0x42($t1)
    ctx->pc = 0x34e420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 66)));
    // 0x34e424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34e428: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E428u;
    {
        const bool branch_taken_0x34e428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e428) {
            ctx->pc = 0x34E450u;
            goto label_34e450;
        }
    }
    ctx->pc = 0x34E430u;
    // 0x34e430: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e438: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x34e438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e43c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x34e43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e440: 0xc0836e0  jal         func_20DB80
    ctx->pc = 0x34E440u;
    SET_GPR_U32(ctx, 31, 0x34E448u);
    ctx->pc = 0x34E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E440u;
            // 0x34e444: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E448u; }
        if (ctx->pc != 0x34E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB80_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E448u; }
        if (ctx->pc != 0x34E448u) { return; }
    }
    ctx->pc = 0x34E448u;
label_34e448:
    // 0x34e448: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x34E448u;
    {
        const bool branch_taken_0x34e448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e448) {
            ctx->pc = 0x34E4B8u;
            goto label_34e4b8;
        }
    }
    ctx->pc = 0x34E450u;
label_34e450:
    // 0x34e450: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34e454: 0x9042beab  lbu         $v0, -0x4155($v0)
    ctx->pc = 0x34e454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x34e458: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34E458u;
    {
        const bool branch_taken_0x34e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e458) {
            ctx->pc = 0x34E4A0u;
            goto label_34e4a0;
        }
    }
    ctx->pc = 0x34E460u;
    // 0x34e460: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e464: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e468: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x34e468u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e46c: 0x91220042  lbu         $v0, 0x42($t1)
    ctx->pc = 0x34e46cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 66)));
    // 0x34e470: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x34e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x34e474: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34E474u;
    {
        const bool branch_taken_0x34e474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e474) {
            ctx->pc = 0x34E4A0u;
            goto label_34e4a0;
        }
    }
    ctx->pc = 0x34E47Cu;
    // 0x34e47c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e484: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34e484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e488: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x34e488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e48c: 0xc0836e0  jal         func_20DB80
    ctx->pc = 0x34E48Cu;
    SET_GPR_U32(ctx, 31, 0x34E494u);
    ctx->pc = 0x34E490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E48Cu;
            // 0x34e490: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E494u; }
        if (ctx->pc != 0x34E494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB80_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E494u; }
        if (ctx->pc != 0x34E494u) { return; }
    }
    ctx->pc = 0x34E494u;
label_34e494:
    // 0x34e494: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34E494u;
    {
        const bool branch_taken_0x34e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e494) {
            ctx->pc = 0x34E4B8u;
            goto label_34e4b8;
        }
    }
    ctx->pc = 0x34E49Cu;
    // 0x34e49c: 0x0  nop
    ctx->pc = 0x34e49cu;
    // NOP
label_34e4a0:
    // 0x34e4a0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e4a4: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e4a8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e4ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4b0: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34E4B0u;
    SET_GPR_U32(ctx, 31, 0x34E4B8u);
    ctx->pc = 0x34E4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E4B0u;
            // 0x34e4b4: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (runtime->hasFunction(0x20DB00u)) {
        auto targetFn = runtime->lookupFunction(0x20DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E4B8u; }
        if (ctx->pc != 0x34E4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB00_0x20db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E4B8u; }
        if (ctx->pc != 0x34E4B8u) { return; }
    }
    ctx->pc = 0x34E4B8u;
label_34e4b8:
    // 0x34e4b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e4bc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e4c0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e4c4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e4c8: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34e4cc: 0x8c434088  lw          $v1, 0x4088($v0)
    ctx->pc = 0x34e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e4d0: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x34e4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x34e4d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e4d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e4dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e4e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34e4e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x34e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x34e4ec: 0x90630043  lbu         $v1, 0x43($v1)
    ctx->pc = 0x34e4ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
    // 0x34e4f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x34e4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x34e4f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34e4f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e4f8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x34e4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34e4fc: 0x1010  mfhi        $v0
    ctx->pc = 0x34e4fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34e500: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x34e500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x34e504: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34e504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34e508: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E508u;
    SET_GPR_U32(ctx, 31, 0x34E510u);
    ctx->pc = 0x34E50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E508u;
            // 0x34e50c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E510u; }
        if (ctx->pc != 0x34E510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E510u; }
        if (ctx->pc != 0x34E510u) { return; }
    }
    ctx->pc = 0x34E510u;
label_34e510:
    // 0x34e510: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x34e510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e514: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e518: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x34e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34e51c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e520: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e524: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e528: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34e528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34e52c: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x34e52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x34e530: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e538: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e53c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e53cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e540: 0x90420043  lbu         $v0, 0x43($v0)
    ctx->pc = 0x34e540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x34e544: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e548: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x34e548u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34e54c: 0x2810  mfhi        $a1
    ctx->pc = 0x34e54cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x34e550: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E550u;
    SET_GPR_U32(ctx, 31, 0x34E558u);
    ctx->pc = 0x34E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E550u;
            // 0x34e554: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E558u; }
        if (ctx->pc != 0x34E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E558u; }
        if (ctx->pc != 0x34E558u) { return; }
    }
    ctx->pc = 0x34E558u;
label_34e558:
    // 0x34e558: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e55c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e560: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e564: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x34e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e568: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x34e568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x34e56c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x34E56Cu;
    {
        const bool branch_taken_0x34e56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34e56c) {
            ctx->pc = 0x34E620u;
            goto label_34e620;
        }
    }
    ctx->pc = 0x34E574u;
    // 0x34e574: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x34e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e578: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x34e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x34e57c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x34e57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34e580: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e584: 0x90a30044  lbu         $v1, 0x44($a1)
    ctx->pc = 0x34e584u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x34e588: 0x24429568  addiu       $v0, $v0, -0x6A98
    ctx->pc = 0x34e588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940008));
    // 0x34e58c: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e590: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x34e590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x34e594: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e5a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5a4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x34e5a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e5a8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e5a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5ac: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E5ACu;
    SET_GPR_U32(ctx, 31, 0x34E5B4u);
    ctx->pc = 0x34E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E5ACu;
            // 0x34e5b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5B4u; }
        if (ctx->pc != 0x34E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5B4u; }
        if (ctx->pc != 0x34E5B4u) { return; }
    }
    ctx->pc = 0x34E5B4u;
label_34e5b4:
    // 0x34e5b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e5b8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e5bc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e5bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e5c4: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e5c8: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x34e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x34e5cc: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34e5d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e5d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e5d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e5dc: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E5DCu;
    SET_GPR_U32(ctx, 31, 0x34E5E4u);
    ctx->pc = 0x34E5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E5DCu;
            // 0x34e5e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5E4u; }
        if (ctx->pc != 0x34E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E5E4u; }
        if (ctx->pc != 0x34E5E4u) { return; }
    }
    ctx->pc = 0x34E5E4u;
label_34e5e4:
    // 0x34e5e4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e5e8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e5ec: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e5f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e5f4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x34e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x34e5f8: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34e5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34e5fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e600: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e604: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e608: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x34e608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34e60c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E60Cu;
    SET_GPR_U32(ctx, 31, 0x34E614u);
    ctx->pc = 0x34E610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E60Cu;
            // 0x34e610: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E614u; }
        if (ctx->pc != 0x34E614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E614u; }
        if (ctx->pc != 0x34E614u) { return; }
    }
    ctx->pc = 0x34E614u;
label_34e614:
    // 0x34e614: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x34E614u;
    {
        const bool branch_taken_0x34e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e614) {
            ctx->pc = 0x34E6A8u;
            goto label_34e6a8;
        }
    }
    ctx->pc = 0x34E61Cu;
    // 0x34e61c: 0x0  nop
    ctx->pc = 0x34e61cu;
    // NOP
label_34e620:
    // 0x34e620: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e624: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e628: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e62c: 0x90a30044  lbu         $v1, 0x44($a1)
    ctx->pc = 0x34e62cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x34e630: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x34e630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x34e634: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x34e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x34e638: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e63c: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x34e63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x34e640: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e64c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x34e64cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34e650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e654: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e658: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E658u;
    SET_GPR_U32(ctx, 31, 0x34E660u);
    ctx->pc = 0x34E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E658u;
            // 0x34e65c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E660u; }
        if (ctx->pc != 0x34E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E660u; }
        if (ctx->pc != 0x34E660u) { return; }
    }
    ctx->pc = 0x34E660u;
label_34e660:
    // 0x34e660: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e664: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e668: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e66c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e670: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e674: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x34e674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x34e678: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34e678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34e67c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e688: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E688u;
    SET_GPR_U32(ctx, 31, 0x34E690u);
    ctx->pc = 0x34E68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E688u;
            // 0x34e68c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E690u; }
        if (ctx->pc != 0x34E690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E690u; }
        if (ctx->pc != 0x34E690u) { return; }
    }
    ctx->pc = 0x34E690u;
label_34e690:
    // 0x34e690: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34E690u;
    {
        const bool branch_taken_0x34e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e690) {
            ctx->pc = 0x34E6A8u;
            goto label_34e6a8;
        }
    }
    ctx->pc = 0x34E698u;
label_34e698:
    // 0x34e698: 0x293082a  slt         $at, $s4, $s3
    ctx->pc = 0x34e698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34e69c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E69Cu;
    {
        const bool branch_taken_0x34e69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e69c) {
            ctx->pc = 0x34E6A8u;
            goto label_34e6a8;
        }
    }
    ctx->pc = 0x34E6A4u;
    // 0x34e6a4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x34e6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34e6a8:
    // 0x34e6a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34e6a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34e6ac: 0x2a820007  slti        $v0, $s4, 0x7
    ctx->pc = 0x34e6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x34e6b0: 0x2631004c  addiu       $s1, $s1, 0x4C
    ctx->pc = 0x34e6b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x34e6b4: 0x1440ff28  bnez        $v0, . + 4 + (-0xD8 << 2)
    ctx->pc = 0x34E6B4u;
    {
        const bool branch_taken_0x34e6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E6B4u;
            // 0x34e6b8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e6b4) {
            ctx->pc = 0x34E358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34e358;
        }
    }
    ctx->pc = 0x34E6BCu;
    // 0x34e6bc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x34e6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x34e6c0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E6C0u;
    {
        const bool branch_taken_0x34e6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e6c0) {
            ctx->pc = 0x34E6C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E6C0u;
            // 0x34e6c4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E6CCu;
            goto label_34e6cc;
        }
    }
    ctx->pc = 0x34E6C8u;
    // 0x34e6c8: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x34e6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34e6cc:
    // 0x34e6cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e6d0: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x34e6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x34e6d4: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34e6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34e6d8: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x34e6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x34e6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34e6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e6e4: 0x2623026  xor         $a2, $s3, $v0
    ctx->pc = 0x34e6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x34e6e8: 0xc0d3878  jal         func_34E1E0
    ctx->pc = 0x34E6E8u;
    SET_GPR_U32(ctx, 31, 0x34E6F0u);
    ctx->pc = 0x34E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E6E8u;
            // 0x34e6ec: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E1E0u;
    goto label_34e1e0;
    ctx->pc = 0x34E6F0u;
label_34e6f0:
    // 0x34e6f0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34e6f4: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34e6f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34e6f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x34E6F8u;
    {
        const bool branch_taken_0x34e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e6f8) {
            ctx->pc = 0x34E6FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E6F8u;
            // 0x34e6fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E738u;
            goto label_34e738;
        }
    }
    ctx->pc = 0x34E700u;
    // 0x34e700: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e704: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e708: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34e708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e70c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34e70cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e710: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e714: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e718: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x34e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x34e71c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x34e71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34e720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e728: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E728u;
    SET_GPR_U32(ctx, 31, 0x34E730u);
    ctx->pc = 0x34E72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E728u;
            // 0x34e72c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E730u; }
        if (ctx->pc != 0x34E730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E730u; }
        if (ctx->pc != 0x34E730u) { return; }
    }
    ctx->pc = 0x34E730u;
label_34e730:
    // 0x34e730: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34E730u;
    {
        const bool branch_taken_0x34e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E730u;
            // 0x34e734: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e730) {
            ctx->pc = 0x34E768u;
            goto label_34e768;
        }
    }
    ctx->pc = 0x34E738u;
label_34e738:
    // 0x34e738: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e73c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34e73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e740: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34e740u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e744: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e748: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e74c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x34e74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x34e750: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x34e750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34e754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e758: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e758u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e75c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E75Cu;
    SET_GPR_U32(ctx, 31, 0x34E764u);
    ctx->pc = 0x34E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E75Cu;
            // 0x34e760: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E764u; }
        if (ctx->pc != 0x34E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E764u; }
        if (ctx->pc != 0x34E764u) { return; }
    }
    ctx->pc = 0x34E764u;
label_34e764:
    // 0x34e764: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34e764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34e768:
    // 0x34e768: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34e768u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34e76c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34e76cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34e770: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34e770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e774: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34e774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34e778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e77c: 0x3e00008  jr          $ra
    ctx->pc = 0x34E77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E77Cu;
            // 0x34e780: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E784u;
    // 0x34e784: 0x0  nop
    ctx->pc = 0x34e784u;
    // NOP
    // 0x34e788: 0x0  nop
    ctx->pc = 0x34e788u;
    // NOP
    // 0x34e78c: 0x0  nop
    ctx->pc = 0x34e78cu;
    // NOP
label_34e790:
    // 0x34e790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x34e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x34e794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34e798: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x34e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x34e79c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x34e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x34e7a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34e7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34e7a4: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x34e7a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e7a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34e7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34e7ac: 0xc082918  jal         func_20A460
    ctx->pc = 0x34E7ACu;
    SET_GPR_U32(ctx, 31, 0x34E7B4u);
    ctx->pc = 0x34E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7ACu;
            // 0x34e7b0: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (runtime->hasFunction(0x20A460u)) {
        auto targetFn = runtime->lookupFunction(0x20A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7B4u; }
        if (ctx->pc != 0x34E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A460_0x20a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7B4u; }
        if (ctx->pc != 0x34E7B4u) { return; }
    }
    ctx->pc = 0x34E7B4u;
label_34e7b4:
    // 0x34e7b4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e7b8: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34e7bc: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e7c0: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34E7C0u;
    SET_GPR_U32(ctx, 31, 0x34E7C8u);
    ctx->pc = 0x34E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7C0u;
            // 0x34e7c4: 0x24a595a0  addiu       $a1, $a1, -0x6A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (runtime->hasFunction(0x20E310u)) {
        auto targetFn = runtime->lookupFunction(0x20E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7C8u; }
        if (ctx->pc != 0x34E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E310_0x20e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7C8u; }
        if (ctx->pc != 0x34E7C8u) { return; }
    }
    ctx->pc = 0x34E7C8u;
label_34e7c8:
    // 0x34e7c8: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34e7cc: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34e7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34e7d0: 0x8c44dd90  lw          $a0, -0x2270($v0)
    ctx->pc = 0x34e7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34e7d4: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e7d8: 0x24a59090  addiu       $a1, $a1, -0x6F70
    ctx->pc = 0x34e7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938768));
    // 0x34e7dc: 0xc083930  jal         func_20E4C0
    ctx->pc = 0x34E7DCu;
    SET_GPR_U32(ctx, 31, 0x34E7E4u);
    ctx->pc = 0x34E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E7DCu;
            // 0x34e7e0: 0x24c69480  addiu       $a2, $a2, -0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E4C0u;
    if (runtime->hasFunction(0x20E4C0u)) {
        auto targetFn = runtime->lookupFunction(0x20E4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7E4u; }
        if (ctx->pc != 0x34E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E4C0_0x20e4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E7E4u; }
        if (ctx->pc != 0x34E7E4u) { return; }
    }
    ctx->pc = 0x34E7E4u;
label_34e7e4:
    // 0x34e7e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e7e8: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e7ec: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34e7f0: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34e7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34e7f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34e7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e7f8: 0x24c69090  addiu       $a2, $a2, -0x6F70
    ctx->pc = 0x34e7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938768));
    // 0x34e7fc: 0x24e79580  addiu       $a3, $a3, -0x6A80
    ctx->pc = 0x34e7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940032));
    // 0x34e800: 0xc083940  jal         func_20E500
    ctx->pc = 0x34E800u;
    SET_GPR_U32(ctx, 31, 0x34E808u);
    ctx->pc = 0x34E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E800u;
            // 0x34e804: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (runtime->hasFunction(0x20E500u)) {
        auto targetFn = runtime->lookupFunction(0x20E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E808u; }
        if (ctx->pc != 0x34E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E500_0x20e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E808u; }
        if (ctx->pc != 0x34E808u) { return; }
    }
    ctx->pc = 0x34E808u;
label_34e808:
    // 0x34e808: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e80c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34e80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34e810: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x34e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x34e814: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34e814u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34e818: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x34e818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e81c: 0x24c69090  addiu       $a2, $a2, -0x6F70
    ctx->pc = 0x34e81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938768));
    // 0x34e820: 0x24e79590  addiu       $a3, $a3, -0x6A70
    ctx->pc = 0x34e820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940048));
    // 0x34e824: 0xc083940  jal         func_20E500
    ctx->pc = 0x34E824u;
    SET_GPR_U32(ctx, 31, 0x34E82Cu);
    ctx->pc = 0x34E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E824u;
            // 0x34e828: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (runtime->hasFunction(0x20E500u)) {
        auto targetFn = runtime->lookupFunction(0x20E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E82Cu; }
        if (ctx->pc != 0x34E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E500_0x20e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E82Cu; }
        if (ctx->pc != 0x34E82Cu) { return; }
    }
    ctx->pc = 0x34E82Cu;
label_34e82c:
    // 0x34e82c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x34e82cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e830: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34e830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e834: 0x24100078  addiu       $s0, $zero, 0x78
    ctx->pc = 0x34e834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_34e838:
    // 0x34e838: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e83c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e840: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e844: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x34e844u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x34e848: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x34E848u;
    {
        const bool branch_taken_0x34e848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e848) {
            ctx->pc = 0x34EBD8u;
            goto label_34ebd8;
        }
    }
    ctx->pc = 0x34E850u;
    // 0x34e850: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x34e850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x34e854: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E854u;
    {
        const bool branch_taken_0x34e854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e854) {
            ctx->pc = 0x34E858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34E854u;
            // 0x34e858: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34E860u;
            goto label_34e860;
        }
    }
    ctx->pc = 0x34E85Cu;
    // 0x34e85c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x34e85cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34e860:
    // 0x34e860: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e868: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34e86c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e870: 0x2823026  xor         $a2, $s4, $v0
    ctx->pc = 0x34e870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x34e874: 0xc0d3878  jal         func_34E1E0
    ctx->pc = 0x34E874u;
    SET_GPR_U32(ctx, 31, 0x34E87Cu);
    ctx->pc = 0x34E878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E874u;
            // 0x34e878: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E1E0u;
    goto label_34e1e0;
    ctx->pc = 0x34E87Cu;
label_34e87c:
    // 0x34e87c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e880: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e888: 0x90420041  lbu         $v0, 0x41($v0)
    ctx->pc = 0x34e888u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 65)));
    // 0x34e88c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x34e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x34e890: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x34e890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34e894: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x34E894u;
    {
        const bool branch_taken_0x34e894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e894) {
            ctx->pc = 0x34E8D8u;
            goto label_34e8d8;
        }
    }
    ctx->pc = 0x34E89Cu;
    // 0x34e89c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e8a0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e8a4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e8a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e8ac: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34e8b0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x34e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x34e8b4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x34e8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34e8b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e8c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8c4: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E8C4u;
    SET_GPR_U32(ctx, 31, 0x34E8CCu);
    ctx->pc = 0x34E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8C4u;
            // 0x34e8c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8CCu; }
        if (ctx->pc != 0x34E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8CCu; }
        if (ctx->pc != 0x34E8CCu) { return; }
    }
    ctx->pc = 0x34E8CCu;
label_34e8cc:
    // 0x34e8cc: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x34E8CCu;
    {
        const bool branch_taken_0x34e8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8cc) {
            ctx->pc = 0x34EBE8u;
            goto label_34ebe8;
        }
    }
    ctx->pc = 0x34E8D4u;
    // 0x34e8d4: 0x0  nop
    ctx->pc = 0x34e8d4u;
    // NOP
label_34e8d8:
    // 0x34e8d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e8dc: 0xc082998  jal         func_20A660
    ctx->pc = 0x34E8DCu;
    SET_GPR_U32(ctx, 31, 0x34E8E4u);
    ctx->pc = 0x34E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E8DCu;
            // 0x34e8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8E4u; }
        if (ctx->pc != 0x34E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A660_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E8E4u; }
        if (ctx->pc != 0x34E8E4u) { return; }
    }
    ctx->pc = 0x34E8E4u;
label_34e8e4:
    // 0x34e8e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e8e8: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e8ec: 0x514821  addu        $t1, $v0, $s1
    ctx->pc = 0x34e8ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e8f0: 0x91230042  lbu         $v1, 0x42($t1)
    ctx->pc = 0x34e8f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 66)));
    // 0x34e8f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x34e8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34e8f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34E8F8u;
    {
        const bool branch_taken_0x34e8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e8f8) {
            ctx->pc = 0x34E920u;
            goto label_34e920;
        }
    }
    ctx->pc = 0x34E900u;
    // 0x34e900: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e908: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x34e908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e90c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x34e90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e910: 0xc0836e0  jal         func_20DB80
    ctx->pc = 0x34E910u;
    SET_GPR_U32(ctx, 31, 0x34E918u);
    ctx->pc = 0x34E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E910u;
            // 0x34e914: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E918u; }
        if (ctx->pc != 0x34E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB80_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E918u; }
        if (ctx->pc != 0x34E918u) { return; }
    }
    ctx->pc = 0x34E918u;
label_34e918:
    // 0x34e918: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34E918u;
    {
        const bool branch_taken_0x34e918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e918) {
            ctx->pc = 0x34E960u;
            goto label_34e960;
        }
    }
    ctx->pc = 0x34E920u;
label_34e920:
    // 0x34e920: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x34e920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x34e924: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34E924u;
    {
        const bool branch_taken_0x34e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e924) {
            ctx->pc = 0x34E950u;
            goto label_34e950;
        }
    }
    ctx->pc = 0x34E92Cu;
    // 0x34e92c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34e930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e934: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x34e934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e938: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x34e938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34e93c: 0xc0836e0  jal         func_20DB80
    ctx->pc = 0x34E93Cu;
    SET_GPR_U32(ctx, 31, 0x34E944u);
    ctx->pc = 0x34E940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E93Cu;
            // 0x34e940: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E944u; }
        if (ctx->pc != 0x34E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB80_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E944u; }
        if (ctx->pc != 0x34E944u) { return; }
    }
    ctx->pc = 0x34E944u;
label_34e944:
    // 0x34e944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34E944u;
    {
        const bool branch_taken_0x34e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e944) {
            ctx->pc = 0x34E960u;
            goto label_34e960;
        }
    }
    ctx->pc = 0x34E94Cu;
    // 0x34e94c: 0x0  nop
    ctx->pc = 0x34e94cu;
    // NOP
label_34e950:
    // 0x34e950: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x34e950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e954: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x34e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34e958: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34E958u;
    SET_GPR_U32(ctx, 31, 0x34E960u);
    ctx->pc = 0x34E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E958u;
            // 0x34e95c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (runtime->hasFunction(0x20DB00u)) {
        auto targetFn = runtime->lookupFunction(0x20DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E960u; }
        if (ctx->pc != 0x34E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DB00_0x20db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E960u; }
        if (ctx->pc != 0x34E960u) { return; }
    }
    ctx->pc = 0x34E960u;
label_34e960:
    // 0x34e960: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e964: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34e968: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34e96c: 0x90440043  lbu         $a0, 0x43($v0)
    ctx->pc = 0x34e96cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x34e970: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34E970u;
    {
        const bool branch_taken_0x34e970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e970) {
            ctx->pc = 0x34E988u;
            goto label_34e988;
        }
    }
    ctx->pc = 0x34E978u;
    // 0x34e978: 0x28810065  slti        $at, $a0, 0x65
    ctx->pc = 0x34e978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x34e97c: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x34E97Cu;
    {
        const bool branch_taken_0x34e97c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e97c) {
            ctx->pc = 0x34EA20u;
            goto label_34ea20;
        }
    }
    ctx->pc = 0x34E984u;
    // 0x34e984: 0x0  nop
    ctx->pc = 0x34e984u;
    // NOP
label_34e988:
    // 0x34e988: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e98c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e990: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e994: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34e998: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34e998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e99c: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x34e99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x34e9a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e9a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e9a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9ac: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e9acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9b0: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E9B0u;
    SET_GPR_U32(ctx, 31, 0x34E9B8u);
    ctx->pc = 0x34E9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E9B0u;
            // 0x34e9b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9B8u; }
        if (ctx->pc != 0x34E9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9B8u; }
        if (ctx->pc != 0x34E9B8u) { return; }
    }
    ctx->pc = 0x34E9B8u;
label_34e9b8:
    // 0x34e9b8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e9bc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e9c0: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34e9c4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e9c8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e9cc: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x34e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x34e9d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34e9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34e9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34e9d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9dc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34e9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e9e0: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34E9E0u;
    SET_GPR_U32(ctx, 31, 0x34E9E8u);
    ctx->pc = 0x34E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E9E0u;
            // 0x34e9e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9E8u; }
        if (ctx->pc != 0x34E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E9E8u; }
        if (ctx->pc != 0x34E9E8u) { return; }
    }
    ctx->pc = 0x34E9E8u;
label_34e9e8:
    // 0x34e9e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34e9ec: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34e9f0: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34e9f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34e9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34e9f8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x34e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34e9fc: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x34e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x34ea00: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34ea00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ea04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34ea08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea0c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34ea0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea10: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EA10u;
    SET_GPR_U32(ctx, 31, 0x34EA18u);
    ctx->pc = 0x34EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EA10u;
            // 0x34ea14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA18u; }
        if (ctx->pc != 0x34EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA18u; }
        if (ctx->pc != 0x34EA18u) { return; }
    }
    ctx->pc = 0x34EA18u;
label_34ea18:
    // 0x34ea18: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x34EA18u;
    {
        const bool branch_taken_0x34ea18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ea18) {
            ctx->pc = 0x34EB18u;
            goto label_34eb18;
        }
    }
    ctx->pc = 0x34EA20u;
label_34ea20:
    // 0x34ea20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34ea24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34ea28: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x34ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x34ea2c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x34ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x34ea30: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x34ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x34ea34: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x34ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x34ea38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34ea38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea3c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x34ea3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34ea40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ea40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34ea44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea48: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34ea48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34ea4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea50: 0x1010  mfhi        $v0
    ctx->pc = 0x34ea50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34ea54: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ea58: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x34ea58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x34ea5c: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34ea60: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EA60u;
    SET_GPR_U32(ctx, 31, 0x34EA68u);
    ctx->pc = 0x34EA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EA60u;
            // 0x34ea64: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA68u; }
        if (ctx->pc != 0x34EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EA68u; }
        if (ctx->pc != 0x34EA68u) { return; }
    }
    ctx->pc = 0x34EA68u;
label_34ea68:
    // 0x34ea68: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x34ea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34ea6c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ea70: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x34ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34ea74: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ea78: 0x8c454088  lw          $a1, 0x4088($v0)
    ctx->pc = 0x34ea78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34ea7c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x34ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x34ea80: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34ea84: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x34ea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x34ea88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34ea88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ea8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ea90: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x34ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34ea94: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x34ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x34ea98: 0x90a50043  lbu         $a1, 0x43($a1)
    ctx->pc = 0x34ea98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 67)));
    // 0x34ea9c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x34ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x34eaa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34eaa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eaa4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34eaa4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eaa8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34eaa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eaac: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x34eaacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34eab0: 0x1810  mfhi        $v1
    ctx->pc = 0x34eab0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x34eab4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x34eab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34eab8: 0x1010  mfhi        $v0
    ctx->pc = 0x34eab8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34eabc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x34eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x34eac0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x34eac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x34eac4: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EAC4u;
    SET_GPR_U32(ctx, 31, 0x34EACCu);
    ctx->pc = 0x34EAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EAC4u;
            // 0x34eac8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EACCu; }
        if (ctx->pc != 0x34EACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EACCu; }
        if (ctx->pc != 0x34EACCu) { return; }
    }
    ctx->pc = 0x34EACCu;
label_34eacc:
    // 0x34eacc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x34eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34ead0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ead4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x34ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34ead8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34eadc: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34eae0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x34eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34eae4: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x34eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
    // 0x34eae8: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x34eae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x34eaec: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34eaecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eaf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34eaf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eaf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34eaf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34eaf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eafc: 0x90420043  lbu         $v0, 0x43($v0)
    ctx->pc = 0x34eafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x34eb00: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34eb00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb04: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x34eb04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34eb08: 0x2810  mfhi        $a1
    ctx->pc = 0x34eb08u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x34eb0c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EB0Cu;
    SET_GPR_U32(ctx, 31, 0x34EB14u);
    ctx->pc = 0x34EB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB0Cu;
            // 0x34eb10: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB14u; }
        if (ctx->pc != 0x34EB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB14u; }
        if (ctx->pc != 0x34EB14u) { return; }
    }
    ctx->pc = 0x34EB14u;
label_34eb14:
    // 0x34eb14: 0x0  nop
    ctx->pc = 0x34eb14u;
    // NOP
label_34eb18:
    // 0x34eb18: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34eb1c: 0x8c434088  lw          $v1, 0x4088($v0)
    ctx->pc = 0x34eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34eb20: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34eb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eb28: 0x90630040  lbu         $v1, 0x40($v1)
    ctx->pc = 0x34eb28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x34eb2c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x34EB2Cu;
    {
        const bool branch_taken_0x34eb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34eb2c) {
            ctx->pc = 0x34EBA0u;
            goto label_34eba0;
        }
    }
    ctx->pc = 0x34EB34u;
    // 0x34eb34: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34eb38: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34eb3c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34eb3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34eb44: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34eb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34eb48: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x34eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x34eb4c: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34eb50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34eb50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34eb54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34eb58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb5c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EB5Cu;
    SET_GPR_U32(ctx, 31, 0x34EB64u);
    ctx->pc = 0x34EB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB5Cu;
            // 0x34eb60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB64u; }
        if (ctx->pc != 0x34EB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB64u; }
        if (ctx->pc != 0x34EB64u) { return; }
    }
    ctx->pc = 0x34EB64u;
label_34eb64:
    // 0x34eb64: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34eb68: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34eb6c: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34eb70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34eb74: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x34eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x34eb78: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34eb7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34eb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34eb80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34eb84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eb88: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x34eb88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34eb8c: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EB8Cu;
    SET_GPR_U32(ctx, 31, 0x34EB94u);
    ctx->pc = 0x34EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EB8Cu;
            // 0x34eb90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB94u; }
        if (ctx->pc != 0x34EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EB94u; }
        if (ctx->pc != 0x34EB94u) { return; }
    }
    ctx->pc = 0x34EB94u;
label_34eb94:
    // 0x34eb94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x34EB94u;
    {
        const bool branch_taken_0x34eb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eb94) {
            ctx->pc = 0x34EBE8u;
            goto label_34ebe8;
        }
    }
    ctx->pc = 0x34EB9Cu;
    // 0x34eb9c: 0x0  nop
    ctx->pc = 0x34eb9cu;
    // NOP
label_34eba0:
    // 0x34eba0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34eba4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34eba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34eba8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x34eba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebac: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34ebb0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34ebb4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x34ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x34ebb8: 0x240601e8  addiu       $a2, $zero, 0x1E8
    ctx->pc = 0x34ebb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    // 0x34ebbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34ebbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ebc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34ebc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ebc8: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EBC8u;
    SET_GPR_U32(ctx, 31, 0x34EBD0u);
    ctx->pc = 0x34EBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EBC8u;
            // 0x34ebcc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBD0u; }
        if (ctx->pc != 0x34EBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EBD0u; }
        if (ctx->pc != 0x34EBD0u) { return; }
    }
    ctx->pc = 0x34EBD0u;
label_34ebd0:
    // 0x34ebd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34EBD0u;
    {
        const bool branch_taken_0x34ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ebd0) {
            ctx->pc = 0x34EBE8u;
            goto label_34ebe8;
        }
    }
    ctx->pc = 0x34EBD8u;
label_34ebd8:
    // 0x34ebd8: 0x293082a  slt         $at, $s4, $s3
    ctx->pc = 0x34ebd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x34ebdc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x34EBDCu;
    {
        const bool branch_taken_0x34ebdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ebdc) {
            ctx->pc = 0x34EBE8u;
            goto label_34ebe8;
        }
    }
    ctx->pc = 0x34EBE4u;
    // 0x34ebe4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x34ebe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_34ebe8:
    // 0x34ebe8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34ebe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34ebec: 0x2a820007  slti        $v0, $s4, 0x7
    ctx->pc = 0x34ebecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x34ebf0: 0x2631004c  addiu       $s1, $s1, 0x4C
    ctx->pc = 0x34ebf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x34ebf4: 0x1440ff10  bnez        $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x34EBF4u;
    {
        const bool branch_taken_0x34ebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EBF4u;
            // 0x34ebf8: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebf4) {
            ctx->pc = 0x34E838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34e838;
        }
    }
    ctx->pc = 0x34EBFCu;
    // 0x34ebfc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x34ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x34ec00: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34EC00u;
    {
        const bool branch_taken_0x34ec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ec00) {
            ctx->pc = 0x34EC04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC00u;
            // 0x34ec04: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EC0Cu;
            goto label_34ec0c;
        }
    }
    ctx->pc = 0x34EC08u;
    // 0x34ec08: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x34ec08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34ec0c:
    // 0x34ec0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ec10: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x34ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x34ec14: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34ec18: 0x24710078  addiu       $s1, $v1, 0x78
    ctx->pc = 0x34ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x34ec1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec24: 0x2623026  xor         $a2, $s3, $v0
    ctx->pc = 0x34ec24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x34ec28: 0xc0d3878  jal         func_34E1E0
    ctx->pc = 0x34EC28u;
    SET_GPR_U32(ctx, 31, 0x34EC30u);
    ctx->pc = 0x34EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC28u;
            // 0x34ec2c: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x34E1E0u;
    goto label_34e1e0;
    ctx->pc = 0x34EC30u;
label_34ec30:
    // 0x34ec30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34ec34: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ec38: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34ec3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34ec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34ec40: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x34ec40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x34ec44: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x34ec44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x34ec48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34ec48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ec4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34ec50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec54: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34ec54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec58: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EC58u;
    SET_GPR_U32(ctx, 31, 0x34EC60u);
    ctx->pc = 0x34EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC58u;
            // 0x34ec5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC60u; }
        if (ctx->pc != 0x34EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC60u; }
        if (ctx->pc != 0x34EC60u) { return; }
    }
    ctx->pc = 0x34EC60u;
label_34ec60:
    // 0x34ec60: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34ec64: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ec68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x34ec68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec6c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x34ec6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec70: 0x24849090  addiu       $a0, $a0, -0x6F70
    ctx->pc = 0x34ec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938768));
    // 0x34ec74: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34ec78: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x34ec78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x34ec7c: 0x24060138  addiu       $a2, $zero, 0x138
    ctx->pc = 0x34ec7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x34ec80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34ec80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34ec84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ec88: 0xc08388c  jal         func_20E230
    ctx->pc = 0x34EC88u;
    SET_GPR_U32(ctx, 31, 0x34EC90u);
    ctx->pc = 0x34EC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EC88u;
            // 0x34ec8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E230u;
    if (runtime->hasFunction(0x20E230u)) {
        auto targetFn = runtime->lookupFunction(0x20E230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC90u; }
        if (ctx->pc != 0x34EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E230_0x20e230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EC90u; }
        if (ctx->pc != 0x34EC90u) { return; }
    }
    ctx->pc = 0x34EC90u;
label_34ec90:
    // 0x34ec90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34ec94: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x34ec94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34ec98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x34ec98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34ec9c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34ec9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eca0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34eca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eca4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34eca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eca8: 0x3e00008  jr          $ra
    ctx->pc = 0x34ECA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ECACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECA8u;
            // 0x34ecac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34ECB0u;
label_34ecb0:
    // 0x34ecb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34ecb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x34ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x34ecb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34ecbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34ecc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34ecc4: 0x3c1301df  lui         $s3, 0x1DF
    ctx->pc = 0x34ecc4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)479 << 16));
    // 0x34ecc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34eccc: 0x2673ddc0  addiu       $s3, $s3, -0x2240
    ctx->pc = 0x34ecccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958528));
    // 0x34ecd0: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34ECD0u;
    SET_GPR_U32(ctx, 31, 0x34ECD8u);
    ctx->pc = 0x34ECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECD0u;
            // 0x34ecd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (runtime->hasFunction(0x343080u)) {
        auto targetFn = runtime->lookupFunction(0x343080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECD8u; }
        if (ctx->pc != 0x34ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343080_0x343080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ECD8u; }
        if (ctx->pc != 0x34ECD8u) { return; }
    }
    ctx->pc = 0x34ECD8u;
label_34ecd8:
    // 0x34ecd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x34ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34ecdc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34ECDCu;
    {
        const bool branch_taken_0x34ecdc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x34ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECDCu;
            // 0x34ece0: 0x228c3  sra         $a1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecdc) {
            ctx->pc = 0x34ECECu;
            goto label_34ecec;
        }
    }
    ctx->pc = 0x34ECE4u;
    // 0x34ece4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x34ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x34ece8: 0x228c3  sra         $a1, $v0, 3
    ctx->pc = 0x34ece8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 3));
label_34ecec:
    // 0x34ecec: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x34ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34ecf0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ecf4: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x34ECF4u;
    {
        const bool branch_taken_0x34ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECF4u;
            // 0x34ecf8: 0xac454368  sw          $a1, 0x4368($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17256), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecf4) {
            ctx->pc = 0x34EE38u;
            goto label_34ee38;
        }
    }
    ctx->pc = 0x34ECFCu;
    // 0x34ecfc: 0x1860005a  blez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x34ECFCu;
    {
        const bool branch_taken_0x34ecfc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ECFCu;
            // 0x34ed00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecfc) {
            ctx->pc = 0x34EE68u;
            goto label_34ee68;
        }
    }
    ctx->pc = 0x34ED04u;
    // 0x34ed04: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x34ed04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ed08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34ed08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ed0c:
    // 0x34ed0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ed10: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x34ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x34ed14: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34ed18: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34ed1c: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34ED1Cu;
    SET_GPR_U32(ctx, 31, 0x34ED24u);
    ctx->pc = 0x34ED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED1Cu;
            // 0x34ed20: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED24u; }
        if (ctx->pc != 0x34ED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED24u; }
        if (ctx->pc != 0x34ED24u) { return; }
    }
    ctx->pc = 0x34ED24u;
label_34ed24:
    // 0x34ed24: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ed28: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34ed2c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34ed30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34ed34: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34ED34u;
    SET_GPR_U32(ctx, 31, 0x34ED3Cu);
    ctx->pc = 0x34ED38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ED34u;
            // 0x34ed38: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED3Cu; }
        if (ctx->pc != 0x34ED3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ED3Cu; }
        if (ctx->pc != 0x34ED3Cu) { return; }
    }
    ctx->pc = 0x34ED3Cu;
label_34ed3c:
    // 0x34ed3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ed40: 0x8e490038  lw          $t1, 0x38($s2)
    ctx->pc = 0x34ed40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x34ed44: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34ed48: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34ed48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34ed4c: 0x104402  srl         $t0, $s0, 16
    ctx->pc = 0x34ed4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x34ed50: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34ed54: 0x103a02  srl         $a3, $s0, 8
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x34ed58: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34ed5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34ed60: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34ed64: 0xa0490040  sb          $t1, 0x40($v0)
    ctx->pc = 0x34ed64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 9));
    // 0x34ed68: 0x8cc64088  lw          $a2, 0x4088($a2)
    ctx->pc = 0x34ed68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16520)));
    // 0x34ed6c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ed70: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x34ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x34ed74: 0xa0c80043  sb          $t0, 0x43($a2)
    ctx->pc = 0x34ed74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 67), (uint8_t)GPR_U32(ctx, 8));
    // 0x34ed78: 0x8ca54088  lw          $a1, 0x4088($a1)
    ctx->pc = 0x34ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16520)));
    // 0x34ed7c: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x34ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34ed80: 0xa0a70041  sb          $a3, 0x41($a1)
    ctx->pc = 0x34ed80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 65), (uint8_t)GPR_U32(ctx, 7));
    // 0x34ed84: 0x8c844088  lw          $a0, 0x4088($a0)
    ctx->pc = 0x34ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16520)));
    // 0x34ed88: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34ed8c: 0xa0900044  sb          $s0, 0x44($a0)
    ctx->pc = 0x34ed8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 16));
    // 0x34ed90: 0x8c634088  lw          $v1, 0x4088($v1)
    ctx->pc = 0x34ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34ed94: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x34ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34ed98: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34ed9c: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x34ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x34eda0: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34eda4: 0xc0d2938  jal         func_34A4E0
    ctx->pc = 0x34EDA4u;
    SET_GPR_U32(ctx, 31, 0x34EDACu);
    ctx->pc = 0x34EDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EDA4u;
            // 0x34eda8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A4E0u;
    if (runtime->hasFunction(0x34A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x34A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EDACu; }
        if (ctx->pc != 0x34EDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A4E0_0x34a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EDACu; }
        if (ctx->pc != 0x34EDACu) { return; }
    }
    ctx->pc = 0x34EDACu;
label_34edac:
    // 0x34edac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34edacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34edb0: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34edb4: 0x8c844088  lw          $a0, 0x4088($a0)
    ctx->pc = 0x34edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16520)));
    // 0x34edb8: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34edb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34edbc: 0xa0820042  sb          $v0, 0x42($a0)
    ctx->pc = 0x34edbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x34edc0: 0x8c62dd90  lw          $v0, -0x2270($v1)
    ctx->pc = 0x34edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x34edc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34EDC4u;
    {
        const bool branch_taken_0x34edc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34edc4) {
            ctx->pc = 0x34EDE0u;
            goto label_34ede0;
        }
    }
    ctx->pc = 0x34EDCCu;
    // 0x34edcc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34edd0: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34edd4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34edd8: 0xa0400041  sb          $zero, 0x41($v0)
    ctx->pc = 0x34edd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x34eddc: 0x0  nop
    ctx->pc = 0x34eddcu;
    // NOP
label_34ede0:
    // 0x34ede0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34ede4: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34ede8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34EDE8u;
    {
        const bool branch_taken_0x34ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ede8) {
            ctx->pc = 0x34EE18u;
            goto label_34ee18;
        }
    }
    ctx->pc = 0x34EDF0u;
    // 0x34edf0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34edf4: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34edf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34edfc: 0x24430043  addiu       $v1, $v0, 0x43
    ctx->pc = 0x34edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 67));
    // 0x34ee00: 0x90420043  lbu         $v0, 0x43($v0)
    ctx->pc = 0x34ee00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 67)));
    // 0x34ee04: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x34ee04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x34ee08: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EE08u;
    {
        const bool branch_taken_0x34ee08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ee08) {
            ctx->pc = 0x34EE18u;
            goto label_34ee18;
        }
    }
    ctx->pc = 0x34EE10u;
    // 0x34ee10: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x34ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34ee14: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x34ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_34ee18:
    // 0x34ee18: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34ee1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34ee1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x34ee20: 0x265200d8  addiu       $s2, $s2, 0xD8
    ctx->pc = 0x34ee20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    // 0x34ee24: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x34ee24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ee28: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x34EE28u;
    {
        const bool branch_taken_0x34ee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE28u;
            // 0x34ee2c: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee28) {
            ctx->pc = 0x34ED0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34ed0c;
        }
    }
    ctx->pc = 0x34EE30u;
    // 0x34ee30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34EE30u;
    {
        const bool branch_taken_0x34ee30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ee30) {
            ctx->pc = 0x34EE68u;
            goto label_34ee68;
        }
    }
    ctx->pc = 0x34EE38u;
label_34ee38:
    // 0x34ee38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ee3c: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34ee40: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x34ee40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ee44: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x34EE44u;
    {
        const bool branch_taken_0x34ee44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ee44) {
            ctx->pc = 0x34EE68u;
            goto label_34ee68;
        }
    }
    ctx->pc = 0x34EE4Cu;
    // 0x34ee4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ee50: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ee54: 0x2484e160  addiu       $a0, $a0, -0x1EA0
    ctx->pc = 0x34ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
    // 0x34ee58: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34EE58u;
    SET_GPR_U32(ctx, 31, 0x34EE60u);
    ctx->pc = 0x34EE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE58u;
            // 0x34ee5c: 0xac454370  sw          $a1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE60u; }
        if (ctx->pc != 0x34EE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EE60u; }
        if (ctx->pc != 0x34EE60u) { return; }
    }
    ctx->pc = 0x34EE60u;
label_34ee60:
    // 0x34ee60: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x34EE60u;
    {
        const bool branch_taken_0x34ee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE60u;
            // 0x34ee64: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee60) {
            ctx->pc = 0x34EEDCu;
            goto label_34eedc;
        }
    }
    ctx->pc = 0x34EE68u;
label_34ee68:
    // 0x34ee68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ee6c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ee70: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34ee74: 0x4410015  bgez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34EE74u;
    {
        const bool branch_taken_0x34ee74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x34EE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE74u;
            // 0x34ee78: 0xa460be90  sh          $zero, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee74) {
            ctx->pc = 0x34EECCu;
            goto label_34eecc;
        }
    }
    ctx->pc = 0x34EE7Cu;
    // 0x34ee7c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34ee80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ee84: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34ee84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34ee88: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EE88u;
    {
        const bool branch_taken_0x34ee88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34EE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE88u;
            // 0x34ee8c: 0xac604378  sw          $zero, 0x4378($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ee88) {
            ctx->pc = 0x34EEA8u;
            goto label_34eea8;
        }
    }
    ctx->pc = 0x34EE90u;
    // 0x34ee90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ee90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ee94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ee98: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34EE98u;
    SET_GPR_U32(ctx, 31, 0x34EEA0u);
    ctx->pc = 0x34EE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EE98u;
            // 0x34ee9c: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEA0u; }
        if (ctx->pc != 0x34EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEA0u; }
        if (ctx->pc != 0x34EEA0u) { return; }
    }
    ctx->pc = 0x34EEA0u;
label_34eea0:
    // 0x34eea0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34EEA0u;
    {
        const bool branch_taken_0x34eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eea0) {
            ctx->pc = 0x34EEB8u;
            goto label_34eeb8;
        }
    }
    ctx->pc = 0x34EEA8u;
label_34eea8:
    // 0x34eea8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34eeac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34eeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34eeb0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34EEB0u;
    SET_GPR_U32(ctx, 31, 0x34EEB8u);
    ctx->pc = 0x34EEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EEB0u;
            // 0x34eeb4: 0x2484e2b0  addiu       $a0, $a0, -0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEB8u; }
        if (ctx->pc != 0x34EEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEB8u; }
        if (ctx->pc != 0x34EEB8u) { return; }
    }
    ctx->pc = 0x34EEB8u;
label_34eeb8:
    // 0x34eeb8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34eebc: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34EEBCu;
    SET_GPR_U32(ctx, 31, 0x34EEC4u);
    ctx->pc = 0x34EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EEBCu;
            // 0x34eec0: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (runtime->hasFunction(0x343460u)) {
        auto targetFn = runtime->lookupFunction(0x343460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEC4u; }
        if (ctx->pc != 0x34EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343460_0x343460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EEC4u; }
        if (ctx->pc != 0x34EEC4u) { return; }
    }
    ctx->pc = 0x34EEC4u;
label_34eec4:
    // 0x34eec4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EEC4u;
    {
        const bool branch_taken_0x34eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34eec4) {
            ctx->pc = 0x34EED8u;
            goto label_34eed8;
        }
    }
    ctx->pc = 0x34EECCu;
label_34eecc:
    // 0x34eecc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34eed0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34EED0u;
    SET_GPR_U32(ctx, 31, 0x34EED8u);
    ctx->pc = 0x34EED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EED0u;
            // 0x34eed4: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EED8u; }
        if (ctx->pc != 0x34EED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EED8u; }
        if (ctx->pc != 0x34EED8u) { return; }
    }
    ctx->pc = 0x34EED8u;
label_34eed8:
    // 0x34eed8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x34eed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_34eedc:
    // 0x34eedc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34eedcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34eee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34eee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34eee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34eee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34eee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34eee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34eeec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34eeecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34eef0: 0x3e00008  jr          $ra
    ctx->pc = 0x34EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EEF0u;
            // 0x34eef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34EEF8u;
    // 0x34eef8: 0x0  nop
    ctx->pc = 0x34eef8u;
    // NOP
    // 0x34eefc: 0x0  nop
    ctx->pc = 0x34eefcu;
    // NOP
label_34ef00:
    // 0x34ef00: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x34ef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x34ef04: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ef08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34ef0c: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ef10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34ef14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34ef18: 0x9444be90  lhu         $a0, -0x4170($v0)
    ctx->pc = 0x34ef18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34ef1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34ef20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ef24: 0xa464be90  sh          $a0, -0x4170($v1)
    ctx->pc = 0x34ef24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
    // 0x34ef28: 0x9442be90  lhu         $v0, -0x4170($v0)
    ctx->pc = 0x34ef28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34ef2c: 0x2842012c  slti        $v0, $v0, 0x12C
    ctx->pc = 0x34ef2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x34ef30: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34EF30u;
    {
        const bool branch_taken_0x34ef30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ef30) {
            ctx->pc = 0x34EF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF30u;
            // 0x34ef34: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EF50u;
            goto label_34ef50;
        }
    }
    ctx->pc = 0x34EF38u;
    // 0x34ef38: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ef3c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34EF3Cu;
    SET_GPR_U32(ctx, 31, 0x34EF44u);
    ctx->pc = 0x34EF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF3Cu;
            // 0x34ef40: 0x2484e160  addiu       $a0, $a0, -0x1EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF44u; }
        if (ctx->pc != 0x34EF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF44u; }
        if (ctx->pc != 0x34EF44u) { return; }
    }
    ctx->pc = 0x34EF44u;
label_34ef44:
    // 0x34ef44: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x34EF44u;
    {
        const bool branch_taken_0x34ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF44u;
            // 0x34ef48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ef44) {
            ctx->pc = 0x34F328u;
            goto label_34f328;
        }
    }
    ctx->pc = 0x34EF4Cu;
    // 0x34ef4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34ef50:
    // 0x34ef50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34ef50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ef54: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34EF54u;
    SET_GPR_U32(ctx, 31, 0x34EF5Cu);
    ctx->pc = 0x34EF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF54u;
            // 0x34ef58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF5Cu; }
        if (ctx->pc != 0x34EF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF5Cu; }
        if (ctx->pc != 0x34EF5Cu) { return; }
    }
    ctx->pc = 0x34EF5Cu;
label_34ef5c:
    // 0x34ef5c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ef60: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x34ef60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34ef64: 0x8c704370  lw          $s0, 0x4370($v1)
    ctx->pc = 0x34ef64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34ef68: 0x32230200  andi        $v1, $s1, 0x200
    ctx->pc = 0x34ef68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)512);
    // 0x34ef6c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x34EF6Cu;
    {
        const bool branch_taken_0x34ef6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ef6c) {
            ctx->pc = 0x34EF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF6Cu;
            // 0x34ef70: 0x32230100  andi        $v1, $s1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EFBCu;
            goto label_34efbc;
        }
    }
    ctx->pc = 0x34EF74u;
    // 0x34ef74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ef78: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x34ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x34ef7c: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x34ef7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34ef80: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34EF80u;
    {
        const bool branch_taken_0x34ef80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ef80) {
            ctx->pc = 0x34EF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF80u;
            // 0x34ef84: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EFB0u;
            goto label_34efb0;
        }
    }
    ctx->pc = 0x34EF88u;
    // 0x34ef88: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34ef8c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34EF8Cu;
    SET_GPR_U32(ctx, 31, 0x34EF94u);
    ctx->pc = 0x34EF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EF8Cu;
            // 0x34ef90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF94u; }
        if (ctx->pc != 0x34EF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EF94u; }
        if (ctx->pc != 0x34EF94u) { return; }
    }
    ctx->pc = 0x34EF94u;
label_34ef94:
    // 0x34ef94: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34ef98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ef9c: 0x8c844370  lw          $a0, 0x4370($a0)
    ctx->pc = 0x34ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17264)));
    // 0x34efa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34efa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EFA4u;
    {
        const bool branch_taken_0x34efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFA4u;
            // 0x34efa8: 0xac644370  sw          $a0, 0x4370($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34efa4) {
            ctx->pc = 0x34EFB8u;
            goto label_34efb8;
        }
    }
    ctx->pc = 0x34EFACu;
    // 0x34efac: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34efacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_34efb0:
    // 0x34efb0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34EFB0u;
    SET_GPR_U32(ctx, 31, 0x34EFB8u);
    ctx->pc = 0x34EFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFB0u;
            // 0x34efb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFB8u; }
        if (ctx->pc != 0x34EFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFB8u; }
        if (ctx->pc != 0x34EFB8u) { return; }
    }
    ctx->pc = 0x34EFB8u;
label_34efb8:
    // 0x34efb8: 0x32230100  andi        $v1, $s1, 0x100
    ctx->pc = 0x34efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
label_34efbc:
    // 0x34efbc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34EFBCu;
    {
        const bool branch_taken_0x34efbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34efbc) {
            ctx->pc = 0x34F004u;
            goto label_34f004;
        }
    }
    ctx->pc = 0x34EFC4u;
    // 0x34efc4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34efc8: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34efcc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34EFCCu;
    {
        const bool branch_taken_0x34efcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34efcc) {
            ctx->pc = 0x34EFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFCCu;
            // 0x34efd0: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34EFFCu;
            goto label_34effc;
        }
    }
    ctx->pc = 0x34EFD4u;
    // 0x34efd4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34efd8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34EFD8u;
    SET_GPR_U32(ctx, 31, 0x34EFE0u);
    ctx->pc = 0x34EFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFD8u;
            // 0x34efdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFE0u; }
        if (ctx->pc != 0x34EFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34EFE0u; }
        if (ctx->pc != 0x34EFE0u) { return; }
    }
    ctx->pc = 0x34EFE0u;
label_34efe0:
    // 0x34efe0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34efe4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34efe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34efe8: 0x8c844370  lw          $a0, 0x4370($a0)
    ctx->pc = 0x34efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17264)));
    // 0x34efec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x34efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x34eff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EFF0u;
    {
        const bool branch_taken_0x34eff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFF0u;
            // 0x34eff4: 0xac644370  sw          $a0, 0x4370($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17264), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eff0) {
            ctx->pc = 0x34F004u;
            goto label_34f004;
        }
    }
    ctx->pc = 0x34EFF8u;
    // 0x34eff8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_34effc:
    // 0x34effc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34EFFCu;
    SET_GPR_U32(ctx, 31, 0x34F004u);
    ctx->pc = 0x34F000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34EFFCu;
            // 0x34f000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F004u; }
        if (ctx->pc != 0x34F004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F004u; }
        if (ctx->pc != 0x34F004u) { return; }
    }
    ctx->pc = 0x34F004u;
label_34f004:
    // 0x34f004: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f008: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x34f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34f00c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F00Cu;
    {
        const bool branch_taken_0x34f00c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x34f00c) {
            ctx->pc = 0x34F028u;
            goto label_34f028;
        }
    }
    ctx->pc = 0x34F014u;
    // 0x34f014: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f018: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F018u;
    SET_GPR_U32(ctx, 31, 0x34F020u);
    ctx->pc = 0x34F01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F018u;
            // 0x34f01c: 0x2484e160  addiu       $a0, $a0, -0x1EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F020u; }
        if (ctx->pc != 0x34F020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F020u; }
        if (ctx->pc != 0x34F020u) { return; }
    }
    ctx->pc = 0x34F020u;
label_34f020:
    // 0x34f020: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x34F020u;
    {
        const bool branch_taken_0x34f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f020) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F028u;
label_34f028:
    // 0x34f028: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f030: 0x8c644088  lw          $a0, 0x4088($v1)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34f034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f038:
    // 0x34f038: 0x90830040  lbu         $v1, 0x40($a0)
    ctx->pc = 0x34f038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x34f03c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x34F03Cu;
    {
        const bool branch_taken_0x34f03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f03c) {
            ctx->pc = 0x34F048u;
            goto label_34f048;
        }
    }
    ctx->pc = 0x34F044u;
    // 0x34f044: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34f044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34f048:
    // 0x34f048: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34f048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34f04c: 0x28c30007  slti        $v1, $a2, 0x7
    ctx->pc = 0x34f04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x34f050: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x34F050u;
    {
        const bool branch_taken_0x34f050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F050u;
            // 0x34f054: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f050) {
            ctx->pc = 0x34F038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f038;
        }
    }
    ctx->pc = 0x34F058u;
    // 0x34f058: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f05c: 0x8c634378  lw          $v1, 0x4378($v1)
    ctx->pc = 0x34f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34f060: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x34f060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34f064: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F064u;
    {
        const bool branch_taken_0x34f064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f064) {
            ctx->pc = 0x34F074u;
            goto label_34f074;
        }
    }
    ctx->pc = 0x34F06Cu;
    // 0x34f06c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f070: 0xac654378  sw          $a1, 0x4378($v1)
    ctx->pc = 0x34f070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 5));
label_34f074:
    // 0x34f074: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34F074u;
    {
        const bool branch_taken_0x34f074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f074) {
            ctx->pc = 0x34F078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F074u;
            // 0x34f078: 0x32232000  andi        $v1, $s1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F0A4u;
            goto label_34f0a4;
        }
    }
    ctx->pc = 0x34F07Cu;
    // 0x34f07c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x34f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34f080: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f084: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x34f084u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34f088: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x34f088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34f08c: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x34F08Cu;
    SET_GPR_U32(ctx, 31, 0x34F094u);
    ctx->pc = 0x34F090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F08Cu;
            // 0x34f090: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (runtime->hasFunction(0x342AF0u)) {
        auto targetFn = runtime->lookupFunction(0x342AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F094u; }
        if (ctx->pc != 0x34F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342AF0_0x342af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F094u; }
        if (ctx->pc != 0x34F094u) { return; }
    }
    ctx->pc = 0x34F094u;
label_34f094:
    // 0x34f094: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34f094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f098: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f09c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x34f0a0: 0x32232000  andi        $v1, $s1, 0x2000
    ctx->pc = 0x34f0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_34f0a4:
    // 0x34f0a4: 0x50600097  beql        $v1, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x34F0A4u;
    {
        const bool branch_taken_0x34f0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f0a4) {
            ctx->pc = 0x34F0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0A4u;
            // 0x34f0a8: 0x32234000  andi        $v1, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F304u;
            goto label_34f304;
        }
    }
    ctx->pc = 0x34F0ACu;
    // 0x34f0ac: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34f0b0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f0b4: 0x8c854378  lw          $a1, 0x4378($a0)
    ctx->pc = 0x34f0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x34f0b8: 0x8c634088  lw          $v1, 0x4088($v1)
    ctx->pc = 0x34f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f0bc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x34f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34f0c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34f0c4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x34f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34f0c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34f0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34f0cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x34f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34f0d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x34f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34f0d4: 0x90640040  lbu         $a0, 0x40($v1)
    ctx->pc = 0x34f0d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x34f0d8: 0x54800046  bnel        $a0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x34F0D8u;
    {
        const bool branch_taken_0x34f0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f0d8) {
            ctx->pc = 0x34F0DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0D8u;
            // 0x34f0dc: 0x90630041  lbu         $v1, 0x41($v1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F1F4u;
            goto label_34f1f4;
        }
    }
    ctx->pc = 0x34F0E0u;
    // 0x34f0e0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34f0e4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34F0E4u;
    SET_GPR_U32(ctx, 31, 0x34F0ECu);
    ctx->pc = 0x34F0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0E4u;
            // 0x34f0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F0ECu; }
        if (ctx->pc != 0x34F0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F0ECu; }
        if (ctx->pc != 0x34F0ECu) { return; }
    }
    ctx->pc = 0x34F0ECu;
label_34f0ec:
    // 0x34f0ec: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34f0f0: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34f0f4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x34F0F4u;
    {
        const bool branch_taken_0x34f0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f0f4) {
            ctx->pc = 0x34F0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F0F4u;
            // 0x34f0f8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F12Cu;
            goto label_34f12c;
        }
    }
    ctx->pc = 0x34F0FCu;
    // 0x34f0fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f100: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34f100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34f104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F104u;
    {
        const bool branch_taken_0x34f104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f104) {
            ctx->pc = 0x34F128u;
            goto label_34f128;
        }
    }
    ctx->pc = 0x34F10Cu;
    // 0x34f10c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f110: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f114: 0x2484f670  addiu       $a0, $a0, -0x990
    ctx->pc = 0x34f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964848));
    // 0x34f118: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F118u;
    SET_GPR_U32(ctx, 31, 0x34F120u);
    ctx->pc = 0x34F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F118u;
            // 0x34f11c: 0xac40be70  sw          $zero, -0x4190($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F120u; }
        if (ctx->pc != 0x34F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F120u; }
        if (ctx->pc != 0x34F120u) { return; }
    }
    ctx->pc = 0x34F120u;
label_34f120:
    // 0x34f120: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x34F120u;
    {
        const bool branch_taken_0x34f120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f120) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F128u;
label_34f128:
    // 0x34f128: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34f128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_34f12c:
    // 0x34f12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f130: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34F130u;
    SET_GPR_U32(ctx, 31, 0x34F138u);
    ctx->pc = 0x34F134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F130u;
            // 0x34f134: 0x2406037c  addiu       $a2, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F138u; }
        if (ctx->pc != 0x34F138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F138u; }
        if (ctx->pc != 0x34F138u) { return; }
    }
    ctx->pc = 0x34F138u;
label_34f138:
    // 0x34f138: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34f138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34f13c: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34f140: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F140u;
    {
        const bool branch_taken_0x34f140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f140) {
            ctx->pc = 0x34F154u;
            goto label_34f154;
        }
    }
    ctx->pc = 0x34F148u;
    // 0x34f148: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34f148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34f14c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34F14Cu;
    {
        const bool branch_taken_0x34f14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F14Cu;
            // 0x34f150: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f14c) {
            ctx->pc = 0x34F15Cu;
            goto label_34f15c;
        }
    }
    ctx->pc = 0x34F154u;
label_34f154:
    // 0x34f154: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34f158: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x34f158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_34f15c:
    // 0x34f15c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x34f15cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f160: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34f160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34f164: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f168: 0x9064beaa  lbu         $a0, -0x4156($v1)
    ctx->pc = 0x34f168u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x34f16c: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x34f16cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34f170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f174: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x34f174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x34f178: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34f178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34f17c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x34f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34f180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f184: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x34f184u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x34f188: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x34f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x34f18c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x34f18cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x34f190: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f194: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x34f194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x34f198: 0xa0434308  sb          $v1, 0x4308($v0)
    ctx->pc = 0x34f198u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f19c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x34f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x34f1a0: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x34f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x34f1a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x34f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34f1a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34f1ac: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x34f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x34f1b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x34f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x34f1b4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x34f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x34f1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f1bc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34F1BCu;
    SET_GPR_U32(ctx, 31, 0x34F1C4u);
    ctx->pc = 0x34F1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F1BCu;
            // 0x34f1c0: 0xafa2010c  sw          $v0, 0x10C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1C4u; }
        if (ctx->pc != 0x34F1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1C4u; }
        if (ctx->pc != 0x34F1C4u) { return; }
    }
    ctx->pc = 0x34F1C4u;
label_34f1c4:
    // 0x34f1c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f1c8: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x34f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x34f1cc: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34f1d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34f1d4: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34F1D4u;
    SET_GPR_U32(ctx, 31, 0x34F1DCu);
    ctx->pc = 0x34F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F1D4u;
            // 0x34f1d8: 0x2407037c  addiu       $a3, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1DCu; }
        if (ctx->pc != 0x34F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1DCu; }
        if (ctx->pc != 0x34F1DCu) { return; }
    }
    ctx->pc = 0x34F1DCu;
label_34f1dc:
    // 0x34f1dc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f1e0: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34F1E0u;
    SET_GPR_U32(ctx, 31, 0x34F1E8u);
    ctx->pc = 0x34F1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F1E0u;
            // 0x34f1e4: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1E8u; }
        if (ctx->pc != 0x34F1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F1E8u; }
        if (ctx->pc != 0x34F1E8u) { return; }
    }
    ctx->pc = 0x34F1E8u;
label_34f1e8:
    // 0x34f1e8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x34F1E8u;
    {
        const bool branch_taken_0x34f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1e8) {
            ctx->pc = 0x34F2F8u;
            goto label_34f2f8;
        }
    }
    ctx->pc = 0x34F1F0u;
    // 0x34f1f0: 0x90630041  lbu         $v1, 0x41($v1)
    ctx->pc = 0x34f1f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
label_34f1f4:
    // 0x34f1f4: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x34F1F4u;
    {
        const bool branch_taken_0x34f1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f1f4) {
            ctx->pc = 0x34F2E4u;
            goto label_34f2e4;
        }
    }
    ctx->pc = 0x34F1FCu;
    // 0x34f1fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f200: 0x14830031  bne         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x34F200u;
    {
        const bool branch_taken_0x34f200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34f200) {
            ctx->pc = 0x34F2C8u;
            goto label_34f2c8;
        }
    }
    ctx->pc = 0x34F208u;
    // 0x34f208: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34f208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34f20c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34F20Cu;
    SET_GPR_U32(ctx, 31, 0x34F214u);
    ctx->pc = 0x34F210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F20Cu;
            // 0x34f210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F214u; }
        if (ctx->pc != 0x34F214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F214u; }
        if (ctx->pc != 0x34F214u) { return; }
    }
    ctx->pc = 0x34F214u;
label_34f214:
    // 0x34f214: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f218: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f21c: 0x8c674378  lw          $a3, 0x4378($v1)
    ctx->pc = 0x34f21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34f220: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x34f220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x34f224: 0x8c484088  lw          $t0, 0x4088($v0)
    ctx->pc = 0x34f224u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f228: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34f228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34f22c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x34f22cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34f230: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34f230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34f234: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x34f234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x34f238: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34f238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34f23c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x34f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x34f240: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34f244: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x34f244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x34f248: 0x64880  sll         $t1, $a2, 2
    ctx->pc = 0x34f248u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34f24c: 0x1283821  addu        $a3, $t1, $t0
    ctx->pc = 0x34f24cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x34f250: 0x90e60044  lbu         $a2, 0x44($a3)
    ctx->pc = 0x34f250u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x34f254: 0xa0a64308  sb          $a2, 0x4308($a1)
    ctx->pc = 0x34f254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 17160), (uint8_t)GPR_U32(ctx, 6));
    // 0x34f258: 0x8ce50048  lw          $a1, 0x48($a3)
    ctx->pc = 0x34f258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x34f25c: 0xac8540b0  sw          $a1, 0x40B0($a0)
    ctx->pc = 0x34f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16560), GPR_U32(ctx, 5));
    // 0x34f260: 0x90e40043  lbu         $a0, 0x43($a3)
    ctx->pc = 0x34f260u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 67)));
    // 0x34f264: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34F264u;
    {
        const bool branch_taken_0x34f264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F264u;
            // 0x34f268: 0xa0649500  sb          $a0, -0x6B00($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f264) {
            ctx->pc = 0x34F2A0u;
            goto label_34f2a0;
        }
    }
    ctx->pc = 0x34F26Cu;
    // 0x34f26c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34f270: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F270u;
    {
        const bool branch_taken_0x34f270 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x34f270) {
            ctx->pc = 0x34F274u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F270u;
            // 0x34f274: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F288u;
            goto label_34f288;
        }
    }
    ctx->pc = 0x34F278u;
    // 0x34f278: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f27c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34f280: 0xa0449500  sb          $a0, -0x6B00($v0)
    ctx->pc = 0x34f280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939904), (uint8_t)GPR_U32(ctx, 4));
    // 0x34f284: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34f284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_34f288:
    // 0x34f288: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x34f288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x34f28c: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F28Cu;
    {
        const bool branch_taken_0x34f28c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f28c) {
            ctx->pc = 0x34F290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F28Cu;
            // 0x34f290: 0x1091021  addu        $v0, $t0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F2A4u;
            goto label_34f2a4;
        }
    }
    ctx->pc = 0x34F294u;
    // 0x34f294: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x34f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34f298: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34f29c: 0xa0449500  sb          $a0, -0x6B00($v0)
    ctx->pc = 0x34f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939904), (uint8_t)GPR_U32(ctx, 4));
label_34f2a0:
    // 0x34f2a0: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x34f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_34f2a4:
    // 0x34f2a4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34f2a8: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x34f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x34f2ac: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34F2ACu;
    SET_GPR_U32(ctx, 31, 0x34F2B4u);
    ctx->pc = 0x34F2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2ACu;
            // 0x34f2b0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2B4u; }
        if (ctx->pc != 0x34F2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2B4u; }
        if (ctx->pc != 0x34F2B4u) { return; }
    }
    ctx->pc = 0x34F2B4u;
label_34f2b4:
    // 0x34f2b4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f2b8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F2B8u;
    SET_GPR_U32(ctx, 31, 0x34F2C0u);
    ctx->pc = 0x34F2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2B8u;
            // 0x34f2bc: 0x24840250  addiu       $a0, $a0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2C0u; }
        if (ctx->pc != 0x34F2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2C0u; }
        if (ctx->pc != 0x34F2C0u) { return; }
    }
    ctx->pc = 0x34F2C0u;
label_34f2c0:
    // 0x34f2c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34F2C0u;
    {
        const bool branch_taken_0x34f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2c0) {
            ctx->pc = 0x34F2F8u;
            goto label_34f2f8;
        }
    }
    ctx->pc = 0x34F2C8u;
label_34f2c8:
    // 0x34f2c8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34F2C8u;
    {
        const bool branch_taken_0x34f2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2c8) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F2D0u;
    // 0x34f2d0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f2d4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F2D4u;
    SET_GPR_U32(ctx, 31, 0x34F2DCu);
    ctx->pc = 0x34F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2D4u;
            // 0x34f2d8: 0x2484f560  addiu       $a0, $a0, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2DCu; }
        if (ctx->pc != 0x34F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2DCu; }
        if (ctx->pc != 0x34F2DCu) { return; }
    }
    ctx->pc = 0x34F2DCu;
label_34f2dc:
    // 0x34f2dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34F2DCu;
    {
        const bool branch_taken_0x34f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2dc) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F2E4u;
label_34f2e4:
    // 0x34f2e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f2e8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F2E8u;
    SET_GPR_U32(ctx, 31, 0x34F2F0u);
    ctx->pc = 0x34F2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F2E8u;
            // 0x34f2ec: 0x2484f5a0  addiu       $a0, $a0, -0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2F0u; }
        if (ctx->pc != 0x34F2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F2F0u; }
        if (ctx->pc != 0x34F2F0u) { return; }
    }
    ctx->pc = 0x34F2F0u;
label_34f2f0:
    // 0x34f2f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34F2F0u;
    {
        const bool branch_taken_0x34f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2f0) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F2F8u;
label_34f2f8:
    // 0x34f2f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34F2F8u;
    {
        const bool branch_taken_0x34f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f2f8) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F300u;
    // 0x34f300: 0x32234000  andi        $v1, $s1, 0x4000
    ctx->pc = 0x34f300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
label_34f304:
    // 0x34f304: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34F304u;
    {
        const bool branch_taken_0x34f304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f304) {
            ctx->pc = 0x34F324u;
            goto label_34f324;
        }
    }
    ctx->pc = 0x34F30Cu;
    // 0x34f30c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34f310: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34F310u;
    SET_GPR_U32(ctx, 31, 0x34F318u);
    ctx->pc = 0x34F314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F310u;
            // 0x34f314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F318u; }
        if (ctx->pc != 0x34F318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F318u; }
        if (ctx->pc != 0x34F318u) { return; }
    }
    ctx->pc = 0x34F318u;
label_34f318:
    // 0x34f318: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f31c: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34F31Cu;
    SET_GPR_U32(ctx, 31, 0x34F324u);
    ctx->pc = 0x34F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F31Cu;
            // 0x34f320: 0x248407f0  addiu       $a0, $a0, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (runtime->hasFunction(0x343580u)) {
        auto targetFn = runtime->lookupFunction(0x343580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F324u; }
        if (ctx->pc != 0x34F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343580_0x343580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F324u; }
        if (ctx->pc != 0x34F324u) { return; }
    }
    ctx->pc = 0x34F324u;
label_34f324:
    // 0x34f324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34f328:
    // 0x34f328: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f330: 0x3e00008  jr          $ra
    ctx->pc = 0x34F330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F330u;
            // 0x34f334: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F338u;
    // 0x34f338: 0x0  nop
    ctx->pc = 0x34f338u;
    // NOP
    // 0x34f33c: 0x0  nop
    ctx->pc = 0x34f33cu;
    // NOP
label_34f340:
    // 0x34f340: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f344: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f348: 0xac404370  sw          $zero, 0x4370($v0)
    ctx->pc = 0x34f348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 0));
    // 0x34f34c: 0x8082674  j           func_2099D0
    ctx->pc = 0x34F34Cu;
    ctx->pc = 0x34F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F34Cu;
            // 0x34f350: 0x2484f360  addiu       $a0, $a0, -0xCA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34F354u;
    // 0x34f354: 0x0  nop
    ctx->pc = 0x34f354u;
    // NOP
    // 0x34f358: 0x0  nop
    ctx->pc = 0x34f358u;
    // NOP
    // 0x34f35c: 0x0  nop
    ctx->pc = 0x34f35cu;
    // NOP
label_34f360:
    // 0x34f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f36c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f370: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34F370u;
    SET_GPR_U32(ctx, 31, 0x34F378u);
    ctx->pc = 0x34F374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F370u;
            // 0x34f374: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F378u; }
        if (ctx->pc != 0x34F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F378u; }
        if (ctx->pc != 0x34F378u) { return; }
    }
    ctx->pc = 0x34F378u;
label_34f378:
    // 0x34f378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f37c: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34f380: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34f380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34f384: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34f384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34f388: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34f38c: 0x8c63dd80  lw          $v1, -0x2280($v1)
    ctx->pc = 0x34f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958464)));
    // 0x34f390: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34f390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34f394: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34f394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f398: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f39c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34f39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34f3a0: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34f3a4: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34F3A4u;
    SET_GPR_U32(ctx, 31, 0x34F3ACu);
    ctx->pc = 0x34F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3A4u;
            // 0x34f3a8: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3ACu; }
        if (ctx->pc != 0x34F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3ACu; }
        if (ctx->pc != 0x34F3ACu) { return; }
    }
    ctx->pc = 0x34F3ACu;
label_34f3ac:
    // 0x34f3ac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f3b0: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34F3B0u;
    SET_GPR_U32(ctx, 31, 0x34F3B8u);
    ctx->pc = 0x34F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3B0u;
            // 0x34f3b4: 0x2484f3d0  addiu       $a0, $a0, -0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3B8u; }
        if (ctx->pc != 0x34F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3B8u; }
        if (ctx->pc != 0x34F3B8u) { return; }
    }
    ctx->pc = 0x34F3B8u;
label_34f3b8:
    // 0x34f3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x34F3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3BCu;
            // 0x34f3c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F3C4u;
    // 0x34f3c4: 0x0  nop
    ctx->pc = 0x34f3c4u;
    // NOP
    // 0x34f3c8: 0x0  nop
    ctx->pc = 0x34f3c8u;
    // NOP
    // 0x34f3cc: 0x0  nop
    ctx->pc = 0x34f3ccu;
    // NOP
label_34f3d0:
    // 0x34f3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34f3d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34f3d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34f3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34f3dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34f3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34f3e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f3e4: 0x3c1201df  lui         $s2, 0x1DF
    ctx->pc = 0x34f3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)479 << 16));
    // 0x34f3e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f3ec: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34F3ECu;
    SET_GPR_U32(ctx, 31, 0x34F3F4u);
    ctx->pc = 0x34F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F3ECu;
            // 0x34f3f0: 0x2652ddc0  addiu       $s2, $s2, -0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (runtime->hasFunction(0x343080u)) {
        auto targetFn = runtime->lookupFunction(0x343080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3F4u; }
        if (ctx->pc != 0x34F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343080_0x343080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F3F4u; }
        if (ctx->pc != 0x34F3F4u) { return; }
    }
    ctx->pc = 0x34F3F4u;
label_34f3f4:
    // 0x34f3f4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x34f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34f3f8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x34f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x34f3fc: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x34f3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x34f400: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x34f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x34f404: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f408: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x34f408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34f40c: 0x2010  mfhi        $a0
    ctx->pc = 0x34f40cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34f410: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x34f410u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x34f414: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x34f414u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x34f418: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34f41c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x34F41Cu;
    {
        const bool branch_taken_0x34f41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F41Cu;
            // 0x34f420: 0xac444368  sw          $a0, 0x4368($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f41c) {
            ctx->pc = 0x34F500u;
            goto label_34f500;
        }
    }
    ctx->pc = 0x34F424u;
    // 0x34f424: 0x18600036  blez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x34F424u;
    {
        const bool branch_taken_0x34f424 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x34F428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F424u;
            // 0x34f428: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f424) {
            ctx->pc = 0x34F500u;
            goto label_34f500;
        }
    }
    ctx->pc = 0x34F42Cu;
    // 0x34f42c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x34f42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f430: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f434:
    // 0x34f434: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f438: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x34f438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x34f43c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f440: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34F440u;
    SET_GPR_U32(ctx, 31, 0x34F448u);
    ctx->pc = 0x34F444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F440u;
            // 0x34f444: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F448u; }
        if (ctx->pc != 0x34F448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F448u; }
        if (ctx->pc != 0x34F448u) { return; }
    }
    ctx->pc = 0x34F448u;
label_34f448:
    // 0x34f448: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f44c: 0x8e290098  lw          $t1, 0x98($s1)
    ctx->pc = 0x34f44cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x34f450: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f454: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34f454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34f458: 0x8e280038  lw          $t0, 0x38($s1)
    ctx->pc = 0x34f458u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x34f45c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34f460: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x34f460u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x34f464: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f468: 0x503821  addu        $a3, $v0, $s0
    ctx->pc = 0x34f468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34f46c: 0xa0e80040  sb          $t0, 0x40($a3)
    ctx->pc = 0x34f46cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x34f470: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f474: 0x8ca54088  lw          $a1, 0x4088($a1)
    ctx->pc = 0x34f474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16520)));
    // 0x34f478: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x34f478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x34f47c: 0xa0a60043  sb          $a2, 0x43($a1)
    ctx->pc = 0x34f47cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 67), (uint8_t)GPR_U32(ctx, 6));
    // 0x34f480: 0x8c844088  lw          $a0, 0x4088($a0)
    ctx->pc = 0x34f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16520)));
    // 0x34f484: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x34f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x34f488: 0xa0890044  sb          $t1, 0x44($a0)
    ctx->pc = 0x34f488u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 9));
    // 0x34f48c: 0x8c634088  lw          $v1, 0x4088($v1)
    ctx->pc = 0x34f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f490: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x34f490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x34f494: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x34f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x34f498: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x34f498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x34f49c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f4a0: 0xc0d2938  jal         func_34A4E0
    ctx->pc = 0x34F4A0u;
    SET_GPR_U32(ctx, 31, 0x34F4A8u);
    ctx->pc = 0x34F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4A0u;
            // 0x34f4a4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A4E0u;
    if (runtime->hasFunction(0x34A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x34A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F4A8u; }
        if (ctx->pc != 0x34F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A4E0_0x34a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F4A8u; }
        if (ctx->pc != 0x34F4A8u) { return; }
    }
    ctx->pc = 0x34F4A8u;
label_34f4a8:
    // 0x34f4a8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f4ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34f4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34f4b0: 0x8c654088  lw          $a1, 0x4088($v1)
    ctx->pc = 0x34f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f4b4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x34f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x34f4b8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f4bc: 0xa0a20042  sb          $v0, 0x42($a1)
    ctx->pc = 0x34f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x34f4c0: 0x8c624088  lw          $v0, 0x4088($v1)
    ctx->pc = 0x34f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f4c4: 0x8c8440b0  lw          $a0, 0x40B0($a0)
    ctx->pc = 0x34f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16560)));
    // 0x34f4c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x34f4cc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x34f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x34f4d0: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F4D0u;
    {
        const bool branch_taken_0x34f4d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f4d0) {
            ctx->pc = 0x34F4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4D0u;
            // 0x34f4d4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F4ECu;
            goto label_34f4ec;
        }
    }
    ctx->pc = 0x34F4D8u;
    // 0x34f4d8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f4dc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F4DCu;
    SET_GPR_U32(ctx, 31, 0x34F4E4u);
    ctx->pc = 0x34F4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4DCu;
            // 0x34f4e0: 0x2484f560  addiu       $a0, $a0, -0xAA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F4E4u; }
        if (ctx->pc != 0x34F4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F4E4u; }
        if (ctx->pc != 0x34F4E4u) { return; }
    }
    ctx->pc = 0x34F4E4u;
label_34f4e4:
    // 0x34f4e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x34F4E4u;
    {
        const bool branch_taken_0x34f4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4E4u;
            // 0x34f4e8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4e4) {
            ctx->pc = 0x34F548u;
            goto label_34f548;
        }
    }
    ctx->pc = 0x34F4ECu;
label_34f4ec:
    // 0x34f4ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34f4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34f4f0: 0x263100d8  addiu       $s1, $s1, 0xD8
    ctx->pc = 0x34f4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x34f4f4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x34f4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34f4f8: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x34F4F8u;
    {
        const bool branch_taken_0x34f4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F4F8u;
            // 0x34f4fc: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f4f8) {
            ctx->pc = 0x34F434u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f434;
        }
    }
    ctx->pc = 0x34F500u;
label_34f500:
    // 0x34f500: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f504: 0x8c434370  lw          $v1, 0x4370($v0)
    ctx->pc = 0x34f504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34f508: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f50c: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x34f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x34f510: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F510u;
    {
        const bool branch_taken_0x34f510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f510) {
            ctx->pc = 0x34F52Cu;
            goto label_34f52c;
        }
    }
    ctx->pc = 0x34F518u;
    // 0x34f518: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f51c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F51Cu;
    SET_GPR_U32(ctx, 31, 0x34F524u);
    ctx->pc = 0x34F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F51Cu;
            // 0x34f520: 0x2484f5e0  addiu       $a0, $a0, -0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F524u; }
        if (ctx->pc != 0x34F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F524u; }
        if (ctx->pc != 0x34F524u) { return; }
    }
    ctx->pc = 0x34F524u;
label_34f524:
    // 0x34f524: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34F524u;
    {
        const bool branch_taken_0x34f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f524) {
            ctx->pc = 0x34F544u;
            goto label_34f544;
        }
    }
    ctx->pc = 0x34F52Cu;
label_34f52c:
    // 0x34f52c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34f534: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f538: 0x2484f360  addiu       $a0, $a0, -0xCA0
    ctx->pc = 0x34f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964064));
    // 0x34f53c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F53Cu;
    SET_GPR_U32(ctx, 31, 0x34F544u);
    ctx->pc = 0x34F540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F53Cu;
            // 0x34f540: 0xac434370  sw          $v1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F544u; }
        if (ctx->pc != 0x34F544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F544u; }
        if (ctx->pc != 0x34F544u) { return; }
    }
    ctx->pc = 0x34F544u;
label_34f544:
    // 0x34f544: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34f544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34f548:
    // 0x34f548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34f548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34f54c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34f54cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f558: 0x3e00008  jr          $ra
    ctx->pc = 0x34F558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F558u;
            // 0x34f55c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F560u;
label_34f560:
    // 0x34f560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f564: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34f564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34f568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f56c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x34f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34f570: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34F570u;
    SET_GPR_U32(ctx, 31, 0x34F578u);
    ctx->pc = 0x34F574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F570u;
            // 0x34f574: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F578u; }
        if (ctx->pc != 0x34F578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F578u; }
        if (ctx->pc != 0x34F578u) { return; }
    }
    ctx->pc = 0x34F578u;
label_34f578:
    // 0x34f578: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34f578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34f57c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f580: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34F580u;
    SET_GPR_U32(ctx, 31, 0x34F588u);
    ctx->pc = 0x34F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F580u;
            // 0x34f584: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F588u; }
        if (ctx->pc != 0x34F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F588u; }
        if (ctx->pc != 0x34F588u) { return; }
    }
    ctx->pc = 0x34F588u;
label_34f588:
    // 0x34f588: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f58c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F58Cu;
    SET_GPR_U32(ctx, 31, 0x34F594u);
    ctx->pc = 0x34F590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F58Cu;
            // 0x34f590: 0x2484f620  addiu       $a0, $a0, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F594u; }
        if (ctx->pc != 0x34F594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F594u; }
        if (ctx->pc != 0x34F594u) { return; }
    }
    ctx->pc = 0x34F594u;
label_34f594:
    // 0x34f594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f598: 0x3e00008  jr          $ra
    ctx->pc = 0x34F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F598u;
            // 0x34f59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F5A0u;
label_34f5a0:
    // 0x34f5a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f5a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34f5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f5ac: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x34f5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x34f5b0: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34F5B0u;
    SET_GPR_U32(ctx, 31, 0x34F5B8u);
    ctx->pc = 0x34F5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5B0u;
            // 0x34f5b4: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5B8u; }
        if (ctx->pc != 0x34F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5B8u; }
        if (ctx->pc != 0x34F5B8u) { return; }
    }
    ctx->pc = 0x34F5B8u;
label_34f5b8:
    // 0x34f5b8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34f5bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f5c0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34F5C0u;
    SET_GPR_U32(ctx, 31, 0x34F5C8u);
    ctx->pc = 0x34F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5C0u;
            // 0x34f5c4: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5C8u; }
        if (ctx->pc != 0x34F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5C8u; }
        if (ctx->pc != 0x34F5C8u) { return; }
    }
    ctx->pc = 0x34F5C8u;
label_34f5c8:
    // 0x34f5c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f5cc: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F5CCu;
    SET_GPR_U32(ctx, 31, 0x34F5D4u);
    ctx->pc = 0x34F5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5CCu;
            // 0x34f5d0: 0x2484f620  addiu       $a0, $a0, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5D4u; }
        if (ctx->pc != 0x34F5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5D4u; }
        if (ctx->pc != 0x34F5D4u) { return; }
    }
    ctx->pc = 0x34F5D4u;
label_34f5d4:
    // 0x34f5d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34F5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5D8u;
            // 0x34f5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F5E0u;
label_34f5e0:
    // 0x34f5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f5e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34f5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f5ec: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x34f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x34f5f0: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34F5F0u;
    SET_GPR_U32(ctx, 31, 0x34F5F8u);
    ctx->pc = 0x34F5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F5F0u;
            // 0x34f5f4: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5F8u; }
        if (ctx->pc != 0x34F5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F5F8u; }
        if (ctx->pc != 0x34F5F8u) { return; }
    }
    ctx->pc = 0x34F5F8u;
label_34f5f8:
    // 0x34f5f8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34f5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f600: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34F600u;
    SET_GPR_U32(ctx, 31, 0x34F608u);
    ctx->pc = 0x34F604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F600u;
            // 0x34f604: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F608u; }
        if (ctx->pc != 0x34F608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F608u; }
        if (ctx->pc != 0x34F608u) { return; }
    }
    ctx->pc = 0x34F608u;
label_34f608:
    // 0x34f608: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f60c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F60Cu;
    SET_GPR_U32(ctx, 31, 0x34F614u);
    ctx->pc = 0x34F610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F60Cu;
            // 0x34f610: 0x2484f620  addiu       $a0, $a0, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F614u; }
        if (ctx->pc != 0x34F614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F614u; }
        if (ctx->pc != 0x34F614u) { return; }
    }
    ctx->pc = 0x34F614u;
label_34f614:
    // 0x34f614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f618: 0x3e00008  jr          $ra
    ctx->pc = 0x34F618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F618u;
            // 0x34f61c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F620u;
label_34f620:
    // 0x34f620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f624: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34f628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f630: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34F630u;
    SET_GPR_U32(ctx, 31, 0x34F638u);
    ctx->pc = 0x34F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F630u;
            // 0x34f634: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F638u; }
        if (ctx->pc != 0x34F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F638u; }
        if (ctx->pc != 0x34F638u) { return; }
    }
    ctx->pc = 0x34F638u;
label_34f638:
    // 0x34f638: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F638u;
    {
        const bool branch_taken_0x34f638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f638) {
            ctx->pc = 0x34F63Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34F638u;
            // 0x34f63c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34F65Cu;
            goto label_34f65c;
        }
    }
    ctx->pc = 0x34F640u;
    // 0x34f640: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34f640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34f644: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34F644u;
    SET_GPR_U32(ctx, 31, 0x34F64Cu);
    ctx->pc = 0x34F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F644u;
            // 0x34f648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F64Cu; }
        if (ctx->pc != 0x34F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F64Cu; }
        if (ctx->pc != 0x34F64Cu) { return; }
    }
    ctx->pc = 0x34F64Cu;
label_34f64c:
    // 0x34f64c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f650: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34F650u;
    SET_GPR_U32(ctx, 31, 0x34F658u);
    ctx->pc = 0x34F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F650u;
            // 0x34f654: 0x2484e0e0  addiu       $a0, $a0, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F658u; }
        if (ctx->pc != 0x34F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F658u; }
        if (ctx->pc != 0x34F658u) { return; }
    }
    ctx->pc = 0x34F658u;
label_34f658:
    // 0x34f658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34f65c:
    // 0x34f65c: 0x3e00008  jr          $ra
    ctx->pc = 0x34F65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F65Cu;
            // 0x34f660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F664u;
    // 0x34f664: 0x0  nop
    ctx->pc = 0x34f664u;
    // NOP
    // 0x34f668: 0x0  nop
    ctx->pc = 0x34f668u;
    // NOP
    // 0x34f66c: 0x0  nop
    ctx->pc = 0x34f66cu;
    // NOP
label_34f670:
    // 0x34f670: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f674: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f678: 0xac40be70  sw          $zero, -0x4190($v0)
    ctx->pc = 0x34f678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950512), GPR_U32(ctx, 0));
    // 0x34f67c: 0x8082674  j           func_2099D0
    ctx->pc = 0x34F67Cu;
    ctx->pc = 0x34F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F67Cu;
            // 0x34f680: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34F684u;
    // 0x34f684: 0x0  nop
    ctx->pc = 0x34f684u;
    // NOP
    // 0x34f688: 0x0  nop
    ctx->pc = 0x34f688u;
    // NOP
    // 0x34f68c: 0x0  nop
    ctx->pc = 0x34f68cu;
    // NOP
label_34f690:
    // 0x34f690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f694: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34f694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34f698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f69c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f6a0: 0x8c45be70  lw          $a1, -0x4190($v0)
    ctx->pc = 0x34f6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
    // 0x34f6a4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x34F6A4u;
    SET_GPR_U32(ctx, 31, 0x34F6ACu);
    ctx->pc = 0x34F6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6A4u;
            // 0x34f6a8: 0x248452c0  addiu       $a0, $a0, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6ACu; }
        if (ctx->pc != 0x34F6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6ACu; }
        if (ctx->pc != 0x34F6ACu) { return; }
    }
    ctx->pc = 0x34F6ACu;
label_34f6ac:
    // 0x34f6ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f6b0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f6b4: 0xac404370  sw          $zero, 0x4370($v0)
    ctx->pc = 0x34f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 0));
    // 0x34f6b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f6bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34F6BCu;
    SET_GPR_U32(ctx, 31, 0x34F6C4u);
    ctx->pc = 0x34F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6BCu;
            // 0x34f6c0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6C4u; }
        if (ctx->pc != 0x34F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6C4u; }
        if (ctx->pc != 0x34F6C4u) { return; }
    }
    ctx->pc = 0x34F6C4u;
label_34f6c4:
    // 0x34f6c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f6c8: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34f6cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34f6d0: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34f6d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34f6d8: 0x8c63dd80  lw          $v1, -0x2280($v1)
    ctx->pc = 0x34f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958464)));
    // 0x34f6dc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34f6e0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34f6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f6e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f6e8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34f6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34f6ec: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34f6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34f6f0: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34F6F0u;
    SET_GPR_U32(ctx, 31, 0x34F6F8u);
    ctx->pc = 0x34F6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6F0u;
            // 0x34f6f4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6F8u; }
        if (ctx->pc != 0x34F6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F6F8u; }
        if (ctx->pc != 0x34F6F8u) { return; }
    }
    ctx->pc = 0x34F6F8u;
label_34f6f8:
    // 0x34f6f8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f6fc: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34F6FCu;
    SET_GPR_U32(ctx, 31, 0x34F704u);
    ctx->pc = 0x34F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F6FCu;
            // 0x34f700: 0x2484f790  addiu       $a0, $a0, -0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F704u; }
        if (ctx->pc != 0x34F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F704u; }
        if (ctx->pc != 0x34F704u) { return; }
    }
    ctx->pc = 0x34F704u;
label_34f704:
    // 0x34f704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f708: 0x3e00008  jr          $ra
    ctx->pc = 0x34F708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F708u;
            // 0x34f70c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F710u;
label_34f710:
    // 0x34f710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34f710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34f714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34f71c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f720: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34F720u;
    SET_GPR_U32(ctx, 31, 0x34F728u);
    ctx->pc = 0x34F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F720u;
            // 0x34f724: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F728u; }
        if (ctx->pc != 0x34F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F728u; }
        if (ctx->pc != 0x34F728u) { return; }
    }
    ctx->pc = 0x34F728u;
label_34f728:
    // 0x34f728: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34f728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34f72c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f730: 0x8c44dd80  lw          $a0, -0x2280($v0)
    ctx->pc = 0x34f730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34f734: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34f734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34f738: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x34f738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34f73c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34f740: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34f740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34f744: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34f748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x34f748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x34f74c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34f74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34f750: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34f750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34f754: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34f758: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34f758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34f760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f764: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34f764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34f768: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34F768u;
    SET_GPR_U32(ctx, 31, 0x34F770u);
    ctx->pc = 0x34F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F768u;
            // 0x34f76c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F770u; }
        if (ctx->pc != 0x34F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F770u; }
        if (ctx->pc != 0x34F770u) { return; }
    }
    ctx->pc = 0x34F770u;
label_34f770:
    // 0x34f770: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34f770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34f774: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34F774u;
    SET_GPR_U32(ctx, 31, 0x34F77Cu);
    ctx->pc = 0x34F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F774u;
            // 0x34f778: 0x2484f790  addiu       $a0, $a0, -0x870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F77Cu; }
        if (ctx->pc != 0x34F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F77Cu; }
        if (ctx->pc != 0x34F77Cu) { return; }
    }
    ctx->pc = 0x34F77Cu;
label_34f77c:
    // 0x34f77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34f77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f780: 0x3e00008  jr          $ra
    ctx->pc = 0x34F780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F780u;
            // 0x34f784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34F788u;
    // 0x34f788: 0x0  nop
    ctx->pc = 0x34f788u;
    // NOP
    // 0x34f78c: 0x0  nop
    ctx->pc = 0x34f78cu;
    // NOP
label_34f790:
    // 0x34f790: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x34f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
    // 0x34f794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34f798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34f798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34f79c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34f79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34f7a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34f7a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34f7a8: 0x3c1301df  lui         $s3, 0x1DF
    ctx->pc = 0x34f7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)479 << 16));
    // 0x34f7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f7b0: 0x2673ddc0  addiu       $s3, $s3, -0x2240
    ctx->pc = 0x34f7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958528));
    // 0x34f7b4: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34F7B4u;
    SET_GPR_U32(ctx, 31, 0x34F7BCu);
    ctx->pc = 0x34F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7B4u;
            // 0x34f7b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (runtime->hasFunction(0x343080u)) {
        auto targetFn = runtime->lookupFunction(0x343080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7BCu; }
        if (ctx->pc != 0x34F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343080_0x343080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F7BCu; }
        if (ctx->pc != 0x34F7BCu) { return; }
    }
    ctx->pc = 0x34F7BCu;
label_34f7bc:
    // 0x34f7bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34f7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34f7c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x34f7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34f7c4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x34f7c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34f7c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34f7cc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x34f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x34f7d0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x34f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x34f7d4: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x34f7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x34f7d8: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x34f7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34f7dc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f7e0: 0x8c42be70  lw          $v0, -0x4190($v0)
    ctx->pc = 0x34f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
    // 0x34f7e4: 0x2010  mfhi        $a0
    ctx->pc = 0x34f7e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34f7e8: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x34f7e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x34f7ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34f7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34f7f0: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x34f7f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34f7f4: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
    ctx->pc = 0x34F7F4u;
    {
        const bool branch_taken_0x34f7f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F7F4u;
            // 0x34f7f8: 0xac644368  sw          $a0, 0x4368($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f7f4) {
            ctx->pc = 0x34F9C8u;
            goto label_34f9c8;
        }
    }
    ctx->pc = 0x34F7FCu;
    // 0x34f7fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34f800: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x34F800u;
    {
        const bool branch_taken_0x34f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f800) {
            ctx->pc = 0x34F9C8u;
            goto label_34f9c8;
        }
    }
    ctx->pc = 0x34F808u;
    // 0x34f808: 0x1840006f  blez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x34F808u;
    {
        const bool branch_taken_0x34f808 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34F80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F808u;
            // 0x34f80c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f808) {
            ctx->pc = 0x34F9C8u;
            goto label_34f9c8;
        }
    }
    ctx->pc = 0x34F810u;
    // 0x34f810: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x34f810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f814: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34f814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f818:
    // 0x34f818: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f81c: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34f820: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f824: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34F824u;
    SET_GPR_U32(ctx, 31, 0x34F82Cu);
    ctx->pc = 0x34F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F824u;
            // 0x34f828: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F82Cu; }
        if (ctx->pc != 0x34F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F82Cu; }
        if (ctx->pc != 0x34F82Cu) { return; }
    }
    ctx->pc = 0x34F82Cu;
label_34f82c:
    // 0x34f82c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f830: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34f834: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f838: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34f83c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34F83Cu;
    SET_GPR_U32(ctx, 31, 0x34F844u);
    ctx->pc = 0x34F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F83Cu;
            // 0x34f840: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F844u; }
        if (ctx->pc != 0x34F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F844u; }
        if (ctx->pc != 0x34F844u) { return; }
    }
    ctx->pc = 0x34F844u;
label_34f844:
    // 0x34f844: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f848: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x34f848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x34f84c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f850: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34f850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34f854: 0x8e480038  lw          $t0, 0x38($s2)
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x34f858: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34f858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34f85c: 0x103402  srl         $a2, $s0, 16
    ctx->pc = 0x34f85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x34f860: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f864: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x34f864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34f868: 0xa0e80040  sb          $t0, 0x40($a3)
    ctx->pc = 0x34f868u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x34f86c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f870: 0x8ca54088  lw          $a1, 0x4088($a1)
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16520)));
    // 0x34f874: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x34f874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34f878: 0xa0a60043  sb          $a2, 0x43($a1)
    ctx->pc = 0x34f878u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 67), (uint8_t)GPR_U32(ctx, 6));
    // 0x34f87c: 0x8c844088  lw          $a0, 0x4088($a0)
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16520)));
    // 0x34f880: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34f880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34f884: 0xa0900044  sb          $s0, 0x44($a0)
    ctx->pc = 0x34f884u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 16));
    // 0x34f888: 0x8c634088  lw          $v1, 0x4088($v1)
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f88c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x34f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34f890: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34f890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34f894: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x34f894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x34f898: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f89c: 0xc0d2938  jal         func_34A4E0
    ctx->pc = 0x34F89Cu;
    SET_GPR_U32(ctx, 31, 0x34F8A4u);
    ctx->pc = 0x34F8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F89Cu;
            // 0x34f8a0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A4E0u;
    if (runtime->hasFunction(0x34A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x34A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F8A4u; }
        if (ctx->pc != 0x34F8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A4E0_0x34a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F8A4u; }
        if (ctx->pc != 0x34F8A4u) { return; }
    }
    ctx->pc = 0x34F8A4u;
label_34f8a4:
    // 0x34f8a4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f8a8: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x34f8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x34f8ac: 0x8c654088  lw          $a1, 0x4088($v1)
    ctx->pc = 0x34f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f8b0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34f8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34f8b4: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x34f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34f8b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F8B8u;
    {
        const bool branch_taken_0x34f8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F8B8u;
            // 0x34f8bc: 0xa0820042  sb          $v0, 0x42($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f8b8) {
            ctx->pc = 0x34F8D0u;
            goto label_34f8d0;
        }
    }
    ctx->pc = 0x34F8C0u;
    // 0x34f8c0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f8c4: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f8c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34f8cc: 0xa0430041  sb          $v1, 0x41($v0)
    ctx->pc = 0x34f8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 3));
label_34f8d0:
    // 0x34f8d0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f8d4: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x34f8d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34f8d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f8dc: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34F8DCu;
    {
        const bool branch_taken_0x34f8dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x34f8dc) {
            ctx->pc = 0x34F920u;
            goto label_34f920;
        }
    }
    ctx->pc = 0x34F8E4u;
    // 0x34f8e4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34f8e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f8ec: 0x8c644088  lw          $a0, 0x4088($v1)
    ctx->pc = 0x34f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34f8f0: 0x9043bea8  lbu         $v1, -0x4158($v0)
    ctx->pc = 0x34f8f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x34f8f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34f8f8: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x34f8f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x34f8fc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34F8FCu;
    {
        const bool branch_taken_0x34f8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f8fc) {
            ctx->pc = 0x34F920u;
            goto label_34f920;
        }
    }
    ctx->pc = 0x34F904u;
    // 0x34f904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f908: 0x14c20029  bne         $a2, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x34F908u;
    {
        const bool branch_taken_0x34f908 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f908) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F910u;
    // 0x34f910: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x34f910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x34f914: 0x14450026  bne         $v0, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x34F914u;
    {
        const bool branch_taken_0x34f914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x34f914) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F91Cu;
    // 0x34f91c: 0x0  nop
    ctx->pc = 0x34f91cu;
    // NOP
label_34f920:
    // 0x34f920: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f924: 0x8c434088  lw          $v1, 0x4088($v0)
    ctx->pc = 0x34f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f928: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x34f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34f92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f930: 0x90a30040  lbu         $v1, 0x40($a1)
    ctx->pc = 0x34f930u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x34f934: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x34F934u;
    {
        const bool branch_taken_0x34f934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34f934) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F93Cu;
    // 0x34f93c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f940: 0xc0d2918  jal         func_34A460
    ctx->pc = 0x34F940u;
    SET_GPR_U32(ctx, 31, 0x34F948u);
    ctx->pc = 0x34F944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F940u;
            // 0x34f944: 0x8c44be70  lw          $a0, -0x4190($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A460u;
    if (runtime->hasFunction(0x34A460u)) {
        auto targetFn = runtime->lookupFunction(0x34A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F948u; }
        if (ctx->pc != 0x34F948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A460_0x34a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F948u; }
        if (ctx->pc != 0x34F948u) { return; }
    }
    ctx->pc = 0x34F948u;
label_34f948:
    // 0x34f948: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x34F948u;
    {
        const bool branch_taken_0x34f948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f948) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F950u;
    // 0x34f950: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f954: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34f954u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34f958: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x34F958u;
    {
        const bool branch_taken_0x34f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f958) {
            ctx->pc = 0x34F9A8u;
            goto label_34f9a8;
        }
    }
    ctx->pc = 0x34F960u;
    // 0x34f960: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f964: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f968: 0xc0d2964  jal         func_34A590
    ctx->pc = 0x34F968u;
    SET_GPR_U32(ctx, 31, 0x34F970u);
    ctx->pc = 0x34F96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34F968u;
            // 0x34f96c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A590u;
    if (runtime->hasFunction(0x34A590u)) {
        auto targetFn = runtime->lookupFunction(0x34A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F970u; }
        if (ctx->pc != 0x34F970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A590_0x34a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34F970u; }
        if (ctx->pc != 0x34F970u) { return; }
    }
    ctx->pc = 0x34F970u;
label_34f970:
    // 0x34f970: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34f970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f974: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x34f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34f978: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x34F978u;
    {
        const bool branch_taken_0x34f978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f978) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F980u;
    // 0x34f980: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34f984: 0x9042beab  lbu         $v0, -0x4155($v0)
    ctx->pc = 0x34f984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x34f988: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34F988u;
    {
        const bool branch_taken_0x34f988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F988u;
            // 0x34f98c: 0x32b4ffff  andi        $s4, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f988) {
            ctx->pc = 0x34F9C8u;
            goto label_34f9c8;
        }
    }
    ctx->pc = 0x34F990u;
    // 0x34f990: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x34f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x34f994: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F994u;
    {
        const bool branch_taken_0x34f994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f994) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F99Cu;
    // 0x34f99c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34f9a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34F9A0u;
    {
        const bool branch_taken_0x34f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F9A0u;
            // 0x34f9a4: 0x3054ffff  andi        $s4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9a0) {
            ctx->pc = 0x34F9B0u;
            goto label_34f9b0;
        }
    }
    ctx->pc = 0x34F9A8u;
label_34f9a8:
    // 0x34f9a8: 0x32b4ffff  andi        $s4, $s5, 0xFFFF
    ctx->pc = 0x34f9a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x34f9ac: 0x0  nop
    ctx->pc = 0x34f9acu;
    // NOP
label_34f9b0:
    // 0x34f9b0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34f9b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x34f9b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x34f9b8: 0x265200d8  addiu       $s2, $s2, 0xD8
    ctx->pc = 0x34f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    // 0x34f9bc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x34f9bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34f9c0: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x34F9C0u;
    {
        const bool branch_taken_0x34f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34F9C0u;
            // 0x34f9c4: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f9c0) {
            ctx->pc = 0x34F818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34f818;
        }
    }
    ctx->pc = 0x34F9C8u;
label_34f9c8:
    // 0x34f9c8: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x34f9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x34f9cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34f9d0: 0x10a2004d  beq         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x34F9D0u;
    {
        const bool branch_taken_0x34f9d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f9d0) {
            ctx->pc = 0x34FB08u;
            goto label_34fb08;
        }
    }
    ctx->pc = 0x34F9D8u;
    // 0x34f9d8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x34f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34f9dc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34f9e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34f9e4: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34f9e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34f9ec: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34f9f0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34f9f4: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x34f9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34f9f8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34f9fc: 0x9065bea9  lbu         $a1, -0x4157($v1)
    ctx->pc = 0x34f9fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950569)));
    // 0x34fa00: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x34fa00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34fa04: 0x90e60044  lbu         $a2, 0x44($a3)
    ctx->pc = 0x34fa04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x34fa08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fa0c: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FA0Cu;
    {
        const bool branch_taken_0x34fa0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x34FA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA0Cu;
            // 0x34fa10: 0xa0864308  sb          $a2, 0x4308($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17160), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa0c) {
            ctx->pc = 0x34FA34u;
            goto label_34fa34;
        }
    }
    ctx->pc = 0x34FA14u;
    // 0x34fa14: 0x90e40041  lbu         $a0, 0x41($a3)
    ctx->pc = 0x34fa14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
    // 0x34fa18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa1c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FA1Cu;
    {
        const bool branch_taken_0x34fa1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fa1c) {
            ctx->pc = 0x34FA34u;
            goto label_34fa34;
        }
    }
    ctx->pc = 0x34FA24u;
    // 0x34fa24: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x34fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x34fa28: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34fa2c: 0x9084bea8  lbu         $a0, -0x4158($a0)
    ctx->pc = 0x34fa2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950568)));
    // 0x34fa30: 0xa0644308  sb          $a0, 0x4308($v1)
    ctx->pc = 0x34fa30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17160), (uint8_t)GPR_U32(ctx, 4));
label_34fa34:
    // 0x34fa34: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34fa38: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34fa3c: 0x8c664088  lw          $a2, 0x4088($v1)
    ctx->pc = 0x34fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34fa40: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34fa44: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x34fa44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x34fa48: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34fa4c: 0x8ce60048  lw          $a2, 0x48($a3)
    ctx->pc = 0x34fa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x34fa50: 0xaca640b0  sw          $a2, 0x40B0($a1)
    ctx->pc = 0x34fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16560), GPR_U32(ctx, 6));
    // 0x34fa54: 0x90e50043  lbu         $a1, 0x43($a3)
    ctx->pc = 0x34fa54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 67)));
    // 0x34fa58: 0xa0859500  sb          $a1, -0x6B00($a0)
    ctx->pc = 0x34fa58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939904), (uint8_t)GPR_U32(ctx, 5));
    // 0x34fa5c: 0x90639500  lbu         $v1, -0x6B00($v1)
    ctx->pc = 0x34fa5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939904)));
    // 0x34fa60: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FA60u;
    {
        const bool branch_taken_0x34fa60 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x34fa60) {
            ctx->pc = 0x34FA74u;
            goto label_34fa74;
        }
    }
    ctx->pc = 0x34FA68u;
    // 0x34fa68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fa6c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34fa70: 0xa0659500  sb          $a1, -0x6B00($v1)
    ctx->pc = 0x34fa70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 5));
label_34fa74:
    // 0x34fa74: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34fa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34fa78: 0x8c63dd90  lw          $v1, -0x2270($v1)
    ctx->pc = 0x34fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x34fa7c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FA7Cu;
    {
        const bool branch_taken_0x34fa7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fa7c) {
            ctx->pc = 0x34FA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA7Cu;
            // 0x34fa80: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FAA4u;
            goto label_34faa4;
        }
    }
    ctx->pc = 0x34FA84u;
    // 0x34fa84: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x34fa84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34fa88: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x34fa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x34fa8c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FA8Cu;
    {
        const bool branch_taken_0x34fa8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fa8c) {
            ctx->pc = 0x34FAA0u;
            goto label_34faa0;
        }
    }
    ctx->pc = 0x34FA94u;
    // 0x34fa94: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x34fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34fa98: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34fa9c: 0xa0659500  sb          $a1, -0x6B00($v1)
    ctx->pc = 0x34fa9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 5));
label_34faa0:
    // 0x34faa0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_34faa4:
    // 0x34faa4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34faa8: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x34faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x34faac: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34FAACu;
    SET_GPR_U32(ctx, 31, 0x34FAB4u);
    ctx->pc = 0x34FAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FAACu;
            // 0x34fab0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FAB4u; }
        if (ctx->pc != 0x34FAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FAB4u; }
        if (ctx->pc != 0x34FAB4u) { return; }
    }
    ctx->pc = 0x34FAB4u;
label_34fab4:
    // 0x34fab4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fab8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34fabc: 0x8c44be70  lw          $a0, -0x4190($v0)
    ctx->pc = 0x34fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
    // 0x34fac0: 0x2463bdd0  addiu       $v1, $v1, -0x4230
    ctx->pc = 0x34fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950352));
    // 0x34fac4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34fac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34fac8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34facc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x34faccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34fad0: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fad4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34fad8: 0xc049c48  jal         func_127120
    ctx->pc = 0x34FAD8u;
    SET_GPR_U32(ctx, 31, 0x34FAE0u);
    ctx->pc = 0x34FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FAD8u;
            // 0x34fadc: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FAE0u; }
        if (ctx->pc != 0x34FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FAE0u; }
        if (ctx->pc != 0x34FAE0u) { return; }
    }
    ctx->pc = 0x34FAE0u;
label_34fae0:
    // 0x34fae0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34fae4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fae8: 0x8c63be70  lw          $v1, -0x4190($v1)
    ctx->pc = 0x34fae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950512)));
    // 0x34faec: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34faecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34faf0: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x34faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x34faf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34faf8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34FAF8u;
    SET_GPR_U32(ctx, 31, 0x34FB00u);
    ctx->pc = 0x34FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FAF8u;
            // 0x34fafc: 0xac43be70  sw          $v1, -0x4190($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB00u; }
        if (ctx->pc != 0x34FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB00u; }
        if (ctx->pc != 0x34FB00u) { return; }
    }
    ctx->pc = 0x34FB00u;
label_34fb00:
    // 0x34fb00: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x34FB00u;
    {
        const bool branch_taken_0x34fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB00u;
            // 0x34fb04: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb00) {
            ctx->pc = 0x34FC38u;
            goto label_34fc38;
        }
    }
    ctx->pc = 0x34FB08u;
label_34fb08:
    // 0x34fb08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34fb0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fb10: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x34fb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34fb14: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x34fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x34fb18: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x34FB18u;
    {
        const bool branch_taken_0x34fb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fb18) {
            ctx->pc = 0x34FC1Cu;
            goto label_34fc1c;
        }
    }
    ctx->pc = 0x34FB20u;
    // 0x34fb20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fb24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fb28: 0x9042beab  lbu         $v0, -0x4155($v0)
    ctx->pc = 0x34fb28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950571)));
    // 0x34fb2c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34FB2Cu;
    {
        const bool branch_taken_0x34fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34fb2c) {
            ctx->pc = 0x34FB50u;
            goto label_34fb50;
        }
    }
    ctx->pc = 0x34FB34u;
    // 0x34fb34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fb38: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fb3c: 0x2484fc60  addiu       $a0, $a0, -0x3A0
    ctx->pc = 0x34fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966368));
    // 0x34fb40: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34FB40u;
    SET_GPR_U32(ctx, 31, 0x34FB48u);
    ctx->pc = 0x34FB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB40u;
            // 0x34fb44: 0xac404370  sw          $zero, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB48u; }
        if (ctx->pc != 0x34FB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB48u; }
        if (ctx->pc != 0x34FB48u) { return; }
    }
    ctx->pc = 0x34FB48u;
label_34fb48:
    // 0x34fb48: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x34FB48u;
    {
        const bool branch_taken_0x34fb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fb48) {
            ctx->pc = 0x34FC34u;
            goto label_34fc34;
        }
    }
    ctx->pc = 0x34FB50u;
label_34fb50:
    // 0x34fb50: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34fb54: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34fb58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34FB58u;
    {
        const bool branch_taken_0x34fb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fb58) {
            ctx->pc = 0x34FB6Cu;
            goto label_34fb6c;
        }
    }
    ctx->pc = 0x34FB60u;
    // 0x34fb60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34fb64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34FB64u;
    {
        const bool branch_taken_0x34fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB64u;
            // 0x34fb68: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fb64) {
            ctx->pc = 0x34FB74u;
            goto label_34fb74;
        }
    }
    ctx->pc = 0x34FB6Cu;
label_34fb6c:
    // 0x34fb6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34fb70: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x34fb70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_34fb74:
    // 0x34fb74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34fb74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fb78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34fb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb80: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34FB80u;
    SET_GPR_U32(ctx, 31, 0x34FB88u);
    ctx->pc = 0x34FB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB80u;
            // 0x34fb84: 0x2406037c  addiu       $a2, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB88u; }
        if (ctx->pc != 0x34FB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB88u; }
        if (ctx->pc != 0x34FB88u) { return; }
    }
    ctx->pc = 0x34FB88u;
label_34fb88:
    // 0x34fb88: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34fb8c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fb90: 0x9064beaa  lbu         $a0, -0x4156($v1)
    ctx->pc = 0x34fb90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x34fb94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34fb94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fb98: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x34fb98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34fb9c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x34fb9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34fba0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x34fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x34fba4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34fba8: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x34fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x34fbac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fbb0: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x34fbb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x34fbb4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x34fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x34fbb8: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x34fbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x34fbbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fbc0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x34fbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x34fbc4: 0xa0434308  sb          $v1, 0x4308($v0)
    ctx->pc = 0x34fbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fbc8: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x34fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x34fbcc: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x34fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x34fbd0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34fbd4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34fbd8: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x34fbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x34fbdc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x34fbe0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x34fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x34fbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fbe8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34FBE8u;
    SET_GPR_U32(ctx, 31, 0x34FBF0u);
    ctx->pc = 0x34FBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FBE8u;
            // 0x34fbec: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FBF0u; }
        if (ctx->pc != 0x34FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FBF0u; }
        if (ctx->pc != 0x34FBF0u) { return; }
    }
    ctx->pc = 0x34FBF0u;
label_34fbf0:
    // 0x34fbf0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fbf4: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x34fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x34fbf8: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34fbfc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x34fbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34fc00: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34FC00u;
    SET_GPR_U32(ctx, 31, 0x34FC08u);
    ctx->pc = 0x34FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC00u;
            // 0x34fc04: 0x2407037c  addiu       $a3, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC08u; }
        if (ctx->pc != 0x34FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC08u; }
        if (ctx->pc != 0x34FC08u) { return; }
    }
    ctx->pc = 0x34FC08u;
label_34fc08:
    // 0x34fc08: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fc0c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34FC0Cu;
    SET_GPR_U32(ctx, 31, 0x34FC14u);
    ctx->pc = 0x34FC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC0Cu;
            // 0x34fc10: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC14u; }
        if (ctx->pc != 0x34FC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC14u; }
        if (ctx->pc != 0x34FC14u) { return; }
    }
    ctx->pc = 0x34FC14u;
label_34fc14:
    // 0x34fc14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34FC14u;
    {
        const bool branch_taken_0x34fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fc14) {
            ctx->pc = 0x34FC34u;
            goto label_34fc34;
        }
    }
    ctx->pc = 0x34FC1Cu;
label_34fc1c:
    // 0x34fc1c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fc20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34fc24: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fc28: 0x2484f710  addiu       $a0, $a0, -0x8F0
    ctx->pc = 0x34fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965008));
    // 0x34fc2c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34FC2Cu;
    SET_GPR_U32(ctx, 31, 0x34FC34u);
    ctx->pc = 0x34FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC2Cu;
            // 0x34fc30: 0xac434370  sw          $v1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC34u; }
        if (ctx->pc != 0x34FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC34u; }
        if (ctx->pc != 0x34FC34u) { return; }
    }
    ctx->pc = 0x34FC34u;
label_34fc34:
    // 0x34fc34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34fc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34fc38:
    // 0x34fc38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34fc38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34fc3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34fc3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34fc40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34fc40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fc44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34fc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fc48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34fc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fc4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fc50: 0x3e00008  jr          $ra
    ctx->pc = 0x34FC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC50u;
            // 0x34fc54: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FC58u;
    // 0x34fc58: 0x0  nop
    ctx->pc = 0x34fc58u;
    // NOP
    // 0x34fc5c: 0x0  nop
    ctx->pc = 0x34fc5cu;
    // NOP
label_34fc60:
    // 0x34fc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34fc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34fc6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34fc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34fc70: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34FC70u;
    SET_GPR_U32(ctx, 31, 0x34FC78u);
    ctx->pc = 0x34FC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FC70u;
            // 0x34fc74: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC78u; }
        if (ctx->pc != 0x34FC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FC78u; }
        if (ctx->pc != 0x34FC78u) { return; }
    }
    ctx->pc = 0x34FC78u;
label_34fc78:
    // 0x34fc78: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34fc7c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34fc80: 0x8c44dd80  lw          $a0, -0x2280($v0)
    ctx->pc = 0x34fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34fc84: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34fc88: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x34fc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34fc8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34fc90: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34fc94: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x34fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34fc98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x34fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x34fc9c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34fca0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34fca4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34fca8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x34fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34fcac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34fcb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34fcb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34fcb8: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34FCB8u;
    SET_GPR_U32(ctx, 31, 0x34FCC0u);
    ctx->pc = 0x34FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FCB8u;
            // 0x34fcbc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FCC0u; }
        if (ctx->pc != 0x34FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FCC0u; }
        if (ctx->pc != 0x34FCC0u) { return; }
    }
    ctx->pc = 0x34FCC0u;
label_34fcc0:
    // 0x34fcc0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34fcc4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34FCC4u;
    SET_GPR_U32(ctx, 31, 0x34FCCCu);
    ctx->pc = 0x34FCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FCC4u;
            // 0x34fcc8: 0x2484fce0  addiu       $a0, $a0, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FCCCu; }
        if (ctx->pc != 0x34FCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FCCCu; }
        if (ctx->pc != 0x34FCCCu) { return; }
    }
    ctx->pc = 0x34FCCCu;
label_34fccc:
    // 0x34fccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34fcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x34FCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FCD0u;
            // 0x34fcd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FCD8u;
    // 0x34fcd8: 0x0  nop
    ctx->pc = 0x34fcd8u;
    // NOP
    // 0x34fcdc: 0x0  nop
    ctx->pc = 0x34fcdcu;
    // NOP
label_34fce0:
    // 0x34fce0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x34fce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
    // 0x34fce4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x34fce8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34fce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x34fcec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34fcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x34fcf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34fcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34fcf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34fcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34fcf8: 0x3c1301df  lui         $s3, 0x1DF
    ctx->pc = 0x34fcf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)479 << 16));
    // 0x34fcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34fd00: 0x2673ddc0  addiu       $s3, $s3, -0x2240
    ctx->pc = 0x34fd00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958528));
    // 0x34fd04: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34FD04u;
    SET_GPR_U32(ctx, 31, 0x34FD0Cu);
    ctx->pc = 0x34FD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD04u;
            // 0x34fd08: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (runtime->hasFunction(0x343080u)) {
        auto targetFn = runtime->lookupFunction(0x343080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD0Cu; }
        if (ctx->pc != 0x34FD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343080_0x343080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD0Cu; }
        if (ctx->pc != 0x34FD0Cu) { return; }
    }
    ctx->pc = 0x34FD0Cu;
label_34fd0c:
    // 0x34fd0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34fd10: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x34fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34fd14: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x34fd14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34fd18: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34fd1c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x34fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x34fd20: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x34fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x34fd24: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x34fd24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x34fd28: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x34fd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34fd2c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fd30: 0x8c42be70  lw          $v0, -0x4190($v0)
    ctx->pc = 0x34fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
    // 0x34fd34: 0x2010  mfhi        $a0
    ctx->pc = 0x34fd34u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34fd38: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x34fd38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x34fd3c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34fd40: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x34fd40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34fd44: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x34FD44u;
    {
        const bool branch_taken_0x34fd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD44u;
            // 0x34fd48: 0xac644368  sw          $a0, 0x4368($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd44) {
            ctx->pc = 0x34FEF8u;
            goto label_34fef8;
        }
    }
    ctx->pc = 0x34FD4Cu;
    // 0x34fd4c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34fd50: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x34FD50u;
    {
        const bool branch_taken_0x34fd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fd50) {
            ctx->pc = 0x34FEF8u;
            goto label_34fef8;
        }
    }
    ctx->pc = 0x34FD58u;
    // 0x34fd58: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x34FD58u;
    {
        const bool branch_taken_0x34fd58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x34FD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD58u;
            // 0x34fd5c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd58) {
            ctx->pc = 0x34FEF8u;
            goto label_34fef8;
        }
    }
    ctx->pc = 0x34FD60u;
    // 0x34fd60: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x34fd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34fd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34fd68:
    // 0x34fd68: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fd6c: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34fd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34fd70: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fd74: 0xc0835b0  jal         func_20D6C0
    ctx->pc = 0x34FD74u;
    SET_GPR_U32(ctx, 31, 0x34FD7Cu);
    ctx->pc = 0x34FD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD74u;
            // 0x34fd78: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6C0u;
    if (runtime->hasFunction(0x20D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD7Cu; }
        if (ctx->pc != 0x34FD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D6C0_0x20d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD7Cu; }
        if (ctx->pc != 0x34FD7Cu) { return; }
    }
    ctx->pc = 0x34FD7Cu;
label_34fd7c:
    // 0x34fd7c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fd80: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34fd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34fd84: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fd88: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34fd8c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34FD8Cu;
    SET_GPR_U32(ctx, 31, 0x34FD94u);
    ctx->pc = 0x34FD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FD8Cu;
            // 0x34fd90: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD94u; }
        if (ctx->pc != 0x34FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FD94u; }
        if (ctx->pc != 0x34FD94u) { return; }
    }
    ctx->pc = 0x34FD94u;
label_34fd94:
    // 0x34fd94: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fd98: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x34fd98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x34fd9c: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fda0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34fda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34fda4: 0x8e480038  lw          $t0, 0x38($s2)
    ctx->pc = 0x34fda4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x34fda8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34fdac: 0x103402  srl         $a2, $s0, 16
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x34fdb0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34fdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34fdb4: 0x513821  addu        $a3, $v0, $s1
    ctx->pc = 0x34fdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34fdb8: 0xa0e80040  sb          $t0, 0x40($a3)
    ctx->pc = 0x34fdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x34fdbc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fdc0: 0x8ca54088  lw          $a1, 0x4088($a1)
    ctx->pc = 0x34fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16520)));
    // 0x34fdc4: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x34fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34fdc8: 0xa0a60043  sb          $a2, 0x43($a1)
    ctx->pc = 0x34fdc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 67), (uint8_t)GPR_U32(ctx, 6));
    // 0x34fdcc: 0x8c844088  lw          $a0, 0x4088($a0)
    ctx->pc = 0x34fdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16520)));
    // 0x34fdd0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34fdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34fdd4: 0xa0900044  sb          $s0, 0x44($a0)
    ctx->pc = 0x34fdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 68), (uint8_t)GPR_U32(ctx, 16));
    // 0x34fdd8: 0x8c634088  lw          $v1, 0x4088($v1)
    ctx->pc = 0x34fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34fddc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x34fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34fde0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x34fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34fde4: 0xac640048  sw          $a0, 0x48($v1)
    ctx->pc = 0x34fde4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 4));
    // 0x34fde8: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fdec: 0xc0d2938  jal         func_34A4E0
    ctx->pc = 0x34FDECu;
    SET_GPR_U32(ctx, 31, 0x34FDF4u);
    ctx->pc = 0x34FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FDECu;
            // 0x34fdf0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A4E0u;
    if (runtime->hasFunction(0x34A4E0u)) {
        auto targetFn = runtime->lookupFunction(0x34A4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FDF4u; }
        if (ctx->pc != 0x34FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A4E0_0x34a4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FDF4u; }
        if (ctx->pc != 0x34FDF4u) { return; }
    }
    ctx->pc = 0x34FDF4u;
label_34fdf4:
    // 0x34fdf4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34fdf8: 0x102202  srl         $a0, $s0, 8
    ctx->pc = 0x34fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x34fdfc: 0x8c654088  lw          $a1, 0x4088($v1)
    ctx->pc = 0x34fdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34fe00: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x34fe00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34fe04: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x34fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x34fe08: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FE08u;
    {
        const bool branch_taken_0x34fe08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE08u;
            // 0x34fe0c: 0xa0820042  sb          $v0, 0x42($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fe08) {
            ctx->pc = 0x34FE20u;
            goto label_34fe20;
        }
    }
    ctx->pc = 0x34FE10u;
    // 0x34fe10: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fe14: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fe18: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34fe1c: 0xa0430041  sb          $v1, 0x41($v0)
    ctx->pc = 0x34fe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 3));
label_34fe20:
    // 0x34fe20: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fe24: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x34fe24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34fe28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe2c: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x34FE2Cu;
    {
        const bool branch_taken_0x34fe2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x34fe2c) {
            ctx->pc = 0x34FE70u;
            goto label_34fe70;
        }
    }
    ctx->pc = 0x34FE34u;
    // 0x34fe34: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34fe38: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fe3c: 0x8c644088  lw          $a0, 0x4088($v1)
    ctx->pc = 0x34fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34fe40: 0x9043bea8  lbu         $v1, -0x4158($v0)
    ctx->pc = 0x34fe40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x34fe44: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x34fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x34fe48: 0x90820044  lbu         $v0, 0x44($a0)
    ctx->pc = 0x34fe48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x34fe4c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34FE4Cu;
    {
        const bool branch_taken_0x34fe4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34fe4c) {
            ctx->pc = 0x34FE70u;
            goto label_34fe70;
        }
    }
    ctx->pc = 0x34FE54u;
    // 0x34fe54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fe58: 0x14c20021  bne         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x34FE58u;
    {
        const bool branch_taken_0x34fe58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fe58) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FE60u;
    // 0x34fe60: 0x90820041  lbu         $v0, 0x41($a0)
    ctx->pc = 0x34fe60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 65)));
    // 0x34fe64: 0x1445001e  bne         $v0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x34FE64u;
    {
        const bool branch_taken_0x34fe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x34fe64) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FE6Cu;
    // 0x34fe6c: 0x0  nop
    ctx->pc = 0x34fe6cu;
    // NOP
label_34fe70:
    // 0x34fe70: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34fe74: 0x8c434088  lw          $v1, 0x4088($v0)
    ctx->pc = 0x34fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fe78: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x34fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34fe7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fe80: 0x90a30040  lbu         $v1, 0x40($a1)
    ctx->pc = 0x34fe80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x34fe84: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x34FE84u;
    {
        const bool branch_taken_0x34fe84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34fe84) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FE8Cu;
    // 0x34fe8c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fe90: 0xc0d2918  jal         func_34A460
    ctx->pc = 0x34FE90u;
    SET_GPR_U32(ctx, 31, 0x34FE98u);
    ctx->pc = 0x34FE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FE90u;
            // 0x34fe94: 0x8c44be70  lw          $a0, -0x4190($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A460u;
    if (runtime->hasFunction(0x34A460u)) {
        auto targetFn = runtime->lookupFunction(0x34A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FE98u; }
        if (ctx->pc != 0x34FE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A460_0x34a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FE98u; }
        if (ctx->pc != 0x34FE98u) { return; }
    }
    ctx->pc = 0x34FE98u;
label_34fe98:
    // 0x34fe98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34FE98u;
    {
        const bool branch_taken_0x34fe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fe98) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FEA0u;
    // 0x34fea0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34fea4: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34fea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34fea8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34FEA8u;
    {
        const bool branch_taken_0x34fea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34fea8) {
            ctx->pc = 0x34FED8u;
            goto label_34fed8;
        }
    }
    ctx->pc = 0x34FEB0u;
    // 0x34feb0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34feb4: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34feb8: 0xc0d2964  jal         func_34A590
    ctx->pc = 0x34FEB8u;
    SET_GPR_U32(ctx, 31, 0x34FEC0u);
    ctx->pc = 0x34FEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEB8u;
            // 0x34febc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34A590u;
    if (runtime->hasFunction(0x34A590u)) {
        auto targetFn = runtime->lookupFunction(0x34A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FEC0u; }
        if (ctx->pc != 0x34FEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034A590_0x34a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FEC0u; }
        if (ctx->pc != 0x34FEC0u) { return; }
    }
    ctx->pc = 0x34FEC0u;
label_34fec0:
    // 0x34fec0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34fec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34fec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FEC8u;
    {
        const bool branch_taken_0x34fec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34fec8) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FED0u;
    // 0x34fed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34FED0u;
    {
        const bool branch_taken_0x34fed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FED0u;
            // 0x34fed4: 0x32b4ffff  andi        $s4, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fed0) {
            ctx->pc = 0x34FEE0u;
            goto label_34fee0;
        }
    }
    ctx->pc = 0x34FED8u;
label_34fed8:
    // 0x34fed8: 0x32b4ffff  andi        $s4, $s5, 0xFFFF
    ctx->pc = 0x34fed8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x34fedc: 0x0  nop
    ctx->pc = 0x34fedcu;
    // NOP
label_34fee0:
    // 0x34fee0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34fee4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x34fee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x34fee8: 0x265200d8  addiu       $s2, $s2, 0xD8
    ctx->pc = 0x34fee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 216));
    // 0x34feec: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x34feecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x34fef0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x34FEF0u;
    {
        const bool branch_taken_0x34fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FEF0u;
            // 0x34fef4: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fef0) {
            ctx->pc = 0x34FD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34fd68;
        }
    }
    ctx->pc = 0x34FEF8u;
label_34fef8:
    // 0x34fef8: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x34fef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x34fefc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x34fefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34ff00: 0x10a20049  beq         $a1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x34FF00u;
    {
        const bool branch_taken_0x34ff00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ff00) {
            ctx->pc = 0x350028u;
            goto label_350028;
        }
    }
    ctx->pc = 0x34FF08u;
    // 0x34ff08: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x34ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34ff0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ff10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34ff14: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34ff18: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x34ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x34ff1c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34ff20: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x34ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34ff24: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x34ff24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x34ff28: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ff2c: 0x9065bea9  lbu         $a1, -0x4157($v1)
    ctx->pc = 0x34ff2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950569)));
    // 0x34ff30: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x34ff30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34ff34: 0x90e60044  lbu         $a2, 0x44($a3)
    ctx->pc = 0x34ff34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x34ff38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ff3c: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FF3Cu;
    {
        const bool branch_taken_0x34ff3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x34FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF3Cu;
            // 0x34ff40: 0xa0864308  sb          $a2, 0x4308($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17160), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ff3c) {
            ctx->pc = 0x34FF64u;
            goto label_34ff64;
        }
    }
    ctx->pc = 0x34FF44u;
    // 0x34ff44: 0x90e40041  lbu         $a0, 0x41($a3)
    ctx->pc = 0x34ff44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 65)));
    // 0x34ff48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ff4c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FF4Cu;
    {
        const bool branch_taken_0x34ff4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34ff4c) {
            ctx->pc = 0x34FF64u;
            goto label_34ff64;
        }
    }
    ctx->pc = 0x34FF54u;
    // 0x34ff54: 0x3c0401e0  lui         $a0, 0x1E0
    ctx->pc = 0x34ff54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)480 << 16));
    // 0x34ff58: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34ff5c: 0x9084bea8  lbu         $a0, -0x4158($a0)
    ctx->pc = 0x34ff5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294950568)));
    // 0x34ff60: 0xa0644308  sb          $a0, 0x4308($v1)
    ctx->pc = 0x34ff60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17160), (uint8_t)GPR_U32(ctx, 4));
label_34ff64:
    // 0x34ff64: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34ff68: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34ff68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34ff6c: 0x8c664088  lw          $a2, 0x4088($v1)
    ctx->pc = 0x34ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16520)));
    // 0x34ff70: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34ff74: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x34ff74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x34ff78: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34ff7c: 0x8ce60048  lw          $a2, 0x48($a3)
    ctx->pc = 0x34ff7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x34ff80: 0xaca640b0  sw          $a2, 0x40B0($a1)
    ctx->pc = 0x34ff80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16560), GPR_U32(ctx, 6));
    // 0x34ff84: 0x90e50043  lbu         $a1, 0x43($a3)
    ctx->pc = 0x34ff84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 67)));
    // 0x34ff88: 0xa0859500  sb          $a1, -0x6B00($a0)
    ctx->pc = 0x34ff88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939904), (uint8_t)GPR_U32(ctx, 5));
    // 0x34ff8c: 0x90639500  lbu         $v1, -0x6B00($v1)
    ctx->pc = 0x34ff8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939904)));
    // 0x34ff90: 0x5c600005  bgtzl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FF90u;
    {
        const bool branch_taken_0x34ff90 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x34ff90) {
            ctx->pc = 0x34FF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FF90u;
            // 0x34ff94: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FFA8u;
            goto label_34ffa8;
        }
    }
    ctx->pc = 0x34FF98u;
    // 0x34ff98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ff9c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34ffa0: 0xa0659500  sb          $a1, -0x6B00($v1)
    ctx->pc = 0x34ffa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 5));
    // 0x34ffa4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x34ffa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_34ffa8:
    // 0x34ffa8: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x34ffa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x34ffac: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x34FFACu;
    {
        const bool branch_taken_0x34ffac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ffac) {
            ctx->pc = 0x34FFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34FFACu;
            // 0x34ffb0: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34FFC4u;
            goto label_34ffc4;
        }
    }
    ctx->pc = 0x34FFB4u;
    // 0x34ffb4: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x34ffb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34ffb8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34ffbc: 0xa0659500  sb          $a1, -0x6B00($v1)
    ctx->pc = 0x34ffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939904), (uint8_t)GPR_U32(ctx, 5));
    // 0x34ffc0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x34ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_34ffc4:
    // 0x34ffc4: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x34ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x34ffc8: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x34ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x34ffcc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34FFCCu;
    SET_GPR_U32(ctx, 31, 0x34FFD4u);
    ctx->pc = 0x34FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FFCCu;
            // 0x34ffd0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FFD4u; }
        if (ctx->pc != 0x34FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FFD4u; }
        if (ctx->pc != 0x34FFD4u) { return; }
    }
    ctx->pc = 0x34FFD4u;
label_34ffd4:
    // 0x34ffd4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34ffd8: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34ffdc: 0x8c44be70  lw          $a0, -0x4190($v0)
    ctx->pc = 0x34ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950512)));
    // 0x34ffe0: 0x2463bdd0  addiu       $v1, $v1, -0x4230
    ctx->pc = 0x34ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950352));
    // 0x34ffe4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34ffe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34ffe8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ffec: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x34ffecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x34fff0: 0x8c424088  lw          $v0, 0x4088($v0)
    ctx->pc = 0x34fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16520)));
    // 0x34fff4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x34fff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34fff8: 0xc049c48  jal         func_127120
    ctx->pc = 0x34FFF8u;
    SET_GPR_U32(ctx, 31, 0x350000u);
    ctx->pc = 0x34FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FFF8u;
            // 0x34fffc: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350000u; }
        if (ctx->pc != 0x350000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350000u; }
        if (ctx->pc != 0x350000u) { return; }
    }
    ctx->pc = 0x350000u;
label_350000:
    // 0x350000: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350004: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350008: 0x8c63be70  lw          $v1, -0x4190($v1)
    ctx->pc = 0x350008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950512)));
    // 0x35000c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350010: 0x24840250  addiu       $a0, $a0, 0x250
    ctx->pc = 0x350010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 592));
    // 0x350014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x350014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x350018: 0xc082674  jal         func_2099D0
    ctx->pc = 0x350018u;
    SET_GPR_U32(ctx, 31, 0x350020u);
    ctx->pc = 0x35001Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350018u;
            // 0x35001c: 0xac43be70  sw          $v1, -0x4190($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950512), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350020u; }
        if (ctx->pc != 0x350020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350020u; }
        if (ctx->pc != 0x350020u) { return; }
    }
    ctx->pc = 0x350020u;
label_350020:
    // 0x350020: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x350020u;
    {
        const bool branch_taken_0x350020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350020u;
            // 0x350024: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350020) {
            ctx->pc = 0x350128u;
            goto label_350128;
        }
    }
    ctx->pc = 0x350028u;
label_350028:
    // 0x350028: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x350028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x35002c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35002cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350030: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x350030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x350034: 0x8c424368  lw          $v0, 0x4368($v0)
    ctx->pc = 0x350034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17256)));
    // 0x350038: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x350038u;
    {
        const bool branch_taken_0x350038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x350038) {
            ctx->pc = 0x35010Cu;
            goto label_35010c;
        }
    }
    ctx->pc = 0x350040u;
    // 0x350040: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x350040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x350044: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x350044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x350048: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350048u;
    {
        const bool branch_taken_0x350048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350048) {
            ctx->pc = 0x35005Cu;
            goto label_35005c;
        }
    }
    ctx->pc = 0x350050u;
    // 0x350050: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350054: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350054u;
    {
        const bool branch_taken_0x350054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350054u;
            // 0x350058: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350054) {
            ctx->pc = 0x350064u;
            goto label_350064;
        }
    }
    ctx->pc = 0x35005Cu;
label_35005c:
    // 0x35005c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35005cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350060: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x350060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_350064:
    // 0x350064: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x350064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350068: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x350068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x35006c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35006cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350070: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x350070u;
    SET_GPR_U32(ctx, 31, 0x350078u);
    ctx->pc = 0x350074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350070u;
            // 0x350074: 0x2406037c  addiu       $a2, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350078u; }
        if (ctx->pc != 0x350078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350078u; }
        if (ctx->pc != 0x350078u) { return; }
    }
    ctx->pc = 0x350078u;
label_350078:
    // 0x350078: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35007c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350080: 0x9064beaa  lbu         $a0, -0x4156($v1)
    ctx->pc = 0x350080u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x350084: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x350084u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350088: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x350088u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x35008c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x35008cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x350090: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x350090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x350094: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x350098: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x350098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x35009c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35009cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3500a0: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x3500a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x3500a4: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3500a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x3500a8: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x3500a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3500ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3500acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3500b0: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x3500b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x3500b4: 0xa0434308  sb          $v1, 0x4308($v0)
    ctx->pc = 0x3500b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 3));
    // 0x3500b8: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x3500b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x3500bc: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x3500bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3500c0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3500c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3500c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3500c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3500c8: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x3500c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x3500cc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3500ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3500d0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3500d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x3500d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3500d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3500d8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3500D8u;
    SET_GPR_U32(ctx, 31, 0x3500E0u);
    ctx->pc = 0x3500DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500D8u;
            // 0x3500dc: 0xafa2014c  sw          $v0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500E0u; }
        if (ctx->pc != 0x3500E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500E0u; }
        if (ctx->pc != 0x3500E0u) { return; }
    }
    ctx->pc = 0x3500E0u;
label_3500e0:
    // 0x3500e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3500e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3500e4: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x3500e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x3500e8: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x3500e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x3500ec: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3500ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3500f0: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x3500F0u;
    SET_GPR_U32(ctx, 31, 0x3500F8u);
    ctx->pc = 0x3500F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500F0u;
            // 0x3500f4: 0x2407037c  addiu       $a3, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500F8u; }
        if (ctx->pc != 0x3500F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3500F8u; }
        if (ctx->pc != 0x3500F8u) { return; }
    }
    ctx->pc = 0x3500F8u;
label_3500f8:
    // 0x3500f8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3500f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x3500fc: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x3500FCu;
    SET_GPR_U32(ctx, 31, 0x350104u);
    ctx->pc = 0x350100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3500FCu;
            // 0x350100: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350104u; }
        if (ctx->pc != 0x350104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350104u; }
        if (ctx->pc != 0x350104u) { return; }
    }
    ctx->pc = 0x350104u;
label_350104:
    // 0x350104: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x350104u;
    {
        const bool branch_taken_0x350104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350104) {
            ctx->pc = 0x350124u;
            goto label_350124;
        }
    }
    ctx->pc = 0x35010Cu;
label_35010c:
    // 0x35010c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35010cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x350110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x350114: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350118: 0x2484fc60  addiu       $a0, $a0, -0x3A0
    ctx->pc = 0x350118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966368));
    // 0x35011c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x35011Cu;
    SET_GPR_U32(ctx, 31, 0x350124u);
    ctx->pc = 0x350120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35011Cu;
            // 0x350120: 0xac434370  sw          $v1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350124u; }
        if (ctx->pc != 0x350124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350124u; }
        if (ctx->pc != 0x350124u) { return; }
    }
    ctx->pc = 0x350124u;
label_350124:
    // 0x350124: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x350124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_350128:
    // 0x350128: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x350128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35012c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35012cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x350130: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x350130u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x350134: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x350134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35013c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35013cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350140: 0x3e00008  jr          $ra
    ctx->pc = 0x350140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350140u;
            // 0x350144: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350148u;
    // 0x350148: 0x0  nop
    ctx->pc = 0x350148u;
    // NOP
    // 0x35014c: 0x0  nop
    ctx->pc = 0x35014cu;
    // NOP
label_350150:
    // 0x350150: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x350150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x350154: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x350154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x350158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x350158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35015c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350160: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x350160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x350164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350164u;
    {
        const bool branch_taken_0x350164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350164) {
            ctx->pc = 0x350178u;
            goto label_350178;
        }
    }
    ctx->pc = 0x35016Cu;
    // 0x35016c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350170u;
    {
        const bool branch_taken_0x350170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350170u;
            // 0x350174: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350170) {
            ctx->pc = 0x350180u;
            goto label_350180;
        }
    }
    ctx->pc = 0x350178u;
label_350178:
    // 0x350178: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x35017c: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x35017cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_350180:
    // 0x350180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x350180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350184: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x350184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x350188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35018c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x35018cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x350190: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x350190u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x350194: 0x9044bea9  lbu         $a0, -0x4157($v0)
    ctx->pc = 0x350194u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x350198: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x350198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x35019c: 0x8c63ddc0  lw          $v1, -0x2240($v1)
    ctx->pc = 0x35019cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958528)));
    // 0x3501a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3501a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3501a4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x3501a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x3501a8: 0x9045bea8  lbu         $a1, -0x4158($v0)
    ctx->pc = 0x3501a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x3501ac: 0x43200  sll         $a2, $a0, 8
    ctx->pc = 0x3501acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3501b0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3501b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3501b4: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x3501b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3501b8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3501b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3501bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3501bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3501c0: 0x0  nop
    ctx->pc = 0x3501c0u;
    // NOP
    // 0x3501c4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3501C4u;
    SET_GPR_U32(ctx, 31, 0x3501CCu);
    ctx->pc = 0x3501C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3501C4u;
            // 0x3501c8: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501CCu; }
        if (ctx->pc != 0x3501CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501CCu; }
        if (ctx->pc != 0x3501CCu) { return; }
    }
    ctx->pc = 0x3501CCu;
label_3501cc:
    // 0x3501cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3501d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3501d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3501d4: 0x8c4240b0  lw          $v0, 0x40B0($v0)
    ctx->pc = 0x3501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x3501d8: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x3501d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x3501dc: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x3501dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x3501e0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3501E0u;
    SET_GPR_U32(ctx, 31, 0x3501E8u);
    ctx->pc = 0x3501E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3501E0u;
            // 0x3501e4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501E8u; }
        if (ctx->pc != 0x3501E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501E8u; }
        if (ctx->pc != 0x3501E8u) { return; }
    }
    ctx->pc = 0x3501E8u;
label_3501e8:
    // 0x3501e8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3501e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3501ec: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x3501ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x3501f0: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x3501f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x3501f4: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3501F4u;
    SET_GPR_U32(ctx, 31, 0x3501FCu);
    ctx->pc = 0x3501F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3501F4u;
            // 0x3501f8: 0xafb0002c  sw          $s0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501FCu; }
        if (ctx->pc != 0x3501FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3501FCu; }
        if (ctx->pc != 0x3501FCu) { return; }
    }
    ctx->pc = 0x3501FCu;
label_3501fc:
    // 0x3501fc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3501fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350200: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x350200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350204: 0xa0409490  sb          $zero, -0x6B70($v0)
    ctx->pc = 0x350204u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939792), (uint8_t)GPR_U32(ctx, 0));
    // 0x350208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35020c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35020cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350210: 0x248450d0  addiu       $a0, $a0, 0x50D0
    ctx->pc = 0x350210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20688));
    // 0x350214: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350214u;
    SET_GPR_U32(ctx, 31, 0x35021Cu);
    ctx->pc = 0x350218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350214u;
            // 0x350218: 0xa0439488  sb          $v1, -0x6B78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939784), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35021Cu; }
        if (ctx->pc != 0x35021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35021Cu; }
        if (ctx->pc != 0x35021Cu) { return; }
    }
    ctx->pc = 0x35021Cu;
label_35021c:
    // 0x35021c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x35021cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350220: 0x24051120  addiu       $a1, $zero, 0x1120
    ctx->pc = 0x350220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
    // 0x350224: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x350224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x350228: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x350228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35022c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x35022Cu;
    SET_GPR_U32(ctx, 31, 0x350234u);
    ctx->pc = 0x350230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35022Cu;
            // 0x350230: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350234u; }
        if (ctx->pc != 0x350234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350234u; }
        if (ctx->pc != 0x350234u) { return; }
    }
    ctx->pc = 0x350234u;
label_350234:
    // 0x350234: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x350238: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x350238u;
    SET_GPR_U32(ctx, 31, 0x350240u);
    ctx->pc = 0x35023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350238u;
            // 0x35023c: 0x248403f0  addiu       $a0, $a0, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350240u; }
        if (ctx->pc != 0x350240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350240u; }
        if (ctx->pc != 0x350240u) { return; }
    }
    ctx->pc = 0x350240u;
label_350240:
    // 0x350240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x350240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350248: 0x3e00008  jr          $ra
    ctx->pc = 0x350248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35024Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350248u;
            // 0x35024c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350250u;
label_350250:
    // 0x350250: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x350250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x350254: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x350258: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35025c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35025cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350260: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350264: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x350264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x350268: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x350268u;
    {
        const bool branch_taken_0x350268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x350268) {
            ctx->pc = 0x35027Cu;
            goto label_35027c;
        }
    }
    ctx->pc = 0x350270u;
    // 0x350270: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350274: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x350274u;
    {
        const bool branch_taken_0x350274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x350278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350274u;
            // 0x350278: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350274) {
            ctx->pc = 0x350284u;
            goto label_350284;
        }
    }
    ctx->pc = 0x35027Cu;
label_35027c:
    // 0x35027c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350280: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x350280u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_350284:
    // 0x350284: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x350284u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350288: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x350288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x35028c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35028cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x350290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350294: 0x90469500  lbu         $a2, -0x6B00($v0)
    ctx->pc = 0x350294u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939904)));
    // 0x350298: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x350298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35029c: 0x9063bea9  lbu         $v1, -0x4157($v1)
    ctx->pc = 0x35029cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950569)));
    // 0x3502a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3502a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3502a4: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x3502a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3502a8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3502a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3502ac: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3502acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3502b0: 0x9042bea8  lbu         $v0, -0x4158($v0)
    ctx->pc = 0x3502b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950568)));
    // 0x3502b4: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3502b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3502b8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x3502b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3502bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3502bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3502c0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3502C0u;
    SET_GPR_U32(ctx, 31, 0x3502C8u);
    ctx->pc = 0x3502C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3502C0u;
            // 0x3502c4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502C8u; }
        if (ctx->pc != 0x3502C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502C8u; }
        if (ctx->pc != 0x3502C8u) { return; }
    }
    ctx->pc = 0x3502C8u;
label_3502c8:
    // 0x3502c8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3502c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3502cc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3502ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3502d0: 0x8c4240b0  lw          $v0, 0x40B0($v0)
    ctx->pc = 0x3502d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16560)));
    // 0x3502d4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x3502d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x3502d8: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x3502d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x3502dc: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3502DCu;
    SET_GPR_U32(ctx, 31, 0x3502E4u);
    ctx->pc = 0x3502E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3502DCu;
            // 0x3502e0: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502E4u; }
        if (ctx->pc != 0x3502E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3502E4u; }
        if (ctx->pc != 0x3502E4u) { return; }
    }
    ctx->pc = 0x3502E4u;
label_3502e4:
    // 0x3502e4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3502e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3502e8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3502e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3502ec: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3502ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3502f0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x3502f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x3502f4: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x3502f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x3502f8: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x3502F8u;
    SET_GPR_U32(ctx, 31, 0x350300u);
    ctx->pc = 0x3502FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3502F8u;
            // 0x3502fc: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350300u; }
        if (ctx->pc != 0x350300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350300u; }
        if (ctx->pc != 0x350300u) { return; }
    }
    ctx->pc = 0x350300u;
label_350300:
    // 0x350300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350304: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350308: 0xa0439490  sb          $v1, -0x6B70($v0)
    ctx->pc = 0x350308u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939792), (uint8_t)GPR_U32(ctx, 3));
    // 0x35030c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35030cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x350310: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x350310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x350314: 0x248452e0  addiu       $a0, $a0, 0x52E0
    ctx->pc = 0x350314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
    // 0x350318: 0xc043e52  jal         func_10F948
    ctx->pc = 0x350318u;
    SET_GPR_U32(ctx, 31, 0x350320u);
    ctx->pc = 0x35031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350318u;
            // 0x35031c: 0xa0409488  sb          $zero, -0x6B78($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939784), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350320u; }
        if (ctx->pc != 0x350320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350320u; }
        if (ctx->pc != 0x350320u) { return; }
    }
    ctx->pc = 0x350320u;
label_350320:
    // 0x350320: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x350320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x350324: 0x24051120  addiu       $a1, $zero, 0x1120
    ctx->pc = 0x350324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
    // 0x350328: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x350328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x35032c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x35032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350330: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x350330u;
    SET_GPR_U32(ctx, 31, 0x350338u);
    ctx->pc = 0x350334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x350330u;
            // 0x350334: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350338u; }
        if (ctx->pc != 0x350338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350338u; }
        if (ctx->pc != 0x350338u) { return; }
    }
    ctx->pc = 0x350338u;
label_350338:
    // 0x350338: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x350338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x35033c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x35033Cu;
    SET_GPR_U32(ctx, 31, 0x350344u);
    ctx->pc = 0x350340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35033Cu;
            // 0x350340: 0x24840470  addiu       $a0, $a0, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350344u; }
        if (ctx->pc != 0x350344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x350344u; }
        if (ctx->pc != 0x350344u) { return; }
    }
    ctx->pc = 0x350344u;
label_350344:
    // 0x350344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35034c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350350: 0x3e00008  jr          $ra
    ctx->pc = 0x350350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x350350u;
            // 0x350354: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x350358u;
    // 0x350358: 0x0  nop
    ctx->pc = 0x350358u;
    // NOP
    // 0x35035c: 0x0  nop
    ctx->pc = 0x35035cu;
    // NOP
    ctx->pc = 0x350360u;
}
